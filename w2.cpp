#include "MainWindow.h"
#include <QVBoxLayout>
#include <QHeaderView>
using namespace std;
MainWindow::MainWindow(QWidget *p)
    : QMainWindow(p), tW(new QTableWidget(this)), Chart(new QGraphicsView(this))
{
    QVBoxLayout *a = new QVBoxLayout();
    a->addWidget(tW);
    a->addWidget(Chart);
    QWidget *centr = new QWidget(this);
    centr->setLayout(a);
    setCentralWidget(centr);

    tW->setColumnCount(6);
    tW->setHorizontalHeaderLabels({"ID", "Arrival Time", "Burst Time", "Start Time", "Finish Time", "Waiting Time"});
}

void MainWindow::uTable(const vector<Process> &p)
{
    tW > setRowCount(p.size());
    for (int i = 0; i < p.size(); i++)
    {
        tW->setItem(i, 0, new QTableWidgetItem(QString::number(p[i].id)));
        tW->setItem(i, 1, new QTableWidgetItem(QString::number(p[i].arrival)));
        tW->setItem(i, 2, new QTableWidgetItem(QString::number(p[i].burst)));
        tW->setItem(i, 3, new QTableWidgetItem(QString::number(p[i].start)));
        tW->setItem(i, 4, new QTableWidgetItem(QString::number(p[i].finish)));
        tW->setItem(i, 5, new QTableWidgetItem(QString::number(p[i].waiting)));
    }
}
