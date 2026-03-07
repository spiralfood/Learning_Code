#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_puzzle.h"
#include"Level.h"
class puzzle : public QMainWindow
{
    Q_OBJECT

public:
    puzzle(QWidget* parent = nullptr);
    ~puzzle();

private:
    Ui::puzzleClass ui;
    //关卡挑战
    void selectLevel(int levelNum);
    //创建关卡对象
    Level* level = nullptr;
};
