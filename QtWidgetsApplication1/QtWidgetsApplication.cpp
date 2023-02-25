#include "QtWidgetsApplication.h"

QtWidgetsApplication::QtWidgetsApplication(QWidget *parent)
    : QWidget(parent)
{
    ui->setupUi(this);

    //设置窗口标题
    setWindowTitle(tr("数据结构可视化"));
    //设置窗口大小
    setFixedSize(1080, 720);
    //resize(1080, 720);
    //窗口生成位置
    move(500, 200);
    //设置背景为米黄色
    setStyleSheet("QWidget { background-color : beige;}");
    //初始化按钮
    closeButton = new QPushButton(tr("关闭"));
    closeButton->setParent(this);//绑定父窗口
    closeButton->setFixedSize(100, 60);//设置大小
    closeButton->move(900, 0);//设置按钮位置
    closeButton->setStyleSheet("QPushButton { background-color : white; "\
        "color : blue;"\
        "border-radius : 2px;"\
        "border : 2px solid green;"\
        "font: bold 15px;border-radius:5px;}"
        "QPushButton::pressed{background:#eb7350;}");


    connect(closeButton,
        &QPushButton::clicked,
        this,
        &QtWidgetsApplication::close);

    //开始排序按钮
    startButton = new QPushButton(tr("开始排序"));
    startButton->setParent(this);//开始按钮绑定父窗口
    startButton->setFixedSize(100, 60);
    startButton->move(750, 0);
    startButton->setStyleSheet("QPushButton { background-color : white; "\
        "color : blue;"\
        "border-radius : 2px;"\
        "border : 2px solid grey;"\
        "font: bold 15px;border-radius:5px;}"
        "QPushButton::pressed{background:#eb7350;}");



    num_label = new QLabel();
    num_label->setParent(this);
    num_label->setFixedSize(200, 60);
    num_label->move(120,0);
    num_label->setFrameShape(QFrame::Box);
    num_label->setLineWidth(3);

    sort_choices = new QComboBox();
    sort_choices->setFixedSize(200, 60);
    sort_choices->setParent(num_label);
    sort_choices->addItem(tr("插入排序"));
    sort_choices->addItem(tr("选择排序"));
    sort_choices->addItem(tr("基数排序"));
    sort_choices->addItem(tr("快速排序"));
    //时间间隔设置
    time_label = new QLabel(this);
    time_label->setText("动画时间间隔 :");
    time_label->setFixedSize(150, 60);
    time_label->move(350, 0);
    

    spinbox = new QSpinBox(this);
    spinbox->setValue(500);
    spinbox->setSuffix("ms");
    spinbox->setSingleStep(50);
    spinbox->setFixedSize(200, 60);
    spinbox->move(500, 0);
    spinbox->setRange(500, 2000);
    spinbox->setStyleSheet("QSpinBox{border-style:outset;border-width:1px;border-radius:5px;}");

    QLabel* learn = new QLabel(this);
    learn->setText(tr("学习一下算法:"));
    learn->setFixedSize(120, 30);
    learn->move(15, 70);
    learn->setStyleSheet("QLabel{font-size:18px;font-family:微软雅黑;font-style:inset;font:bold;}");

    link_label = new QLabel(this);
    link_label->setText(tr("<a href = 'https://www.runoob.com/w3cnote/insertion-sort.html'>插入排序</a>"));
    link_label->setOpenExternalLinks(true);
    link_label->setFixedSize(100, 30);
    link_label->move(135, 70);
    link_label->setFrameShape(QFrame::Box);
    link_label->setLineWidth(3);
    link_label->setStyleSheet("QLabel{border-style:outset;border-width:3px;border-radius:2px;background-color : yellow;font:bold;}");
    link_label->show();

    link_label2 = new QLabel(this);
    link_label2->setText(tr("<a href = 'https://www.runoob.com/w3cnote/selection-sort.html'>选择排序</a>"));
    link_label2->setOpenExternalLinks(true);
    link_label2->setFixedSize(100, 30);
    link_label2->move(245, 70);
    link_label2->setFrameShape(QFrame::Box);
    link_label2->setLineWidth(3);
    link_label2->setStyleSheet("QLabel{border-style:outset;border-width:3px;border-radius:2px;background-color : yellow;font:bold;}");
    link_label2->show();

    link_label3 = new QLabel(this);
    link_label3->setText(tr("<a href = 'https://www.runoob.com/w3cnote/radix-sort.html'>基数排序</a>"));
    link_label3->setOpenExternalLinks(true);
    link_label3->setFixedSize(100, 30);
    link_label3->move(355, 70);
    link_label3->setFrameShape(QFrame::Box);
    link_label3->setLineWidth(3);
    link_label3->setStyleSheet("QLabel{border-style:outset;border-width:3px;border-radius:2px;background-color : yellow;font:bold;}");
    link_label3->show();

    link_label4 = new QLabel(this);
    link_label4->setText(tr("<a href = 'https://www.runoob.com/w3cnote/quick-sort.html'>快速排序</a>"));
    link_label4->setOpenExternalLinks(true);
    link_label4->setFixedSize(100, 30);
    link_label4->move(465, 70);
    link_label4->setFrameShape(QFrame::Box);
    link_label4->setLineWidth(3);
    link_label4->setStyleSheet("QLabel{border-style:outset;border-width:3px;border-radius:2px;background-color : yellow;font:bold;}");
    link_label4->show();

    connect(startButton,
        &QPushButton::clicked,
        this,
        &QtWidgetsApplication::start_sort);

    

}
//析构函数
QtWidgetsApplication::~QtWidgetsApplication()
{
     ui;
}
//关闭窗口槽函数
void QtWidgetsApplication::close_window() {
    this->close();
}

void QtWidgetsApplication::show_choice() {
    num_label->setText(sort_choices->currentText());
}


//每一次的画画
void QtWidgetsApplication::paintEvent(QPaintEvent* event) {
    int* result = a;

    //设置画家
    QPainter p;
    p.begin(this);
    //设置画笔，用以画边界
    QPen pen;
    pen.setColor(Qt::black);
    pen.setWidth(2);
    p.setPen(pen);
    //设置画刷，用以填充颜色
    QBrush brush;
    brush.setColor(Qt::white);
    brush.setStyle(Qt::SolidPattern);
    p.setBrush(brush);
    //插入排序与选择排序
    if (QString::compare(choice, "插入排序") == 0 || QString::compare(choice, "选择排序") == 0|| QString::compare(choice, "快速排序")==0) {
     
        if (done == 0) {
            for (int i = 0; i < 10; i++) {
                brush.setColor(Qt::white);
                brush.setStyle(Qt::SolidPattern);
                p.setBrush(brush);
                int height = result[i];
                p.drawRect(100 + 100 * i, 200, 50, height * 5);
                p.drawRect(100 + 100 * i, 120, 50, 50);
                QRect rect(100 + 100 * i, 120, 50, 50);
                p.drawText(rect, Qt::AlignCenter, QString::number(height));

            }
            brush.setColor(Qt::blue);
            brush.setStyle(Qt::SolidPattern);
            p.setBrush(brush);
            p.drawRect(100 + 100 * (shows + 1), 200, 50, 5 * result[shows + 1]);

            brush.setColor(Qt::red);
            brush.setStyle(Qt::SolidPattern);
            p.setBrush(brush);
            p.drawRect(100 + 100 * nows, 200, 50, 5 * result[nows]);
        }
        else {
            for (int i = 0; i < 10; i++) {
                brush.setColor(Qt::white);
                brush.setStyle(Qt::SolidPattern);
                p.setBrush(brush);
                int height = result[i];
                p.drawRect(100 + 100 * i, 200, 50, height * 5);
                p.drawRect(100 + 100 * i, 120, 50, 50);
                QRect rect(100 + 100 * i, 120, 50, 50);
                p.drawText(rect, Qt::AlignCenter, QString::number(height));
            }
        }
    }
    else  {
        if (way == 0) {
        for (int i = 0; i < 10; i++) {
            int number = result[i];
            p.drawRect(100 + 100 * i, 200, 50, 50);
            QRect rect(100 + 100 * i, 200, 50, 50);
            p.drawText(rect, Qt::AlignCenter, QString::number(number));
             
            }
        }
        else {
            for (int m = 0; m < 10; m++) {
                QRect rec(100+100*m,660,50,50);
                p.drawText(rec, Qt::AlignCenter, QString::number(m));
            }
            for (int t = 0; t < 10; t++) {
                int number = tmp[t];
                bit = (number / radix) % 10;
                int all = read[bit];
                p.drawRect(100 + 100 * bit, 650-all*60, 50, 50);
                QRect rect(100 + 100 * bit, 650-all*60, 50, 50);
                p.drawText(rect, Qt::AlignCenter, QString::number(number));
                read[bit]--;
                
            }
        }


    }
    
}

void QtWidgetsApplication::choose_sort(QString choice,int* a) {
    if (QString::compare(choice, "插入排序") == 0) {
        Insert_Sort(a);
    }
    else if (QString::compare(choice, "选择排序") == 0) {
        Selection_Sort(a);
    }
    else if (QString::compare(choice, "基数排序") == 0) {
        Radix_Sort(a);
    }
    else {
        Quick_Sort(a,0,9);
        done = 1;
        repaint();
        done = 0;
    }
}
void QtWidgetsApplication::start_sort() {
    choice = sort_choices->currentText();
    for (int i = 0; i < 10; i++) {
        a[i] = QRandomGenerator::global()->bounded(0,100);
    }
    choose_sort(choice,a);
}
//插入排序
void QtWidgetsApplication::Insert_Sort(int* a) {
    int i, j;
    repaint();
    QThread::msleep(spinbox->value());
    for (i = 1; i < 10; i++) {
        now = a[i];
        shows = i - 1;
        nows = i;
        repaint();
        QThread::msleep(spinbox->value());
        while ((shows >= 0) && (a[shows] > now)) {

            a[shows + 1] = a[shows];
            a[shows] = now;
            shows--;

            repaint();
            QThread::msleep(spinbox->value());
        }
        a[shows + 1] = now;
        repaint();
        QThread::msleep(spinbox->value());
    }
    done = 1;
    repaint();
    done = 0;
}
//选择排序
void QtWidgetsApplication::Selection_Sort(int* a) {
    done = 0;
    repaint();
    QThread::msleep(spinbox->value());
    for (int i = 0; i < 10; i++) {
        int min = i;
        shows = min-1;
        nows = min;
        repaint();
        QThread::msleep(spinbox->value());
        for (int j = i + 1; j < 10; j++) {
            nows= j;
            shows = min - 1;
            repaint();
            QThread::msleep(spinbox->value());
            if (a[j] < a[min]) {
                 min = j;
                    }
        }


        std::swap(a[i], a[min]);
        nows = i;
        shows = min-1;
        repaint();
        QThread::msleep(spinbox->value());
    }
    done = 1;
    repaint();
    done = 0;
}
//基数排序
void QtWidgetsApplication::Radix_Sort(int* a) {
    repaint();
    QThread::msleep(2000);

    int d = 2;
    int* count = new int[10]; //计数器
    int i, j, k;
    for (i = 1; i <= d; i++) //进行d次排序
    {
        for (j = 0; j < 10; j++)
            count[j] = 0; //每次分配前清空计数器
        for (j = 0; j < 10; j++)
        {
            k = (a[j] / radix) % 10; //统计每个桶中的记录数
            count[k]++;
        }
        //中间结果复制
        for (int s = 0; s < 10; s++) {
            read[s] = count[s];
        }
        
        for (j = 1; j < 10; j++)
            count[j] = count[j - 1] + count[j]; //将tmp中的位置依次分配给每个桶
        for (now = 9; now >= 0; now--) //将所有桶中记录依次收集到tmp中
        {
            bit = (a[now] / radix) % 10;
            tmp[count[bit] - 1] = a[now];
            count[bit]--;
        }
        way = 1;
        repaint();
        QThread::msleep(10000);
        for (j = 0; j < 10; j++) //将临时数组的内容复制到a中
            a[j] = tmp[j];
        radix = radix * 10;
    }
    way = 0;
    repaint();
    QThread::msleep(spinbox->value());

}
//快速排序
void QtWidgetsApplication::Quick_Sort(int* a,int left,int right) {

    if (left < right) {
        if (left < right)
        {
            done = 0;
            shows = right-1;
            repaint();
            QThread::msleep(spinbox->value());
            int i = left, j = right, x = a[left];
            while (i < j)
            {
                shows = j - 1;
                repaint();
                QThread::msleep(spinbox->value());
                while (i < j && a[j] >= x) {
                     j--;
                     shows = j-1;
                     nows = j;
                     repaint();
                     QThread::msleep(spinbox->value());
                }
                   
                if (i < j)
                    a[i++] = a[j];
                
                if (i != 0) {
                   shows = i - 2;
                }
                repaint();
                QThread::msleep(spinbox->value());
                shows = i - 1;
                repaint();
                QThread::msleep(spinbox->value());
                while (i < j && a[i] < x) {
                     i++;
                     shows = i - 1;
                     nows = i;
                     repaint();
                     QThread::msleep(spinbox->value());
                }
                   
                if (i < j)
                    a[j--] = a[i];
                shows = j;
                repaint();
                QThread::msleep(spinbox->value());
            }
            a[i] = x;
            shows = i - 1;
            repaint();
            QThread::msleep(spinbox->value());
            Quick_Sort(a, left, i - 1); 
            Quick_Sort(a, i + 1, right);
        }
    }

}
