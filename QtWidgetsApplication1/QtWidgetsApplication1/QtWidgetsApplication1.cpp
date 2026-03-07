#include "QtWidgetsApplication1.h"

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QtWidgetsApplication1Class())
{
    ui->setupUi(this);
}

QtWidgetsApplication1::~QtWidgetsApplication1()
{
    delete ui;
}
