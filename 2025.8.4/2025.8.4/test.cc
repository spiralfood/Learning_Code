#include<iostream>
using namespace std;
#include<cstdio>
int main() {
	string args = "ab";
	const char* name = &args[1];
	const char name2 = args[1];
	cout << (void*)name<<"\n";
	printf("%p\n", name);
	cout << name2;
	return 0;
}