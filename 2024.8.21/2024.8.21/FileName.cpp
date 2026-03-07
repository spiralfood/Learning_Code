//#include<iostream>
//#include<cstring>
//using namespace std;
//long long f[25][25][25];
//long long w(int a, int b, int c) {
//	if (a <= 0 || b <= 0 || c <= 0)return 1;
//	if (a > 20 || b > 20 || c > 20)return w(20, 20, 20);
//	if (f[a][b][c] != -1) return f[a][b][c];
//	return f[a][b][c]=w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
//}
//int main() {
//	memset(f, -1, sizeof(f));
//	long long a, b, c;
//	while (cin >> a >> b >> c) {
//		if (a == b && b == c && a == -1) break;
//		cout << "w("<<a<<", " <<b<<", " <<c<<") = " << w(a, b, c) << "\n";
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int w(int a, int b, int c) {
//	if (a <= 0 || b <= 0 || c <= 0)return 1;
//	if (a > 20 || b > 20 || c > 20)return w(20, 20, 20);
//	return w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
//}
//int main() {
//	int a, b, c;
//	while (cin >> a >> b >> c) {
//		if (a == b && b == c && a == -1) break;
//		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << "\n";
//
//	}
//
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//void sol(string s1) {
//	
//}
//int main() {
//	string s1;
//	cin >> s1;
//	for (int i = 0; i < s1.length(); i++) {
//		if (s1[i] <= 'Z' && s1[i]>='A') {
//			cout << s1[i];
//		}
//		if (s1[i] >= '0' && s1[i] <= '9') {
//			if (s1[i + 1] >= '0' && s1[i + 1] <= '9') {
//				int size1 = (s1[i] - '0') * 10 + s1[i + 1] - '0';
//				int j;
//				while (size1--) {
//					
//					for (j = 1;; j++) {
//						if (s1[i + 1 + j] <= 'Z' && s1[i + 1 + j] >= 'A') {
//							cout << s1[i + 1 + j];
//						}
//						else
//							break;
//					}
//				}
//				i = i + j+1;
//			}
//		}
//	}
////	sol(s1);
//	return 0;
//}
//
//#include<iostream>
//#include<cstring>
//using namespace std;
//void sol(string s1) {
//	
//}
//int main() {
//	string s1;
//	cin >> s1;
//	sol(s1[0]);
//}

#include<iostream>
using namespace std;
#include<cstring>
string expand() {
	string s = "", X;
	char c; int D;
	while (cin >> c) {
		if (c == '[') {
			cin >> D;
			X = expand();
			while (D--)s += X;

		}
		else if (c == ']')return s;
		else s += c;
	}
	return s;
}
int main() {
	cout << expand();
	return 0;
}