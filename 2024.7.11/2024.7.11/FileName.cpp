//#include<iostream>
//using namespace std;
//int main() {
//	float A, B, C;
//	float a, b, c;
//	int cor = 0;
//	cin >> a >> b >> c;
//	for ( A = 100; A < 1000; A++) {
//		for ( B = (b / a) * A;;) {
//			for ( C = (c / b) * B;;) {
//				if (A / B == a / b && B / C == b / c) {
//					cout << A << " " << B << " " << C;
//					cor = 1;
//				}
//				break;
//			}
//			break;
//		}
//		if (cor == 1)
//			break;
//	}
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//int main() {
//	char a[100], b[100];
//	memset(a, '0', sizeof(a));
//	memset(b, '0', sizeof(b));
//	cin >> a >> b;
//	for (int i = 0; i < 100; i++) {
//		a[i] = a[i] + b[i]-'0';
//		if (a[i] > '9')
//		{
//			a[i] -= 9;
//			a[i + 1] += 1;
//		}
//	}
//	int score = 0;
//	for (int i = 99; i >= 0; i--) {
//		if (score == 0 && a[i] == '0') {
//			score = 1;
//			continue;
//		}
//		cout << a[i];
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main() {
//	printf("%d\n", '2');
//	printf("%d\n", '9');
//	return 0; 
//}

#include<iostream>
using namespace std;
int main() {
	string s1, s2,s3;
	cin >> s1 >> s2;
	int end1 = s1.length() - 1;
	int end2 = s2.length() - 1;
	int next = 0;
	while (end1 >= 0 || end2 >= 0) {
		int x1 = end1>=0 ? s1[end1--]-'0' : 0;
		int x2 = end2 >= 0 ? s2[end2--]-'0' : 0;
		int x = x1 + x2 + next;
		next = x / 10;
		x %= 10;
		s3 += (x + '0');
	}
	if (next == 1) {
		s3 += '1';
	}
	reverse(s3.begin(), s3.end());
	cout << s3;
	return 0;
}