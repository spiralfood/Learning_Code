#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int a[1000000];
long long N, M,ans=0;
bool find(long long x)
{
	long long sum=0;
	for (long long i = 0; i < N; i++)
	{
		if (a[i] > x)
		{
			sum += a[i] - x;
		}
	}
	return sum >= M;
}
int main()
{

	cin >> N >> M;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	int l = 0, r = 2e9,mid;
	while (l <= r)
	{
		if (find(mid=(l + r) >> 1)) {
			ans=mid,l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	printf("%lld\n", ans);
	return 0;
}