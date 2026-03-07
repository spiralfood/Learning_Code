#define _CRT_SECURE_NO_WARNINGS 0

//typedef long long LL;
//int main()
//{
//	LL n, m, squ = 0, rec = 0;
//	scanf("%lld%lld", &n, &m);
//	for (LL x = 0; x <= n; x++)
//	{
//		for (LL y = 0; y <= m; y++)
//		{
//			LL tmp = min(x, y);
//			squ += tmp;
//			rec += x * y - tmp;
//		}
//	}
//	printf("%lld %lld", squ , rec );
//	return 0;
//}
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define rep(i,a,b) for(int i=a;i<=b;i++)
void cal(int n)
{
	int ans = 0;
	rep(a, 1, 3) rep(b, 1, 3) rep(c, 1, 3) rep(d, 1, 3) rep(e, 1, 3) rep(f, 1, 3) rep(g, 1, 3) rep(h, 1, 3) rep(i, 1, 3) rep(j, 1, 3)
		if (a + b + c + d + e + f + g + h + i + j == n)
			ans++;
	printf("%d\n", ans);
	rep(a, 1, 3) rep(b, 1, 3) rep(c, 1, 3) rep(d, 1, 3) rep(e, 1, 3) rep(f, 1, 3) rep(g, 1, 3) rep(h, 1, 3) rep(i, 1, 3) rep(j, 1, 3)
		if (a + b + c + d + e + f + g + h + i + j == n)
			printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);

}
int main()
{
	int n;
	scanf("%d", &n);
	if (n > 30||n<10)
		printf("0");
	else
		cal(n);
	return 0;
}