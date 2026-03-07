//#include<stdio.h>
//#include<stdlib.h>
//#include<Windows.h>
//#include<stdbool.h>
//#include<locale.h>
//void SetPos(int x, int y)
//{
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD pos = { x,y };
//	SetConsoleCursorPosition(handle, pos);
//}
//int main()
//{
//	//system("mode con cols=10 lines=10");//这个函数执行系统命令
//	COORD pos1 = { 5,20 };
//	COORD pos2 = { 20,5 };
////	system("title 贪吃;蛇");
//
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleCursorPosition(handle, pos1);
//	int ch = getchar();
//	SetConsoleCursorPosition(handle, pos2);
//	putchar(ch);
////	CONSOLE_CURSOR_INFO cursor_info;
////	GetConsoleCursorInfo(handle, &cursor_info);
////	cursor_info.bVisible = false;
////	SetConsoleCursorInfo(handle, &cursor_info);
////	printf("hehe");
//	return 0;
//}
//PRESS_KEY来检测vk这虚拟键值对应的按键是否被按过
//如果按过返回1，未按过返回0
//#define KEY_PRESS(vk)(GetAsyncKeyState(vk)&0x1 ? 1:0)
//int main()
//{
//	setlocale(LC_ALL, "");
//	wchar_t ch = L'赵';
//	printf("ab\n");
//	wprintf(L"%lc", ch);
//	
//	return 0;
//} 
  /*struct a {
	int x;
}a;
int main()
{
	struct a A;
	A.x = 5;
	return 0;
}*/