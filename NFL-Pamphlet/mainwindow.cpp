#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    NFLData::readData(teamData, "../data/NFL_Information.csv");
    setupTable();

    // Display teamData in the table widget
    for (int i = 0; i < teamData.size(); i++)
    {
        ui->teamTable->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(teamData[i].getTeamName())));
        ui->teamTable->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(teamData[i].getStadiumName())));
        ui->teamTable->setItem(i, 2, new QTableWidgetItem(QString::fromStdString(to_string(teamData[i].getCapacity()))));
        ui->teamTable->setItem(i, 3, new QTableWidgetItem(QString::fromStdString(teamData[i].getLocation())));
        ui->teamTable->setItem(i, 4, new QTableWidgetItem(QString::fromStdString(teamData[i].getConference())));
        ui->teamTable->setItem(i, 5, new QTableWidgetItem(QString::fromStdString(teamData[i].getDivision())));
        ui->teamTable->setItem(i, 6, new QTableWidgetItem(QString::fromStdString(teamData[i].getSurfaceType())));
        ui->teamTable->setItem(i, 7, new QTableWidgetItem(QString::fromStdString(teamData[i].getRoofType())));
        ui->teamTable->setItem(i, 8, new QTableWidgetItem(QString::fromStdString(to_string(teamData[i].getYearOpened()))));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_filterButton_clicked()
{
<<<<<<< HEAD
    filterWindow = new FilterWindow(this);
    filterWindow->show();
=======
    filterWindow = new FilterWindow(this);              // Create a new FilterWindow object
    filterWindow->setAttribute(Qt::WA_DeleteOnClose);   // Delete the FilterWindow object when it is closed
    filterWindow->show();                               // Show the FilterWindow object
>>>>>>> main
}


void MainWindow::on_helpButton_clicked()
{
<<<<<<< HEAD
    helpWindow = new HelpWindow(this);
    helpWindow->show();
=======
    helpWindow = new HelpWindow(this);                  // Create a new HelpWindow object
    helpWindow->setAttribute(Qt::WA_DeleteOnClose);     // Delete the HelpWindow object when it is closed
    helpWindow->show();                                 // Show the HelpWindow object
>>>>>>> main
}


void MainWindow::on_contactButton_clicked()
{
<<<<<<< HEAD
    contactWindow = new ContactWindow(this);
    contactWindow->show();
=======
    contactWindow = new ContactWindow(this);            // Create a new ContactWindow object
    contactWindow->setAttribute(Qt::WA_DeleteOnClose);  // Delete the ContactWindow object when it is closed
    contactWindow->show();                              // Show the ContactWindow object
>>>>>>> main
}


void MainWindow::on_loginButton_clicked()
{
<<<<<<< HEAD
    adminWindow = new AdminWindow(this);
    adminWindow->show();
=======
    adminWindow = new AdminWindow(this);                // Create a new AdminWindow object
    adminWindow->setAttribute(Qt::WA_DeleteOnClose);    // Delete the AdminWindow object when it is closed
    adminWindow->show();                                // Show the AdminWindow object                  
>>>>>>> main
}


void MainWindow::on_refreshButton_clicked()
{

}


void MainWindow::setupTable()
{
    ui->teamTable->setRowCount(teamData.size());
    ui->teamTable->setColumnCount(9);
    ui->teamTable->setHorizontalHeaderLabels({"Team", "Stadium", "Capacity", "Location", "Conference", "Division", "Surface Type", "Roof Type", "Year Opened"});
    ui->teamTable->setEditTriggers(QAbstractItemView::NoEditTriggers); // Disable editing of table cells
    ui->teamTable->setSelectionBehavior(QAbstractItemView::SelectRows); // Select entire row when clicked
    ui->teamTable->setSelectionMode(QAbstractItemView::SingleSelection); // Only allow one row to be selected at a time
    ui->teamTable->setSortingEnabled(true); // Enable sorting of table
    ui->teamTable->setStyleSheet("QTableView {selection-background-color: lightblue;}"); // Change selection color
    ui->teamTable->setColumnWidth(0, 150); // Set column width
    ui->teamTable->setColumnWidth(1, 200); // Set column width
    ui->teamTable->setColumnWidth(2, 100); // Set column width
    ui->teamTable->setColumnWidth(3, 200); // Set column width
    ui->teamTable->setColumnWidth(4, 100); // Set column width
    ui->teamTable->setColumnWidth(5, 100); // Set column width
    ui->teamTable->setColumnWidth(6, 200); // Set column width
    ui->teamTable->setColumnWidth(7, 100); // Set column width
    ui->teamTable->setColumnWidth(8, 100); // Set column width
    ui->teamTable->setAlternatingRowColors(true); // Set alternating row colors
    ui->teamTable->setShowGrid(false); // Hide grid lines
    ui->teamTable->verticalHeader()->setVisible(false); // Hide vertical header
    ui->teamTable->horizontalHeader()->setStretchLastSection(true); // Stretch last column to fill table
    ui->teamTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed); // Disable resizing of columns
}