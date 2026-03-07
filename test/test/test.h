#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_test.h"

QT_BEGIN_NAMESPACE
namespace Ui { class testClass; };
QT_END_NAMESPACE

class test : public QMainWindow
{
    Q_OBJECT

public:
    test(QWidget *parent = nullptr);
    ~test();

private:
    Ui::testClass *ui;
};
