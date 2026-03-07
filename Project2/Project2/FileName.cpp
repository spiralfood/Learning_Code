#define _CRT_SECURE_NO_WARNINGS 0

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[100000] = { 0 };
//	a[0] = 1;
//	int m = 0;
//	int j;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> j;
//		if (j == 1)
//		{
//			int x,i2, y;
//			int i1 = 0;
//			cin >> x >> y;
//			while (a[i1] != x && a[i1] != 0)
//			{
//				i1++;
//			}
//			i2 = i1;
//			while (a[i1] != 0)
//			{
//				i1++;
//			}
//			while (i1 > i2+1)
//			{
//				a[i1] = a[i1 - 1];
//				i1--;
//			}
//			a[i2 + 1] = y;
//		}
//		else if (j == 2)
//		{
//			int x1;
//			cin >> x1;
//			int j1=0;
//			
//			while (a[j1] != x1)
//				j1++;
//			cout << a[j1 + 1]<<"\n";
//		}
//		else if (j == 3)
//			{
//			int x2;
//			cin >> x2;
//			int k1 = 0;
//			while (a[k1] != x2)
//				k1++;
//			while (a[k1] != 0)
//			{
//				a[k1 + 1] = a[k1 + 2];
//				k1++;
//			}
//			}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	long long n, ans = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		long long factor = 1;
//		for (int j = 1; j <= i; j++)
//			factor *= j;
//		ans += factor;
//	}
//	cout << ans << endl;
//	return 0;
//}
//#define maxn 100
//#include<iostream>
//#include<cstring>
//using namespace std;
//class Bigint {
//public:
//	int len, a[maxn];//为了兼顾效率与代码复杂度，用len记录位数，a记录每个数位
//	Bigint(int x = 0)//通过初始化使得这个大整数能够表示整形x，默认为0
//	{
//		memset(a, 0, sizeof(a));
//		for (len = 1; x; len++)
//			a[len] = x % 10, x /= 10;
//		len--;
//		
//	}
//	int &operator[](int i)
//	{
//		return a[i];//重载【】，可以直接用x【i】代表x.a[i]，编写时更加自然。
//	}
//	void flatten(int L)//一口气处理1到L范围内的进位并重置长度。需要保证L不小于有效长度
//	{
//		len = L;
//		for (int i = 1; i < len; i++)
//			a[i + 1] += a[i] / 10, a[i] %= 10;
//		for (; !a[len];)//重置为长度成为有效长度
//			len--;
//
//	}
//	void print()//输出
//	{
//		for (int i = max(len, 1); i >= 1; i--)
//			printf("%d", a[i]);
//	}
//};
//Bigint operator+(Bigint a, Bigint b)
//{
//	Bigint c;
//	int len = max(a.len, b.len);
//	for (int i = 1; i <= len; i++)
//		c[i] += a[i] + b[i];//计算贡献
//	c.flatten(len + 1);//答案不超过len+1位，所以用len+1做一遍展平处理进位
//	return c;
//}
//Bigint operator*(Bigint a, int b)
//{
//	Bigint c;
//	int len = a.len;
//	for (int i = 1; i <= len; i++)
//	{
//		c[i] = a[i] * b;//计算贡献
//		
//	}
//	c.flatten(len + 11);//int类型最长10位
//	return c;
//}
//int main()
//{
//	Bigint ans(0), fac(1);//分别用0和1初始化ans与fac，如果将常数赋值给大整数，可以使用
//	//ans=Bigint(233)的方法
//	int m;
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		fac = fac * i;
//		ans = ans + fac;
//	}
//	ans.print();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<cstdio>
//int main()
//{
//    int i, A[1005] = { 0 }, B[1005] = { 0 }, n, j;
//    scanf("%d", &n);
//    A[0] = B[0] = 1;
//    for (i = 2; i <= n; i++) {//做阶乘的运算
//        for (j = 0; j < 100; j++)
//            B[j] *= i;
//        for (j = 0; j < 100; j++)//进位
//            if (B[j] > 9) {
//                B[j + 1] += B[j] / 10;
//                B[j] %= 10;
//            }
//        for (j = 0; j < 100; j++) {//做阶乘和的运算并进位
//            A[j] += B[j];
//            if (A[j] > 9) {
//                A[j + 1] += A[j] / 10;
//                A[j] %= 10;
//            }
//        }
//    }
//    for (i = 100; i >= 0 && A[i] == 0; i--);
//    for (j = i; j >= 0; j--) printf("%d", A[j]);
//    return 0;
//}//我超，这个代码有点吊啊
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int a[1000] = { 0 };
//	for (int i = 0; i < m; i++)
//	{
//		int j;
//		cin >> j;
//		a[j]++;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		while (a[i] != 0)
//		{
//			cout << i<<" ";
//			a[i]--;
//		}
//	}
//	return 0;
//}
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
	int a[2000000] = { 0 };
	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < m; i++)
		cin >> a[i];
	sort(a, a + m);
	for (int i = 0; i < m; i++)
		cout << a[i]<<" ";
	return 0;
}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[2000000], n, m;
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)cin >> a[i];
//	sort(a, a + m); //sort排序
//	for (int i = 0; i < m; i++)cout << a[i] << " ";
//	return 0;
//}






