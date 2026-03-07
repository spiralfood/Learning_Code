//#include<iostream>
//using namespace std;
//int main() {
//	float a = 1.5;
//	printf("%d", a);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main() {
//	char a = 'A' + 1;
//	cout << a;
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int* a = (int*)malloc(40);
//	if (a == NULL) {
//		perror("malloc");
//		return 1;
//	}
//	printf("%p\n",a);
//	free(a);
//	printf("%p\n", a);
//	a = NULL;
//	printf("%p\n", a);
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int main() {
	int* a = (int*)calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("%d ", *(a + i));
	return 0;
}