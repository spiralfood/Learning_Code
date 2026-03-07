#define _CRT_SECURE_NO_WARNINGS
//int main() {
//	printf("File:%s\n", __FILE__);
//	printf("File:%d\n", __LINE__);
//	printf("File:%s\n", __DATE__);
//	printf("File:%s\n", __TIME__);
//	return 0;
//}
//#include<stdio.h>
//#define MAX 1000;
//#define reg register //为 register这个关键字，创建⼀个简短的名字#define do_forever for(;;) //⽤更形象的符号来替换⼀种实现
//#define CASE break;case //在写case语句的时候⾃动把 break写上。
//// 如果定义的 stuff过⻓，可以分成⼏⾏写，除了最后⼀⾏外，每⾏的后⾯都加⼀个反斜杠(续⾏符)。
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
// date:%s\ttime:%s\n" ,\
// __FILE__,__LINE__ , \
// __DATE__,__TIME__ ) 
//int main() {
////	DEBUG_PRINT;
//	int n = MAX;
//	printf("%d", n);
//	//若不加分号，代码的含义:
//	//int n = 1000;
//	//printf("%d", n);
//	//若加分号，代码的含义:
//	//int n = 1000;;
//	//printf("%d", n);
//	return 0;
//}
//#include<stdio.h>
//#define MAX 1000;
//int main() {
//
//	printf("%d", MAX);
//	//这时代码的真实意思是
//	//printf("%d", 1000;);
//	//语法出错了，当然就会报错
//	
//	return 0;
//}
//#include<stdio.h>
//#define DOUBLE(x) (x) + (x)
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	n + 1;//无副作用
//	n++;//有副作用
//	printf("%d", 10 * DOUBLE(n));
//}
//#include<stdio.h>
//#define MAX(x,y) (x)>(y)?(x):(y)
//int main() {
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int a = MAX(x++, y++);
//	printf("%d %d %d", x,y,a);
//	return 0;
//}
//#include<stdio.h>
//#define PRINT(x) printf(#x"的值是%d",x);
//int main() {
//	int b = 5;
//	PRINT(b);
//	return 0;
//}
//#include<stdio.h>
//#define GENERIC_MAX(type) \
//type type##_max(type x, type y)\
//{ \
// return (x>y?x:y); \
//}
//GENERIC_MAX(int) //替换到宏体内后int##_max ⽣成了新的符号 int_max做函数名
//GENERIC_MAX(float) //替换到宏体内后float##_max ⽣成了新的符号 float_max做函数名
//
//	int main()
//	{
//		//调⽤函数
//		int m = int_max(2, 3);
//		printf("%d\n", m);
//		float fm = float_max(3.5f, 4.5f);
//		printf("%f\n", fm);
//		return 0;
//	}
//	
#include<stdio.h>
#define M 100
int main() {
	int a = M;
#undef M
#define M 200
	int b = M;
	printf("%d\n%d",a, b);
	return 0;
}
