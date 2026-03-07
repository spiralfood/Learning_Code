#pragma execution_character_set("utf-8")
#include "Level.h"
#include"Mylabel.h"
#include<QDebug>
#include<QPixmap>
Level::Level(int levelNum,QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::LevelClass())
{
	ui->setupUi(this);
	qDebug() << "Now select" << levelNum ;
	//判断每一个label的宽高
	int labelWidth = WIDTH / (levelNum + 1);
	int labelHeight = HEIGHT / (levelNum + 1);
	//导入图片
	for (int i = 0; i < (levelNum + 1) * (levelNum + 1); i++) {
//	QString path=QString()
	}
	//利用循环创建label
	for (int i = 0; i < (levelNum + 1) * (levelNum + 1); i++) {
		//创建label对象
		MyLabel* lab = new MyLabel(this);
		struct myLabel mylabel;
		mylabel.lab = lab;
		mylabel.num = i;
		labList.append(mylabel);
		//显示数字
		lab->setNum(i);
		//重置label大小
		lab->resize(labelWidth, labelHeight);
		//移动Lab到指定位置
		lab->move(i%(levelNum+1)* labelWidth,i/(levelNum+1)* labelHeight);
		
		//判断是否被点击
		connect(lab, &MyLabel::clicked, this, [=]() {labClickedLogic(i); });
	}

}
void Level::labClickedLogic(int clickNum) {
//	qDebug() << "label is  clicked now";
	qDebug() << (QString)"标签被点击";
//	qDebug() << clickNum;
	if (clickedFront == 65535) {
		//没有标签被点击，记录标签位置
		clickedFront = clickNum;
	}
	else {
		//前面有标签被点击，获取前面标签地址与显示号码
		MyLabel* lab1 = labList.at(clickedFront).lab;
		int num1 = labList.at(clickedFront).num;
		//获取当前lab的地址
		MyLabel* lab2 = labList.at(clickNum).lab;
		int num2 = labList.at(clickNum).num;
		//交换显示数字
		lab1->setNum(num2);
		lab2->setNum(num1);
		//交换结构体中的数字
		labList[clickedFront].num = num2;
		labList[clickNum].num = num1;
		//将点击数字重置
		clickedFront = INF;
	}
}
Level::~Level()
{
	delete ui;
}
