#include<iostream>
using namespace std;
int main()
{
	int a = 1,*b = &a;
	cout << sizeof(a) << "\n";
	cout << sizeof(b);
	return 0;
}