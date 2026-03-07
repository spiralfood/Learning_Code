//#include<stdio.h>
//#include<stdlib.h>
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main() {
//	Test();
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
struct a {
	int a1;
	int a2[];
};
struct b {
	int b1;
	int b2[0];
};
int main() {
	struct a* a0 = (struct a*)malloc(sizeof(struct a) + sizeof(int) * 100);
	return 0;
}