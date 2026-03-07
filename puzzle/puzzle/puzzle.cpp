#include "puzzle.h"
#include<QPushButton>
#include<QDebug>
puzzle::puzzle(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    //链接按钮与槽函数
    connect(ui.level1, &QPushButton::clicked, this, [=]() {selectLevel(1); });
    connect(ui.level2, &QPushButton::clicked, this, [=]() {selectLevel(2); });
    connect(ui.level3, &QPushButton::clicked, this, [=]() {selectLevel(3); });
    connect(ui.level4, &QPushButton::clicked, this, [=]() {selectLevel(4); });
}

puzzle::~puzzle()
{}
void puzzle::selectLevel(int levelNum) 
{
    //实例化关卡对象
    level = new Level(levelNum);
    //隐藏当前关卡
    this->hide();
    //显示当前关卡
    level->show();
}