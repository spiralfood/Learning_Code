#include "Mylabel.h"

MyLabel::MyLabel(QWidget* parent)
	:QLabel(parent)
{}

MyLabel::~MyLabel()
{}
void MyLabel::mouseReleaseEvent(QMouseEvent* ev)
{
	//当鼠标按下释放点击后发送信号
	emit clicked();
}
