#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//string a[5000];
//int main() {
//	int n;
//	cin >> n;
//	a[0] = "1";
//	a[1] = "2";
//	for (int i = 2; i < n; i++) {
//		int end1 = a[i - 1].size()-1;
//		int end2 = a[i - 2].size()-1;
//		int next = 0;
//		while (end1 >= 0 || end2 >= 0) {
//			int x1 = end1 >= 0 ? a[i-1][end1--] - '0' : 0;
//			int x2 = end2 >= 0 ? a[i - 2][end2--] - '0':0;
//			int x = x1 + x2 + next;
//			next = x / 10;
//			x = x % 10;
//			a[i] += (x + '0');
//		}
//		if (next == 1) {
//			a[i] += "1";
//		}
//		reverse(a[i].begin(), a[i].end());
//	}
//	cout << a[n - 1];
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//int main() {
//	string s1 = "12345";
//	s1[0] += 1;
//	cout << s1[0];
//}

#include<iostream>
using namespace std;
int main() {
	long long a[22][22] = { 0 };
	
	int bx, by, hx, hy;
	cin >> bx >> by >> hx >> hy;
//	for(int i=0;i<)
	bx += 1, by += 1, hx += 1, hy += 1;
	for (int i = 1; i <= 21; i++) {
		if ((hx != 1 || hy != i) && (hx + 2 != 1 || hy - 1 != i) && (hx + 2 != 1 || hy + 1 != i) &&
			(hx + 1 != 1 || hy + 2 != i) && (hx + 1 != 1 || hy - 2 != i) && (hx - 1 != 1 || hy - 2 != i) && (hx - 1 != 1 || hy + 2 != i)
			&& (hx - 2 != 1 || hy - 1 != i) && (hx - 2 != 1 || hy + 1 != i))
			a[1][i] = 1;
		else
			break;
	
	}
	for (int i = 1; i <= 21; i++) {

		if ((hx != i || hy != 1) && (hx + 2 != i || hy - 1 != 1) && (hx + 2 != i || hy + 1 != 1) &&
			(hx + 1 != i || hy + 2 != 1) && (hx + 1 != i || hy - 2 != 1) && (hx - 1 != i || hy - 2 != 1) && (hx - 1 != i || hy + 2 != 1)
			&& (hx - 2 != i || hy - 1 != 1) && (hx - 2 != i || hy + 1 != 1))
			a[i][1] = 1;
		else
			break;
	}
	for (int i = 2; i <= bx; i++) {
		for (int j = 2; j <= by; j++) {
			if ((i != hx || j != hy) && (i != hx - 2 || j != hy - 1) && (i != hx - 2 || j != hy + 1) && (i != hx - 1 || j != hy - 2)
				&& (i != hx - 1 || j != hy + 2) && (i != hx + 1 || j != hy + 2) && (i != hx + 1 || j != hy - 2) &&
				(i != hx + 2 || j != hy - 1) && (i != hx + 2 || j != hy + 1))
				a[i][j] = a[i - 1][j] + a[i][j - 1];
			
		}
	}
	cout << a[bx][by]<<"\n";
	for (int i = 0; i < 22; i++) {
		for (int j = 0; j < 22; j++)
			cout << a[i][j] << "  ";
		cout << "\n";
	}
	return 0;
}
//#include<iostream>
//using namespace std;
//long long xb, yb, xh, yh, pand[30][30] = { 0 }, f[30][30] = { 0 };
//int main()
//{
//    //输入
//    cin >> xb >> yb >> xh >> yh;
//    xb += 2; yb += 2;
//    xh += 2; yh += 2;
//    //边界进行赋值
//    for (int i = 2; i < 30; i++) {
//        f[2][i] = 1;
//        f[i][2] = 1;
//    }
//    //马对应的特殊点进行赋值
//    pand[xh][yh] = 1;
//    pand[xh - 2][yh - 1] = 1;
//    pand[xh - 1][yh - 2] = 1;
//    pand[xh + 2][yh - 1] = 1;
//    pand[xh + 1][yh - 2] = 1;
//    pand[xh - 2][yh + 1] = 1;
//    pand[xh - 1][yh + 2] = 1;
//    pand[xh + 2][yh + 1] = 1;
//    pand[xh + 1][yh + 2] = 1;
//
//    //递推的计算f(x,y)
//    f[1][2] = 1;
//    for (int i = 2; i <= xb; i++) {
//        for (int j = 2; j <= yb; j++) {
//            if (pand[i][j] == 1) {
//                f[i][j] = 0;
//                continue;
//            }
//            f[i][j] = f[i - 1][j] + f[i][j - 1];
//            // cout << f[i][j] << endl;
//        }
//    }
//    //输出
//    cout << f[xb][yb]<<"\n";
//    	for (int i = 0; i < 25; i++) {
//		for (int j = 0; j < 25; j++)
//			cout << f[i][j] << "  ";
//		cout << "\n";
//	}
//    return 0;
//}