////#include<stdio.h>
//////#define DEBUG
////int main() {
////	int arr[10];
////	for (int i = 0; i < 10; i++) {
////		arr[i] = i;
////#ifdef DEBUG
////		printf("%d ", arr[i]);
////#endif // DEBUG
////
////		
////	}
////	return 0;
////}
////1.
//#if //常量表达式
////...
//#endif
////常量表达式由预处理器求值。
////如：
//#define __DEBUG__ 1
//#if __DEBUG__
////..
//#endif
////2.多个分⽀的条件编译
//#if //常量表达式
////...
//#elif //常量表达式
////...
//#else
////...
//#endif
////3.判断是否被定义
//#if defined(symbol)
//#endif
//#ifdef symbol
//#endif
//#if !defined(symbol)
//#endif
//#ifndef symbol
//#endif
//////4.嵌套指令
//
//#if defined(OS_UNIX)
//#ifdef OPTION1
//unix_version_option1();
//#endif
//#ifdef OPTION2
//unix_version_option2();
//#endif
//#elif defined(OS_MSDOS)
//#ifdef OPTION2
//msdos_version_option2();
//#endif
//#endif
#include<stdio.h>
int main() {
	int a1 = clock();
	for (int i = 0; i < 10000; i++) {
		for (int j = 0; j < 10000; j++)
		{
			int a = 1;
		}
			
	}
	int a2 = clock();
	printf("%d", a2 - a1);
		return  0;
}