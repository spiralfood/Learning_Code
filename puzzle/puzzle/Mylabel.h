#pragma once
//用mylabel去继承qlabel类
#include<QLabel>
//添加鼠标事件头文件
#include <QWidget>
#include<QMouseEvent>
class MyLabel  : public QLabel
{
	Q_OBJECT

public:
	MyLabel(QWidget*parent);
	~MyLabel();
protected:
	//实现鼠标释放函数
	void mouseReleaseEvent(QMouseEvent* ev);
signals:
	void clicked();
};
