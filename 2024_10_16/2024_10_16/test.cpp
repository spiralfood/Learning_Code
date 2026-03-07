#define _CRT_SECURE_NO_WARNINGS 
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[100000];
//int n, c;
//bool find(int x)
//{
//	int c1=c-1;
//	int prev = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] - prev >= x)
//		{
//			prev = a[i];
//			c1--;
//		}
//		if (c1 == 0) {
//			return true;
//		}
//	}
//	if (c1 == 0)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//
//	cin >> n >> c;
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	sort(a,a+n);
//	int l = 0, r = 1e9,mid,ans=0;
//	while (l <= r)
//	{
//		if (find(mid = (l + r) >> 1))
//		{
//			ans=mid,l = mid + 1;
//		}
//		else
//		{
//			r = mid - 1;
//		}
//	}
//	cout << ans << "\n";
//	return 0;
//}

#include<iostream>
using namespace std;
double a, b, c, d;
//double x11=-122, x12=-122, x21=-122, x22=-122, x31=-122, x33=-122;
double f(double x)
{
	return a * x * x * x + b * x * x + c * x + d;
}
double x1, x2;
void find(double x1, double x2)
{
	double i = 0,mid;

	for (; i < 8; i++)
	{
		if (f(mid = (x1 + x2)/2.0)*f(x1)<0)
		{
			x2 = mid;
		}
		else if (f(x1)==0)
		{
			printf("%.2f ", x1);
		}
		else if (f(x2) == 0)
		{
			printf("%.2f ", x2);
		}
		else {
			x1 = mid;
		}
	}
	printf("%.2f ", mid);
}
int main()
{
	cin >> a >> b >> c >> d;
	for (double i = -100; i < 100; i++)
	{
		if (f(i) * f(i + 1) < 0)
		{
			x1 = i, x2 = i + 1;
			find(x1, x2);
		}
		else if (f(i) == 0)
		{
			printf("%.2f ", i);
			
		}
	}
	return 0;
}