#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<queue>
//#include<cstdio>
//using namespace std;
//int n, a, b;
//int k[210];
//int k2[210];
//class eva {
//public:
//	int x;
//	int y;
//	int step;
//	eva() {};
//	eva(int x, int y, int step) {
//		this->x = x;
//		this->y = y;
//		this->step = step;
//	}
//};
//int main()
//{
//	int score = 0;
//	cin >> n >> a >> b;
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &k[i]);
//	}
//	queue<eva>ans;
//	eva A = eva(a, k[a], 0);
//	ans.push(A);
//	k2[a] = 1;
//	while (!ans.empty())
//	{
//		if (a == b)
//		{
//			score = 1;
//			cout << "0";
//			break;
//		}
//		eva A1 = ans.front();
//		ans.pop();
//		if (A1.x + A1.y <= n&&k2[A1.x + A1.y]==0)
//		{
//			eva A2(A1.x + A1.y, k[A1.x + A1.y], A1.step + 1);
//			ans.push(A2);
//			if (A2.x == b)
//			{
//				cout << A2.step;
//				score = 1;
//				break;
//			}
//			k2[A1.x + A1.y] = 1;
//		}
//		if (A1.x - A1.y > 0&&k2[A1.x - A1.y] == 0)
//		{
//			eva A2(A1.x - A1.y, k[A1.x - A1.y], A1.step + 1);
//			ans.push(A2);
//			if (A2.x == b)
//			{
//				cout << A2.step;
//				score = 1;
//				break;
//			}
//			k2[A1.x - A1.y] = 1;
//		}
//	}
//	if (score == 0)cout << "-1";
//	return 0;
//}

#include<iostream>
#include<queue>
#include<vector>
#include<cstdio>
#
using namespace std;
int m, x, y, t;
int _map[110][110];
class stone {
public:
	int x, y, t;
	stone() {};
	stone(int x, int y, int t) {
		this->x = x; this->y = y; this->t = t;
	}
};
int main()
{
	cin >> m;
	auto cmp = [](stone a, stone b) {return a.t > b.t; }; 
	priority_queue<stone, vector<stone>, decltype(cmp)> pq(cmp);
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d%d", &x, &y, &t);
		stone a = stone(x, y, t);
		pq.push(a);
	}

	return 0;
}