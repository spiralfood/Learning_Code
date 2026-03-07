#include<iostream>
using namespace std;
//int main()
//{
//	/*float a = 3.4;
//	int d, b = 15, c;
//	d = a * 3;
//	c = b / 10;
//	cout << d << " " << c;*/
//	int a, b;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 10)
//			break;
//		if (b % 3 == 1)
//		{
//			b += 3;
//			continue;
//		}
//		
//	}
//	cout << a << " ";
//	return 0;
//}
//#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
const int maxn = 1e6 + 10;
int nxt[maxn], tot = 0, head = 1, val[maxn];
int place[maxn];
void insert(int y, int x)//将x插入到y后
{
	tot++;
	place[x] = tot;
	nxt[tot] = nxt[place[y]];
	nxt[place[y]] = tot;
	val[tot] = x;
}
void query(int x)//询问x后的数字
{
	cout << val[nxt[place[x]]] << endl;
}
void dele(int x)//删除x后面的
{
	nxt[place[x]] = nxt[nxt[place[x]]];
}
int main()
{
	int q;
	cin >> q;
	tot = 1;
	head = 1;
	val[1] = 1;
	place[1] = 1;
	for (int i = 1; i <= q; i++)
	{
		int t;
		cin >> t;
		if (t == 1)
		{
			int x, y;
			cin >> x >> y;
			insert(x, y);
		}
		if (t == 2)
		{
			int x;
			cin >> x;
			query(x);
		}
		if (t == 3)
		{
			int x;
			cin >> x;
			dele(x);
		}
	}
	return 0;
}