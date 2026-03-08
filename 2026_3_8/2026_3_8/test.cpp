//#include<iostream>
//using namespace std;
//int main() {
//	int count = 0;
//	int flag = 0;
//	for (int i = 2;i; i++) {
//		for (int j = 2; j < i; j++) {
//			if (i % j == 0) {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0) {
//			count++;
//			//cout << count << " " << i << "\n";
//
//		}
//		if (count == 2025) {
//			cout << i;
//			break;
//		}
//		flag = 0;
//	}
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int a[10][10];
//void Initial() {
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++)
//			a[i][j] = -1;
//	}
//	a[1][1] = 1;
//	a[1][2] = 0;
//	a[1][4] = 0;
//	a[2][4] = 0;
//	a[3][5] = 0;
//	a[3][6] = 0;
//	a[5][3] = 1;
//	a[5][6] = 1;
//	a[6][2] = 0;
//	a[6][5] = 1;
//	a[3][4] = 1;
//	a[1][3] = 1;
//}
//void Print() {
//	for (int i = 1; i < 7; i++) {
//		for (int j = 1; j < 7; j++)
//			cout << a[i][j] << " ";
//		cout << "\n";
//	}
//	
//}
//int def(int r,int c) {
//	if (a[r][c] == 0 || a[r][c] == 1)return 0;
//	if (a[r][c] == -1) {
//		int rcnt, ccnt;
//		for (int i = 1; i < 7; i++) {
//			if (a[r][i] == 1)rcnt++;
//		}
//		rcnt == 3 ? a[r][c] == 0 : a[9][9] = -1;
//		rcnt <= 3 ? a[r][c] == 0 : a[9][9] = -1;
//
//	}
//	return 0;
//}
//int main() {
//	//Initial();
//	//Print();
//	//def(1,5);
//	cout << "101001010011101100010010001101100110";
//	return 0;
//}
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define ll long long int
//ll a1[1009];
//ll a2[1009];
//ll a3[1009];
//ll score = 0;
//void Initial(ll n) {
//	for (int i = 0; i < n; i++) {
//		cin >> a1[i];
//	}
//	for (int i = 0; i < n; i++) {
//		cin >> a2[i];
//	}
//	for (int i = 0; i < n; i++) {
//		cin >> a3[i];
//	}
//}
//void Print(ll n) {
//	for (int i = 0; i < n; i++) {
//		cout<< a1[i]<<" ";
//	}
//	cout << "\n";
//	for (int i = 0; i < n; i++) {
//		cout<< a2[i]<<" ";
//	}
//	cout << "\n";
//
//	for (int i = 0; i < n; i++) {
//		cout<< a3[i]<<" ";
//	}
//}
//ll Score(ll p1, ll p2, ll p3) {
//	ll my_sort[3]; my_sort[0] = a1[p1], my_sort[1] = a2[p2], my_sort[2] = a3[p3];
//	sort(my_sort, my_sort + 3);
//	if (a1[p1] == a2[p2] && a1[p1] == a3[p3]) {
//		return 200;
//	}
//	else if (a1[p1] == a2[p2] || a1[p1] == a3[p3] || a2[p2] == a3[p3]) {
//		return 100;
//	}
//	else if (a1[p1] + 1 == a2[p2] && a2[p2] + 1 == a3[p3]) {
//		return 200;
//	}
//	else if (my_sort[0]+1==my_sort[1]&&my_sort[1]+1==my_sort[2]) {
//		return 100;
//	}
//	return 0;
//}
//void Spin(ll n,ll m) {
//	ll p1 = 0,p2 = 0, p3 = 0;
//	while (m--) {
//		ll o1, o2, o3;
//		cin >> o1 >> o2 >> o3;
//		p1 = (p1 + o1) % n;
//		p2 = (p2 + o2) % n;
//		p3 = (p3 + o3) % n;
//		score+=Score(p1, p2, p3);
//	}
//}
//int main() {
//	ll m,n;
//	cin >> n;
//	Initial(n);
//	//Print(n);
//	cin >> m;
//	Spin(n, m);
//	cout << score;
//	return 0;
//}

//
////两个子节点：k=2n和2n＋1
//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//#define ll long long int
//int a[40];
//char c[40];
//int main() {
//	ios::sync_with_stdio;
//	cin.tie(0), cout.tie(0);
//	ll m;
//	cin >> m;
//	while (m--) {
//		ll n;
//		cin >> n;
//		int g;
//		cin >> g;
//		ll k=pow(2, n-1)+g-1;
//		cout << k << "\n";
//		int cnt = 0;
//		for (int i = 0; k > 0; i++) {
//			a[i] = k;
//			k = k/2;
//			cnt++;
//		}
//		sort(a, a + cnt);
//		c[0] = 'r';
//		for (int i = 1; i < cnt; i++) {
//			if (a[i] == a[i - 1] * 2) {
//				c[i - 1] == 'r' ? c[i] = 'r' : c[i] = 'b';
//			}
//			else if (a[i] == a[i - 1] * 2 + 1) {
//				c[i - 1] == 'r' ? c[i] = 'b' : c[i] = 'r';
//			}
//		}
//		if (c[cnt - 1] == 'r') cout << "RED\n";
//		else cout << "BLACK\n";
//	}
//
//
//
//
//	return 0;
//}


#include<iostream>
#include<string>
using namespace std;
int a[10] = { 13,1,2,3,5,4,4,2,2,2 };
int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int De(int x) {
	int ans=0;
	while (x) {
		int t = x % 10;
		x /= 10;
		ans += a[t];
	}
	return ans;
}
int main() {
	int year = 2024;
	int cnt = 0;
	for (; year < 2025; year++) {
		if (year % 4 == 0)month[2]++;
		for (int m = 1; m < 4; m++) {
			for (int d = 1; d <= month[m]; d++) {
				int chuan = year * 10000 + m * 100 + d;
				int ans=De(chuan);
				if (ans > 50) cnt++;
			}
		}
		month[2] = 28;
	}
	cout << cnt;
	return 0;
}

#include<iostream>
//
//int main() {
//	std::cout << 3185 + 33 + 10;
//	return 0;
//}