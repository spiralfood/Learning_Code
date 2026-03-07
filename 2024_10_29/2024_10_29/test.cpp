//#include<iostream>
//using namespace std;
//int n;
//int ans = 0;
//int a[15],b1[15],b2[15],b3[15];
//void dsp(int x)
//{
//	if (x > n)
//	{
//		ans++;
//		if (ans <= 3)
//		{
//			for (int i = 0; i < n; i++)
//				cout << a[i]<<" ";
//			cout << "\n";
//
//		}
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (b1[i] == 0 && b2[x + i] == 0 && b3[x - i + 15] == 0) {
//				a[x-1] = i+1;
//				b1[i] = 1, b2[x + i] = 1, b3[x - i + 15] = 1;
//				dsp(x + 1);
//				b1[i] = 0, b2[x + i] = 0, b3[x - i + 15] = 0;
//  			}
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	dsp(1);
//	cout << ans;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int n;
//int ans = 0;
//#define maxn 100
//int a[maxn];
//int b1[maxn], b2[maxn], b3[maxn];
//void dfs(int x)
//{
//	if (x > n)
//	{
//		ans++;
//		if (ans <= 3) {
//			for (int i = 1; i <= n; i++)
//			{
//				printf("%d ", a[i]);
//			}
//			puts(" ");
//		}
//		return;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (b1[i] == 0 && b2[x + i] == 0 && b3[x - i + 15] == 0)
//		{
//			a[x] = i;
//			b1[i] = 1; b2[x + i] = 1; b3[x - i + 15] = 1;
//			dfs(x + 1);
//			b1[i] = 0; b2[x + i] = 0; b3[x - i + 15] = 0;
//		}
//	}
//}
//int main()
//{
//	cin >> n;
//	dfs(1);
//	printf("%d", ans);
//	return 0;
//}

//#include<iostream>
//#include<cmath>
//using namespace std;
//int a[5], i, j, k, sum, t, homework[21], dp[2501];
//int main() {
//	for (i = 1; i <= 4; i++)
//		cin >> a[i];
//	for (i = 1; i <= 4; i++) {
//		sum = 0;
//		for (j = 1; j <= a[i]; j++)
//		{
//			cin >> homework[j];//输入
//			sum += homework[j];
//		}//总时间累加
//		for (j = 1; j <= a[i]; j++)
//			for (k = sum / 2; k >= homework[j]; k--)//只要是总和的一半
//				dp[k] = max(dp[k], dp[k - homework[j]] + homework[j]);//01背包
//		t += sum - dp[sum / 2];//累加为另一个脑子
//		for (j = 1; j <= sum / 2; j++)
//			dp[j] = 0;//清零
//	}
//	cout << t;//输出
//	return 0;
//}

#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
long long a[410][410];
int n, m, x, y;
queue<int>b;
void dsp(int x, int y,long long airplay)
{
	if (x <= 0 || x > n || y <=0 || y > m)
		return;
	else if (a[x][y] != -1)
	{
		if (airplay < a[x][y])
		{
			a[x][y] = airplay;
		}
		airplay++;
		dsp(x + 1, y + 2, airplay);
		dsp(x + 2, y + 1, airplay);
		dsp(x - 1, y + 2, airplay);
		dsp(x - 2, y + 1, airplay);
		dsp(x + 1, y - 2, airplay);
		dsp(x + 2, y - 2, airplay);
		dsp(x + 2, y - 1, airplay);
		dsp(x + 1, y - 2, airplay);
		return;
	}

	a[x][y] = airplay;
	airplay++;
	dsp(x + 1, y + 2, airplay);
	dsp(x + 2, y + 1, airplay);
	dsp(x - 1, y + 2, airplay);
	dsp(x - 2, y + 1, airplay);
	dsp(x + 1, y - 2, airplay);
	dsp(x + 2, y - 2, airplay);
	dsp(x + 2, y - 1, airplay);
	dsp(x + 1, y - 2, airplay);
}
int main()
{

	cin >> n >> m >> x >> y;
	a[x][y] = 0;
	memset(a, -1, sizeof(a));
	
	dsp(x, y,0);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}