#pragma execution_character_set("utf-8")
#include "Level.h"
#include"Mylabel.h"
#include<QDebug>
#include<QPixmap>
#include<Qtcore>
Level::Level(int levelNum, QWidget* parent)
	: QMainWindow(parent)
	, ui(new Ui::LevelClass())
{
	ui->setupUi(this);
	this->levelNum = levelNum;
	qDebug() << "Now select" << levelNum;
	//判断每一个label的宽高
	int labelWidth = WIDTH / (levelNum + 1);
	int labelHeight = HEIGHT / (levelNum + 1);
	//导入图片路径
	for (int i = 1; i <= (levelNum + 1) * (levelNum + 1); i++) {
		QString path = QString(":/new/ly/leve%1/ys(%2).png").arg(levelNum).arg(i);
		struct myLabel mylabel;
		mylabel.imagPath = path;
		labList.append(mylabel);
	}
	
	//利用循环创建label
	for (int i = 0; i < (levelNum + 1) * (levelNum + 1); i++) {
		//创建label对象
		MyLabel* lab = new MyLabel(this);
//		struct myLabel mylabel;
		labList[i].lab = lab;
		labList[i].num = i;
		//显示图片
			//创建图片对象
		QPixmap image;
			//加载图片路径,并改变图片大小
		image.load(labList.at(i).imagPath);
		image = image.scaled(labelWidth, labelHeight, Qt::KeepAspectRatio);
			//标签显示图片
		lab->setPixmap(image);
		//标签适应图片
		lab->setScaledContents(true);
		lab->setNum(i);
		//重置label大小
		lab->resize(labelWidth, labelHeight);
		//移动Lab到指定位置
		lab->move(i % (levelNum + 1) * labelWidth, i / (levelNum + 1) * labelHeight);

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
		QString imagepath1 = labList.at(clickedFront).imagPath;
		//获取当前lab的地址
		MyLabel* lab2 = labList.at(clickNum).lab;
		QString imagepath2 = labList.at(clickNum).imagPath;
		//交换显示图片
		QPixmap image;
		image.load(imagepath1);
		image = image.scaled(WIDTH/levelNum+1, HEIGHT/levelNum+1, Qt::KeepAspectRatio);
		lab2->setPixmap(image);

		image.load(imagepath2);
		image = image.scaled(WIDTH / levelNum + 1, HEIGHT / levelNum + 1, Qt::KeepAspectRatio);
		lab1->setPixmap(image);
		//交换结构体中的数字
		labList[clickedFront].imagPath = imagepath2;
		labList[clickNum].imagPath = imagepath1;

		//将点击数字重置
		clickedFront = INF;
	}
}
Level::~Level()
{
	delete ui;
}
