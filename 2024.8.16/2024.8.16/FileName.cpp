//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	int a[20] = { 1,1 };
//	cin >> n;
//	for (int i = 2; i <= n; i++) {
//		for (int j = 0; j < i; j++) {
//			a[i] += a[j] * a[i - j - 1];
//		}
//	}
//	cout << a[n];
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main() {
//	long long a[22][22] = { 0 };
//
//	int bx, by, hx, hy;
//	cin >> bx >> by >> hx >> hy;
//	//	for(int i=0;i<)
//	bx += 1, by += 1, hx += 1, hy += 1;
//	for (int i = 1; i <= 21; i++) {
//		if ((hx != 1 || hy != i) && (hx + 2 != 1 || hy - 1 != i) && (hx + 2 != 1 || hy + 1 != i) &&
//			(hx + 1 != 1 || hy + 2 != i) && (hx + 1 != 1 || hy - 2 != i) && (hx - 1 != 1 || hy - 2 != i) && (hx - 1 != 1 || hy + 2 != i)
//			&& (hx - 2 != 1 || hy - 1 != i) && (hx - 2 != 1 || hy + 1 != i))
//			a[1][i] = 1;
//		else
//			break;
//
//	}
//	for (int i = 1; i <= 21; i++) {
//
//		if ((hx != i || hy != 1) && (hx + 2 != i || hy - 1 != 1) && (hx + 2 != i || hy + 1 != 1) &&
//			(hx + 1 != i || hy + 2 != 1) && (hx + 1 != i || hy - 2 != 1) && (hx - 1 != i || hy - 2 != 1) && (hx - 1 != i || hy + 2 != 1)
//			&& (hx - 2 != i || hy - 1 != 1) && (hx - 2 != i || hy + 1 != 1))
//			a[i][1] = 1;
//		else
//			break;
//	}
//	for (int i = 2; i <= bx; i++) {
//		for (int j = 2; j <= by; j++) {
//			if ((i != hx || j != hy) && (i != hx - 2 || j != hy - 1) && (i != hx - 2 || j != hy + 1) && (i != hx - 1 || j != hy - 2)
//				&& (i != hx - 1 || j != hy + 2) && (i != hx + 1 || j != hy + 2) && (i != hx + 1 || j != hy - 2) &&
//				(i != hx + 2 || j != hy - 1) && (i != hx + 2 || j != hy + 1))
//				a[i][j] = a[i - 1][j] + a[i][j - 1];
//
//		}
//	}
//	cout << a[bx][by] << "\n";
//		for (int i = 0; i < 22; i++) {
//			for (int j = 0; j < 22; j++)
//				cout << a[i][j] << "  ";
//			cout << "\n";
//		}
//	return 0;
//}

#include<iostream>
using namespace std;
long n, f[20][20];//f数组记录方案
long dfs(int x, int y)//x是操作队列里元素的个数，y是栈里的个数
{
    if (f[x][y] != 0) return f[x][y];//记忆化，走过的方案直接调用
    if (x == 0) return 1;//当操作队列里没有了，就只有一种方案了
    if (y > 0) f[x][y] += dfs(x, y - 1);//栈里不为空的时候才可以把栈里的元素推出
    f[x][y] += dfs(x - 1, y + 1);//操作队列里元素减一，栈里元素加一
    return f[x][y];//返回方案值
}
int main()
{
    cin >> n;
    cout << dfs(n, 0) << endl;
    return 0;
}