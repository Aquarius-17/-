#pragma once
#pragma execution_character_set("utf-8")
#include<qpushbutton.h>
#include <QtWidgets/QWidget>
#include "ui_QtWidgetsApplication.h"
#include <qlabel.h>
#include <qframe.h>
#include <qcombobox.h>
#include <qpainter.h>
#include <qrandom.h>
#include <qthread.h>
#include <qspinbox.h>
class QtWidgetsApplication : public QWidget
{
    Q_OBJECT

public:
    QtWidgetsApplication(QWidget *parent = nullptr);
    ~QtWidgetsApplication();

private:
    Ui::QtWidgetsApplicationClass *ui;
    QPushButton* closeButton=NULL;
    QPushButton* startButton =NULL;
    QLabel* num_label = NULL;
    QComboBox* sort_choices = NULL;
    QPainter* painter = NULL;
    QSpinBox* spinbox = NULL;
    QLabel* time_label = NULL;
    QLabel* link_label = NULL;
    QLabel* link_label2 = NULL;
    QLabel* link_label3 = NULL;
    QLabel* link_label4 = NULL;
    int a[10] = {0};
    int read[10] = {0};
    QString choice="插入排序";
    int time = 500;
    int way = 0;
    int now = 0;
    int bit = 0;
    int* tmp = new int[10];
    int radix = 1;
    int shows = 99;
    int done = 0;
    int nows = 0;

protected:
    void paintEvent(QPaintEvent* event);

public slots:
    void close_window();
    void show_choice();
    void choose_sort(QString,int*);
    void start_sort();
    void Insert_Sort(int* a);
    void Selection_Sort(int* a);
    void Radix_Sort(int* a);
    void Quick_Sort(int* a,int,int);


};
