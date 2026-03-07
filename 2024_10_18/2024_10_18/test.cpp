#include<iostream>
#include<cstdio>
using namespace std;
#define size 5
int a[size * size], n = 4 * 4, ans = 0;
int b1[size][5], b2[size][5], b3[size][5];//分别记录横行，竖行，四小块
void dfs(int x)//第x个空填什么
{
	if (x > n) {//如果所有空已经填满
		ans++;
		return;
	}
	int row = (x - 1) / 4 + 1;//横行编号
	int col = (x - 1) % 4 + 1;//竖排编号
	int block
}
int main()
{
	dfs(1);
	printf("%d", ans);
	return 0;
}