#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#include <QWidget>
#include "pdfwidget.h"
#include <QPushButton>
#include "fiveparamswidget.h"
namespace Ui {
class mainWidget;
}

class mainWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit mainWidget(QWidget *parent = 0);
    ~mainWidget();
    
private:
    Ui::mainWidget *ui;
    QPushButton * fiveParamsBtn;
    QPushButton * makePDFBtn;
    PDFWidget  * pdfWidget;
    FiveParamsWidget * fiveParamsWidget;
    float  fiveParams[5];

public slots:
    void fiveParams_click();
    void makePDF_click();
};

#endif // MAINWIDGET_H
