#pragma once
#define WIDTH 450
#define HEIGHT 800
#define INF 65535
#include <QMainWindow>
#include "ui_Level.h"
#include<QList>
#include"Mylabel.h"
QT_BEGIN_NAMESPACE
namespace Ui { class LevelClass; };
QT_END_NAMESPACE

class Level : public QMainWindow
{
	Q_OBJECT

public:
	Level(int levelNum, QWidget* parent = nullptr);
	~Level();

private:
	Ui::LevelClass* ui;
	int levelNum;

	struct myLabel {
		MyLabel* lab;//存储label的地址
		int num;//存储当前的号码
		QString imagPath;
	};
	int clickedFront = INF;
	QList<myLabel>labList;

	//lab标签点击处理
	//参数为被点击的label号	
	void labClickedLogic(int clickNum);
};
