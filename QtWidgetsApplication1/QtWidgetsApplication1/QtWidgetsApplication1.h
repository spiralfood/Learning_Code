#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtWidgetsApplication1.h"

QT_BEGIN_NAMESPACE
namespace Ui { class QtWidgetsApplication1Class; };
QT_END_NAMESPACE

class QtWidgetsApplication1 : public QWidget
{
    Q_OBJECT

public:
    QtWidgetsApplication1(QWidget *parent = nullptr);
    ~QtWidgetsApplication1();

private:
    Ui::QtWidgetsApplication1Class *ui;
};
