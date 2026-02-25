#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
        connect(ui->rbDate, SIGNAL(clicked()), this, SLOT(on_rbdate_clicked()));

    // Get the Pie Chart
    GraphChartView* pieGraph = GraphFactory::getQChartView(GraphFactory::PieGraph);
    if (!pieGraph) {
        qWarning() << "Failed to create Pie Graph!";
         return;  // Return if the pie chart creation failed
    }

    // Ensure layout for frame_7
    QLayout* layout = ui->frame_7->layout();
    if (!layout) {
        layout = new QVBoxLayout(ui->frame_7);
        ui->frame_7->setLayout(layout);
    }

    // Clear the old chart from the layout
    QLayoutItem* item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) item->widget()->setParent(nullptr);  // Remove old widget from layout
        delete item;  // Delete the old widget/item
    }

    // Add the pie chart widget to the layout of frame_7
    layout->addWidget(pieGraph);

    // Prepare data for the pie chart
    QList<QPair<QString, double>> graphData;

    // Load JSON data
    QFile file(":/data.json");  // Assuming it's a resource file
    QJsonObject liveObj;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
        file.close();
        if (doc.isObject()) {
            QJsonObject rootObj = doc.object();
            if (rootObj.contains("PieChart")) {
                QJsonObject pieObj = rootObj["PieChart"].toObject();
                if (pieObj.contains("Live")) {
                    liveObj = pieObj["Live"].toObject();
                }
            }
        }
    }
    // Fallback if the data is missing
    if (liveObj.isEmpty()) {
        liveObj["Fired Objects"] = QJsonObject{{"count", 1}};
        liveObj["Non Fired Objects"] = QJsonObject{{"count", 1}};
    }

    // Build the data for the pie chart
    for (auto it = liveObj.begin(); it != liveObj.end(); ++it) {
        QString key = it.key();
        QJsonValue value = it.value();
        double sliceValue = 0;
        QString hoverText;

        if (value.isObject()) {
            QJsonObject obj = value.toObject();

            // Sum all numeric values inside object
            for (auto innerIt = obj.begin(); innerIt != obj.end(); ++innerIt) {
                sliceValue += innerIt.value().toDouble();
            }

            // Build hover text with details of the values
            QStringList details;
            for (auto innerIt = obj.begin(); innerIt != obj.end(); ++innerIt)
                details << innerIt.key() + ": " + QString::number(innerIt.value().toDouble());
            hoverText = details.join("\n");
        } else {
            sliceValue = value.toDouble();
            hoverText = QString::number(sliceValue);
        }

        // Determine the slice label based on the category (Fired or Non Fired)
        QString sliceLabel;
        if (key == "Fired Objects")
            sliceLabel = "Fired";
        else if (key == "Non Fired Objects")
            sliceLabel = "Non Fired";
        else
            sliceLabel = key;

        // Combine label + hover text for tooltip
        QString finalLabel = sliceLabel + "\n" + hoverText;

        graphData.append(qMakePair(finalLabel, sliceValue));
    }

    // Update the pie chart with the new data
    pieGraph->updateData(graphData);

    // Set a title for the pie chart
    pieGraph->setGraphTitle("Live Fired Objects Pie Chart");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rbDate_clicked()
{
        this->hide();
    DateWindow *dateWindow = new DateWindow(this);
        dateWindow->show();
}
