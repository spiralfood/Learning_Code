#include<iostream>
#include"heap.h"
using namespace std;
void test01()
{
	heap php;
	HPPush(&php,5);
	HPPush(&php, 4);
	HPPush(&php, 3);
	HPPush(&php, 2);
	HPPush(&php, 1);
	HPPush(&php, 0);
	for (int i = 0; i < php.size; i++)
		cout << php.arr[i];
}
int main()
{
	test01();
	return 0;
}