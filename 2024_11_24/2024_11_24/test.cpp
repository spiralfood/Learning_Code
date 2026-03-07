//#include<iostream>
//#include<queue>
//#include<cstring>
//#include<cmath>
//using namespace std;
//#define maxn 310
//#define MIN(x,y,t) if(x>=0&&y>=0) death[x][y]=min(death[x][y],t)
//struct coord {
//	int x, y;
//};
//queue<coord>Q;
//int ans[maxn][maxn], death[maxn][maxn];//death表示该点被流星雨砸中的时间
//int wk[4][2] = { {0,1},{1,0},{-1,0},{0,-1} };
//int main()
//{
//	int m, Ans = 100000;
//	memset(ans, -1, sizeof(ans));
//	memset(death, 0x7f, sizeof(death));
//	cin >> m;
//	for (int i = 1; i <= m; i++) {
//		int x, y, t;
//		cin >> x >> y >> t;
//		MIN(x, y, t);
//		for (int k = 0; k < 4; k++)
//			MIN(x + wk[k][0], y + wk[k][1], t);
//		//记录下流星和上下左右影响烧焦范围的时间
//	}
//	coord c; c.x = 0; c.y = 0;
//	Q.push(c);
//	ans[0][0] = 0;
//	while (!Q.empty()) {
//		coord u = Q.front();
//		int ux = u.x, uy = u.y;
//		Q.pop();
//		for (int k = 0; k < 4; k++)
//		{
//			int x = ux + wk[k][0], y = uy + wk[k][1];
//			
//			if (x < 0 || y<0 || ans[x][y] != -1 || ans[ux][uy] + 1>=death[x][y]||x>305||y>305)
//				continue;
//			ans[x][y] = ans[ux][uy] + 1;
//			coord v; v.x = x; v.y = y;
//			Q.push(v);
//		}
//
//	}
//	for (int i = 0; i <= 305; i++)
//		for (int j = 0; j <= 305; j++)
//			if (death[i][j] > 10000 && ans[i][j] != -1)
//				Ans = min(Ans, ans[i][j]);
//	if (Ans == 100000)
//		puts("-1");
//	else
//		printf("%d", Ans);
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//#include<stack>
//using namespace std;
//int main()
//{
//	int final=0;
//	char s1[55];
//	string s2;
//	cin >> s1;
//	stack<int>ans;
//	int a;
//	for (int i = 0; i < 55; i++)
//	{
//		if (s1[i] >= '0' && s1[i] <= '9')
//		{
//			a = s1[i] - '0';
//			for (int j = 1; j < 55 - i; j++)
//			{
//				if (s1[i + j] == '.')
//				{
//					i += j;
//					break;
//				}
//				else
//					a = a * 10 + s1[i + j]-'0';
//			}
//			ans.push(a);
//		}
//		if (s1[i] == '+' || s1[i] == '-' || s1[i] == '*' || s1[i] == '/')
//		{
//			int a1 = ans.top(); ans.pop();
//			int a2 = ans.top(); ans.pop();
//			if (s1[i] == '+') {
//				final = a1 + a2;
//				ans.push(final);
//			}
//			if (s1[i] == '-') {
//				final = a2 - a1;
//				ans.push(final);
//			}
//			if (s1[i] == '*') {
//				final = a1 * a2;
//				ans.push(final);
//			}
//			if (s1[i] == '/') {
//				final = a2 / a1;
//				ans.push(final);
//			}
//			
//		}
//		if (s1[i] == '@')
//			break;
//	}
//	cout << ans.top();
//	return 0;
//}

//#include<iostream>
//#include<queue>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	queue<int>a;
//	for (int i = 1; i <= n; i++)
//		a.push(i);
//	int i = 1;
//	while(!a.empty())
//	{
//		
//		if (i == m)
//		{
//			cout << a.front()<<" ";
//			a.pop();
//			i = 1;
//		}
//		else
//		{
//			int cnt = a.front();
//			a.pop();
//			a.push(cnt);
//			i++;
//		}
//	}
//	return 0;
//}

#include<iostream>
using namespace std;
const int MAXN = 2e5 + 7;
struct Node {
	int left, right;
}t[MAXN];
int n;
void build()
{
	for (int i = 1; i <= n; i++)
	{
		cin >> t[i].left >> t[i].right;
	}
}
int dfs(int x) {
	if (!x)return 0;
	return max(dfs(t[x].left), dfs(t[x].right)) + 1;
}
int main()
{
	cin >> n;
	build();
	cout << dfs(1);
	return 0;

}