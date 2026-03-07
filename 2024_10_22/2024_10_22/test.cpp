//#include<iostream>
//#include<cstdio>
//using namespace std;
//#define size 5
//int a[size * size],n=4*4,ans=0;
//int b1[size][5], b2[size][5], b3[size][5];
//void dfs(int x)
//{
//	if (x > n) {
//		ans++;
//		return;
//	}
//	int row = (x - 1) / 4 + 1;//横行编号
//	int col = (x - 1) % 4 + 1;//竖排编号
//	int block = (row - 1) / 2 * 2 + (col - 1) / 2 + 1;//小块编号
//	for (int i = 1; i <= 4; i++)
//	{
//		if (b1[row][i] == 0 && b2[col][i] == 0 && b3[block][i] == 0)
//		{
//			a[x] = i;
//			b1[row][i] = 1, b2[col][i] = 1, b3[block][i] =1;//占位
//			dfs(x + 1);//下一层递归
//			b1[row][i] = 0, b2[col][i] = 0, b3[block][i] = 0;//取消占位
//		}
//	}
//}
//int main()
//{
//	dfs(1);
//	printf("%d", ans);
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
//	for (int i=1;i<=n;i++)
//	{
//		if (b1[i]==0&&b2[x+i]==0&&b3[x-i+15]==0)
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
//#include<algorithm>
//using namespace std;
//int s1, s2, s3, s4,sumtime1=0,sumtime2=0;
//int S1[20], S2[20], S3[20], S4[20];
//int main()
//{
//	cin >> s1 >> s2 >> s3 >> s4;
//	for (int i = 0; i < s1; i++)
//		cin >> S1[i];
//	for (int i = 0; i < s2; i++)
//		cin >> S2[i];
//	for (int i = 0; i < s3; i++)
//		cin >> S3[i];
//	for (int i = 0; i < s4; i++)
//		cin >> S4[i];
//	sort(S1, S1 + s1);
//	sort(S2, S2 + s2);
//	sort(S3, S3 + s3);
//	sort(S4, S4 + s4);
//	for (int i = 0; i < s1; i++)
//	{
//		if (i == 0)
//		{
//			sumtime1 += max(S1[i], S1[i + 1]);
//			sumtime2+= min(S1[i], S1[i + 1]);
//			i++;
//		}	
//		else
//		{
//			if (sumtime1 > sumtime2)
//			{
//				sumtime2 += S1[i];
//			}
//			else
//				sumtime1 += S1[i];
//		}
//	}
//	sumtime1 = max(sumtime1, sumtime2);
//	sumtime2 = sumtime1;
//	for (int i = 0; i < s2; i++)
//	{
//		if (i == 0)
//		{
//			sumtime1 += max(S2[i], S2[i + 1]);
//			sumtime2 += min(S2[i], S2[i + 1]);
//			i++;
//		}
//		else
//		{
//			if (sumtime1 > sumtime2)
//			{
//				sumtime2 += S2[i];
//			}
//			else
//				sumtime1 += S2[i];
//		}
//	}
//	sumtime1 = max(sumtime1, sumtime2);
//	sumtime2 = sumtime1;
//
//	for (int i = 0; i < s3; i++)
//	{
//		if (i == 0)
//		{
//			sumtime1 += max(S3[i], S3[i + 1]);
//			sumtime2 += min(S3[i], S3[i + 1]);
//			i++;
//		}
//		else
//		{
//			if (sumtime1 > sumtime2)
//			{
//				sumtime2 += S3[i];
//			}
//			else
//				sumtime1 += S3[i];
//		}
//	}
//	sumtime1 = max(sumtime1, sumtime2);
//	sumtime2 = sumtime1;
//
//	for (int i = 0; i < s4; i++)
//	{
//		if (i == 0)
//		{
//			sumtime1 += max(S4[i], S4[i + 1]);
//			sumtime2 += min(S4[i], S4[i + 1]);
//			i++;
//		}
//		else
//		{
//			if (sumtime1 > sumtime2)
//			{
//				sumtime2 += S4[i];
//			}
//			else
//				sumtime1 += S4[i];
//		}
//	}
//	sumtime1 = max(sumtime1, sumtime2);
//	sumtime2 = sumtime1;
//
//	cout << sumtime1;
//	return 0;
//}

#include<iostream>
#include<algorithm>
using namespace std;
int nowtime, maxtime, sum;
int ans, maxdeep;
int s[4], a[21];
void dfs(int x)
{
	if (x > maxdeep)
	{
		maxtime = max(maxtime, nowtime);
		return;
	}
	if (nowtime + a[x] <= sum / 2) {
		nowtime += a[x];
		dfs(x + 1);
		nowtime -= a[x];
	}
	dfs(x + 1);
}
int main()
{
	cin >> s[0]>>s[1]>>s[2]>>s[3];
	for (int i = 0; i < 4; i++)
	{
		nowtime = 0;
		maxdeep = s[i];
		sum = 0;//别忘了每次换科目都需要初始化
		for (int j = 1; j <= s[i]; j++)
		{
			cin >> a[j];
			sum += a[j];
		}
		maxtime = 0;
		dfs(1);
		ans += (sum - maxtime);
	}
	cout << ans;
	return 0;
}