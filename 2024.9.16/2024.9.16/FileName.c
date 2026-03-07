#include<stdio.h>
//#pragma pack(1)//将对齐数改为1
//struct a {
//	char a1;
//	int a3;
//	char a2;
//	
//};
//#pragma pack()//还原为默认对齐数
//struct b {
//	char b1;
//	int b3;
//	char b2;
//	
//};
//int main() {
//	printf("%u\n%u", sizeof(struct a), sizeof(struct b));
//}
//#include<stdio.h>
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main() {
//	printf("%d\n",sizeof(struct A));
//	return 0;
//}
//#include<stdio.h>
//union u {
//	char a;
//	int b;
//};
//int main() {
//	union u U = { 0 };
//	printf("%u\n%p\n%p\n%p\n", sizeof(union u), &U, &U.a,&U.b);
//	return 0;
//}
//#include <stdio.h>
//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//int main()
//{
//	//下⾯输出的结果是什么？
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}
//struct gift_list1
//{
//	//公共属性
//	int stock_number;//库存量
//	double price; //定价
//	int item_type;//商品类型
//
//	//特殊属性
//	char title[20];//书名
//	char author[20];//作者
//	int num_pages;//⻚数
//
//	char design[30];//设计
//	int colors;//颜⾊
//	int sizes;//尺⼨
//};
//struct gift_list2
//{
//	int stock_number;//库存量
//	double price; //定价
//	int item_type;//商品类型
//
//	union {
//		struct
//		{
//			char title[20];//书名
//			char author[20];//作者
//			int num_pages;//⻚数
//		}book;
//		struct
//		{
//			char design[30];//设计
//		}mug;
//		struct
//		{
//			char design[30];//设计
//			int colors;//颜⾊
//			int sizes;//尺⼨
//		}shirt;
//	}item;
//};
//int main() {
//	printf("%u\n%u",sizeof(struct gift_list1), sizeof(struct gift_list2));
//	return 0;
//}
//#include<stdio.h>
//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;//返回1是⼩端，返回0是⼤端
//}
//int main()
//{
//	printf("%u", check_sys());
//}
//#include<stdio.h>
//enum sex {
//	 male=4,
//	 women=3,
//	 secret=2
//};
//
//int main()
//{
//	enum sex people = 4;
//	return 0;
//}