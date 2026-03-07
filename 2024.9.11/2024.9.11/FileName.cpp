#include<iostream>
#include<cmath>
using namespace std;
int main() {
	float a = 0.1;
	if (fabs(0.1 + 0.2 - 0.3)<1e-9) {
		cout << "=";
	}
	else
		cout << "!=";
	return 0;
}

//#include<iostream>
//#include<cstdio>
//using namespace std;
//int main() {
//	int n = 9;
//	float* pfloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);
//	*pfloat = 9.0;
//	printf("%d\n", n);
//	printf("%f\n", *pfloat);
//
//	return 0;
//}