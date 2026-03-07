#define _CRT_SECURE_NO_WARNINGS 0
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int a[100];
//	int n, sco = 1;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	sort(a, a + n);
//	int ans=unique(a, a + n)-a;
//	printf("%d\n", ans);
//	for (int i = 0; i < ans; i++)
//		printf("%d ", a[i]);
//	return 0;
//}
//int main()
//{
//	int num[10] = { 1,1,2,2,2,3,4,5,5,5 };
//	
//	//int ans = unique(num, num + 10)-num ;  //去重函数返回地址为：去重后最后一个不重复元素地址
//	/*for (int i = 0; i < 10; i++)
//		cout << num+i<<"\n";*/
//	return 0;
//}
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int num,x,y,z;
	long a[350];
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d%d%d", &x, &y, &z);
		a[i] = (x + y + z) * 1000000 + x * 10000 + (1000 - i-1);
	}
	sort(a, a + num);
	for (int i = num-1; i >num-6; i--)
	{
		x = a[i] / 1000000;
	//	y = a[i] % 1000000 / 10000;
		z = 1000 - (a[i] % 10000);
		printf("%d %d\n", z,x);
	}
	return 0;
}
