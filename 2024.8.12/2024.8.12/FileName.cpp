//#include<iostream>
//#include<iomanip>
//using namespace std;
//int a[30];
//int check1(int x) {
//	int score = 0;
//	while (x != 0) {
//		if (x % 2 == 1)
//			score++;
//		x=x >> 1;
//	}
//
//	return score;
//}
//int main() {
//	for (int i = 0; i < 30; i++) {
//		a[i] = i+1;
//	}
//	int n, r;
//	cin >> n >> r;
//	int U = 1 << n;
//
//	for (int i = U-1; i >= 0; i--) {
//		if (check1(i) == r) {
//			for (int j = 0; j <= n; j++) {
//				if (i & U >> j+1) {
//					cout << setw(3) << a[j];
//				}
//			}
//			cout << "\n";
//		}
//		
//	}
//	return 0;
//}
// 
// #include<iostream>
//#include<iomanip>
//using namespace std;
//int a[30];
//int check1(int x) {
//	int score = 0;
//	while (x != 0) {
//		if (x % 2 == 1)
//			score++;
//		x=x >> 1;
//	}
//
//	return score;
//}
//int main() {
//	for (int i = 0; i < 30; i++) {
//		a[i] = i+1;
//	}
//	int n, r;
//	cin >> n >> r;
//	int U = 1 << n;
//
//	for (int i = 0; i <U ; i++) {
//		if (check1(i) == r) {
//			for (int j = 0; j <= n; j++) {
//				if (i & 1 << j) {
//					cout << setw(3) << a[j];
//				}
//			}
//			cout << "\n";
//		}
//		
//	}
//	return 0;
//}
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//	int a[9];
//	for (int i = 0; i < 9; i++)
//		a[i] = i+1;
//	int A, B, C;
//	cin >> A >> B >> C;
//	int score = 0;
//	do {
//		int x, y, z;
//		x = a[2] * 100 + a[1] * 10 + a[0];
//		y = a[3] + a[4] * 10 + a[5] * 100;
//		z = a[6] + a[7] * 10 + a[8] * 100;
//		if (y*A%B==0&&y * A / x == B && z * A / x == C &&z*A%C==0)
//			score++;
//	} while (next_permutation(a, a + 9));
//	cout << score << "\n";
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//	int a[9];
//	for (int i = 0; i < 9; i++)
//		a[i] = i+1;
//	int A, B, C;
//	cin >> A >> B >> C;
//	int score = 0;
//	do {
//		int x, y, z;
//		x = a[0] * 100 + a[1] * 10 + a[2];
//		y = a[5] + a[4] * 10 + a[3] * 100;
//		z = a[8] + a[7] * 10 + a[6] * 100;
//		if (x * B == y * A && x * C == z * A)
//		{
//			cout << x << " " << y << " " << z << "\n";
//			score++;
//		}
//			
//	} while (next_permutation(a, a + 9));
//	
//	if (score == 0) {
//		cout << "No!!!";
//	}
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//#include<algorithm>
//#include<iomanip>
//int main() {
//	int a[10];
//	for (int i = 0; i < 10; i++) {
//		a[i] = i + 1;
//	}
//	int n;
//	cin >> n;
//	do {
//		for (int i = 0; i < n; i++) {
//			cout << setw(5) << a[i];
//		}
//		cout << "\n";
//	} while (next_permutation(a, a + n));
//	return 0;
//}
#include<algorithm>
#include<iostream>
using namespace std;
int a[10000];
int main() {
	int N, M;
	cin >> N >> M;
	/*for (int i = 0; i < 10000; i++) {
		a[i] = i + 1;
	}*/
	int b = 1; \
		for (int i = 0; i < N; i++)
			cin >> a[i];
	while (b-1 != M) {
		next_permutation(a, a + N);
		b++;
	}
	for (int i = 0; i < N; i++)
		cout << a[i] << " ";
	return 0;
}