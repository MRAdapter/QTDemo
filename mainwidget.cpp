#include "mainwidget.h"
#include "ui_mainwidget.h"

mainWidget::mainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainWidget)
{
    ui->setupUi(this);
    this->resize(480,270);
    this->setWindowTitle("贪吃蛇");
    fiveParams = {50,50,0.12,0.06,0.06};
    //fiveparamsBtn
    fiveParamsBtn = new QPushButton(this);
    fiveParamsBtn->setGeometry(QRect(50,50,100,25));
    //    starBtn->setFlat(true);
    starBtn->setText("五个参数");
    this->connect(starBtn,SIGNAL(clicked()),this,SLOT(start_click()));
}

mainWidget::~mainWidget()
{
    delete ui;
}
void mainWidget::fiveParams_click()
{
    fiveParamsWidget = new FiveParamsWidget(this);
    fiveParamsWidget->show();
}

void mainWidget::makePDF_click()
{

}
