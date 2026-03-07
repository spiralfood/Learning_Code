
#include<iostream>
using namespace std;
class s4 {
	double b;
	char a;
	int c;
}A;
class s3 {
	char a;
	struct s4 A;
	int c;
};
int main() {
	printf("%u\n", sizeof(s3));
	return 0;
}