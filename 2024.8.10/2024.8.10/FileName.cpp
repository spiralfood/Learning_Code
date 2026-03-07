//#define rep(i,a,b) for(int i=a;i<b;i++)
//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int score = 0;
//	if (n < 9||n>30) {
//		cout << 0 << "\n";
//	}
//	else {
//		for(int a=1;a<=3;a++)for (int b = 1; b <= 3; b++)for (int c = 1; c <= 3; c++)for (int d = 1; d <= 3; d++)
//			for (int e = 1; e <= 3; e++)for (int f = 1; f <= 3; f++)for (int g = 1; g <= 3; g++)for (int h = 1; h <= 3; h++)
//				for (int i = 1; i <= 3; i++)for (int j = 1; j <= 3; j++)
//					if (a + b + c + d + e + f + g + h + i + j==n) {
//						score++;
//				}
//		cout << score << "\n";
//		for (int a = 1; a <= 3; a++)for (int b = 1; b <= 3; b++)for (int c = 1; c <= 3; c++)for (int d = 1; d <= 3; d++)
//			for (int e = 1; e <= 3; e++)for (int f = 1; f <= 3; f++)for (int g = 1; g <= 3; g++)for (int h = 1; h <= 3; h++)
//				for (int i = 1; i <= 3; i++)for (int j = 1; j <= 3; j++)
//					if (a + b + c + d + e + f + g + h + i + j == n) {
//						cout<<a<<" " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << " " << i << " " << j << " ";
//						cout << "\n";
//					}
//	}
//	
//	return 0;
//}

//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//int b[10];
//void go(int x) {
//	b[x % 10] = 1;
//	b[x / 10 % 10] = 1;
//	b[x / 100] = 1;
//}
//bool check(int x, int y, int z) {
//	memset(b, 0, sizeof(b));
//	if (y > 999 || z > 999)return 0;
//	go(x), go(y), go(z);
//	for (int i = 1; i <= 9; i++)
//		if (!b[i])return 0;
//	return 1;
//}
//int main() {
//	int A, B, C, x, y, z, cnt = 0;
//	cin >> A >> B >> C;
//	for (x = 123; x <= 987; x++) {
//		if (A == 0)
//			break;
//		if (x * B % A || x * C % A)continue;
//		y = x * B / A, z = x * C / A;
//		if (check(x,y,z)) {
//			cout << x << " " << y << " " << z << "\n";
//			cnt++;
//		}
//	}
//	if (!cnt)cout << "No!!!";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << a / b * c;
//	return 0;
//}

#include<iostream>
#include<cstdio>
#include<bit>
using namespace std;
int a[20];
int popcount(int a) {
	int ans=0;
	while (a != 0) {
		if (a % 2 == 1)
			ans++;
		a=a >> 1;
	}
	return ans;
}
bool check(int x)//ÅĞ¶ÏÖÊÊı
{
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}
int main() {
	int n, k,ans=0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int U = 1 << n;
	for (int S = 0; S < U; S++) {
		if (popcount(S) == k) {
			int sum = 0;
			for (int i = 0; i < n; i++)
				if (S & (1 << i))sum += a[i];
			if (check(sum))ans++;
		}
	}
	cout << ans;
	return 0;
}

//#include<iostream>
//using namespace std;
//int main() {
//	cout << (5 >> 1);
//	return 0;
//}