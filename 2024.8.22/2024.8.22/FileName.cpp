//#include<iostream>
//#include<cstring>
//using namespace std;
//string expand() {
//	char a; string s,X;
//	while (cin >> a) {//持续读入字符，直到读完
//		if (a == '[') {//发现一个压缩区
//			int x;
//			cin >> x;
//			X=expand();
//			while (x--)s += X;
//		}
//		else if (a == ']')return s;//压缩区结束，返回处理好的x
//		else s += a;//不是【，】，直接读入就好		
//	}
//	
//	return s;
//}
//int main() {
//	cout << expand();
//	return 0;
//}

#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
struct goods {
	float value;
	float weight;
	goods() {
		value = weight = 0;
	}
};
goods a[105];
bool cmp(goods a1,goods a2) {
	return a1.value > a2.value;
}
int main() {
	int N, T;
	cin >> N >> T;
	int n1 = N;
	while (N--) {
		float mi, vi;
		cin >> mi >> vi;
		a[N].value = vi / mi;
		a[N].weight = mi;
	}
	sort(a, a + n1, cmp);
	float sumvalue = 0;
	float sumweight = 0;
		for (int i = 0; i < n1; i++) {
			if (sumweight + a[i].weight <= T) {
				sumweight += a[i].weight;
				sumvalue += a[i].weight * a[i].value;
			}
			else if (sumweight + a[i].weight > T) {			
				sumvalue += (T - sumweight) * a[i].value;
				sumweight = T;
			}
			if (sumweight == T)
				break;
		}
		printf("%.2f", sumvalue);
	return 0;
}