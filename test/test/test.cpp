#include "test.h"

test::test(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::testClass())
{
    ui->setupUi(this);
}

test::~test()
{
    delete ui;
}
