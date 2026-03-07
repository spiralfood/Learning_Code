#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int a[410][410];
int n, m, x, y;
class poi{
public:
	int x;
	int y;
	int step;
	poi() {};
	poi(int x, int y)
	{
		this->x = x;
		this->y = y;
		step = -1;
	}
};
void check(queue<poi>a2)
{
	
	while (!a2.empty())
	{
		poi A = a2.front();
		a2.pop();
		poi A1, A2, A3, A4, A5, A6, A7, A8;
		if (A.x + 1 > 0 && A.y + 2 > 0 && A.x + 1 <= n && A.y + 2 <= m)
		{
			A1 = poi(A.x + 1, A.y + 2);
			A1.step = A.step + 1;
			if (a[A1.x][A1.y] == -1)
			{
				a2.push(A1);
				a[A1.x][A1.y] = A1.step;
			}
		}
		if (A.x - 1 > 0 && A.y + 2 > 0 && A.x - 1 <= n && A.y + 2 <= m)
		{
			A2 = poi(A.x - 1, A.y + 2);
			A2.step = A.step + 1;

			if (a[A2.x][A2.y] == -1)
			{
				a2.push(A2);
				a[A2.x][A2.y] = A2.step;
			}
		}
		if (A.x + 1 > 0 && A.y - 2 > 0 && A.x + 1 <= n && A.y - 2 <= m)
		{
			A3 = poi(A.x + 1, A.y - 2);
			A3.step = A.step + 1;

			if (a[A3.x][A3.y] == -1)
			{
				a2.push(A3);
				a[A3.x][A3.y] = A3.step;
			}
		}
		if (A.x - 1 > 0 && A.y - 2 > 0 && A.x - 1 <= n && A.y - 2 <= m)
		{
			A4 = poi(A.x - 1, A.y - 2);
			A4.step = A.step + 1;

			if (a[A4.x][A4.y] == -1)
			{
				a2.push(A4);
				a[A4.x][A4.y] = A4.step;
			}
		}
		if (A.x + 2 > 0 && A.y + 1 > 0 && A.x + 2 <= n && A.y + 1 <= m)
		{
			A5 = poi(A.x + 2, A.y + 1);
			A5.step = A.step + 1;

			if (a[A5.x][A5.y] == -1)
			{
				a2.push(A5);
				a[A5.x][A5.y] = A5.step;
			}
		}

		if (A.x + 2 > 0 && A.y - 1 > 0 && A.x + 2 <= n && A.y - 1 <= m)
		{
			A6 = poi(A.x + 2, A.y - 1);
			A6.step = A.step + 1;

			if (a[A6.x][A6.y] == -1)
			{
				a2.push(A6);
				a[A6.x][A6.y] = A6.step;
			}
		}

		if (A.x - 2 > 0 && A.y + 1 > 0 && A.x - 2 <= n && A.y + 1 <= m)
		{
			A7 = poi(A.x - 2, A.y + 1);
			A7.step = A.step + 1;
			if (a[A7.x][A7.y] == -1)
			{
				a2.push(A7);
				a[A7.x][A7.y] = A7.step;
			}
		}

		if (A.x - 2 > 0 && A.y - 1 > 0 && A.x - 2 <= n && A.y - 1 <= m)
		{
			A8 = poi(A.x - 2, A.y - 1);
			A8.step = A.step + 1;

			if (a[A8.x][A8.y] == -1)
			{
				a2.push(A8);
				a[A8.x][A8.y] = A8.step;
			}
		}
	}
	
	/*if (!a2.empty())
	{
		check(a2);
	}*/
	
}
int main()
{
	memset(a, -1, sizeof(a));
	cin >> n >> m>>x>>y;
	a[x][y] = 0;
	queue<poi>a2;
	poi A(x, y);
	A.step = 0;
	a2.push(A);
	check(a2);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << a[i][j]<<" ";
		}
		cout << "\n";
	}
	return 0;
}