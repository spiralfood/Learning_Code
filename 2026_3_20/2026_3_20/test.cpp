#include<iostream>
using namespace std;
int f[100010];
int dp[100010];
int main()
{
	
	int ans = 0;
	int cnt = 0;
	while (cin >> f[cnt++]) { ; }
	cnt--;
	for (int i = 0; i < cnt; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (f[i] <= f[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ans = max(ans, dp[i]);
	}
	cout << ans<<endl;
	ans = 0;
	for (int i = 0; i < cnt; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (f[i] > f[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ans = max(ans, dp[i]);
	}
	cout << ans;
	return 0;
}