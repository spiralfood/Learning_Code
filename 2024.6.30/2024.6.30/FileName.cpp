#define _CRT_SECURE_NO_WARNINGS 0
//#include<iostream>
//#include<cstdio>
//using namespace std;
//long long a1[50000] = { 0 };
//long long b1[50000] = { 0 };
//long long l, r, c;
//long long score = 0;
//long long i;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a1[i];
//	}
//	for (int i = 0; i < n; i++)
//		cin >> b1[i];
//	cin >> l >> r >> c;
//	for ( i = l; i <= r; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (b1[j] <= i)
//			{
//				if ((i - b1[j]) % a1[j] == 0)
//				{
//					score++;
//					if (score == c)
//						break;
//				}
//			}
//		}
//		if (score == c)
//			break;
//	}
//	if (score < c)
//	{
//		cout << "-1";
//	}
//	if (score == c)
//	{
//		cout << i;
//	}
//	return 0;
//}



//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//char a[200000005] = {'0'};
//long long i;
//long long pos= 100000002;
//long long score=0;
//long max1=pos;
//long min1 = pos;
//int main()
//{
//	memset(a, '0', sizeof(a));
//	int n;
//	long long x;
//	char c;
//	cin >> n;
//	while (n--)
//	{
//		cin >> x >> c;
//		if (c == 'r')
//		{
//			if (pos + x > max1)
//				max1 = pos+x;
//			for (i = pos; i < pos + x; i++)
//			{
//				a[i]++;
//				if (a[i]-'0' > 4)
//					a[i] -= 4;
//			}
//			i--;
//			pos = i;
//		}
//		else {
//			if (pos - x < min1)
//				min1 = pos-x;
//			for (i = pos; i > pos - x; i--)
//			{
//				a[i]++;
//				if (a[i]-'0' > 4)
//					a[i] -= 4;
//			}
//			i++;
//			pos = i;
//		}
//	}
//	for (int i = min1; i <= max1; i++) {
//
//		if (a[i]-'0' == 1)
//			score++;
//	}
//	cout << score;
//	return 0;
//}
//
//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//short int a[200000005] = { 0 };
//long long i;
//long long pos = 100000002;
//long long score = 0;
//long max1 = pos;
//long min1 = pos;
//int main()
//{
////	memset(a, '0', sizeof(a));
//	int n;
//	long long x;
//	char c;
//	cin >> n;
//	while (n--)
//	{
//		cin >> x >> c;
//		if (c == 'r')
//		{
//			if (pos + x > max1)
//				max1 = pos + x;
//			for (i = pos; i < pos + x; i++)
//			{
//				a[i]++;
//				if (a[i] > 4)
//					a[i] -= 4;
//			}
//			i--;
//			pos = i;
//		}
//		else {
//			if (pos - x < min1)
//				min1 = pos - x;
//			for (i = pos; i > pos - x; i--)
//			{
//				a[i]++;
//				if (a[i] > 4)
//					a[i] -= 4;
//			}
//			i++;
//			pos = i;
//		}
//	}
//	for (int i = min1; i <= max1; i++) {
//
//		if (a[i] == 1)
//			score++;
//	}
//	cout << score;
//	return 0;
//}
//#include<iostream>

//
//using namespace std;
//char a[200000005] = {'\0'};
//long long i;
//long long pos = 100000002;
//long long score = 0;
//long max1 = pos;
//long min1 = pos;
//int main()
//{
////	memset(a, '0', sizeof(a));
//	int n;
//	long long x;
//	char c;
//	cin >> n;
//	while (n--)
//	{
//		cin >> x >> c;
//		if (c == 'R')
//		{
//			if (pos + x > max1)
//				max1 = pos + x;
//			for (i = pos; i < pos + x; i++)
//			{
//				a[i]++;
//				if (a[i]-'\0' > 4)
//					a[i] -= 4;
//			}
//			i--;
//			pos = i;
//		}
//		else {
//			if (pos - x < min1)
//				min1 = pos - x;
//			for (i = pos; i > pos - x; i--)
//			{
//				a[i]++;
//				if (a[i]-'\0' > 4)
//					a[i] -= 4;
//			}
//			i++;
//			pos = i;
//		}
//	}
//	for (int i = min1; i <= max1; i++) {
//
//		if (a[i]-'\0' == 1)
//			score++;
//	}
//	cout << score;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//long long a1[50000] = { 0 };
//long long b1[50000] = { 0 };
//long long l, r, c;
//long long score = 0;
//long long i;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a1[i];
//	}
//	for (int i = 0; i < n; i++)
//		cin >> b1[i];
//	cin >> l >> r >> c;
//	for (i = l; i <= r; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (b1[j] <= i)
//			{
//				if ((i - b1[j]) % a1[j] == 0)
//				{
//					score++;
//					if (score == c)
//						break;
//				}
//			}
//		}
//		if (score == c)
//			break;
//	}
//	if (score < c)
//	{
//		cout << "-1";
//	}
//	if (score == c)
//	{
//		cout << i;
//	}
//	return 0;
//}天上有 
//�
//n 颗星星，每颗星星自第
//�
//�
//b
//i
//​
//秒开始（包含第
//�
//�
//b
//i
//​
//秒），每
//�
//�
//a
//i
//​
//秒便会闪烁一次，小度 今晚有一点失眠，所以他想来数星星，天上的星星每闪烁一次，小度便会在心中记一次数，如果同时有
//�
//x 颗星星在闪烁，小度也会计数
//�
//x 次。
//
//假设小度今晚会从第
//�
//l 秒开始数，第
//�
//r 秒天便亮了，但是在计数到
//�
//c 次及以上的时候，小度便会睡着。
//
//请问你能帮小度预估，今晚是否能睡着吗？如果能，将会在多少秒时睡着。
//
//格式
//输入格式：
//第 1 行读入 1 个整数
//�
//n，代表天上的星星个数；
//第 2 行读入
//�
//n 个整数
//�
//�
//a
//i
//​
//， 代表第
//�
//i 个星星的闪烁周期；
//第 3 行读入
//�
//n 个整数
//�
//�
//b
//i
//​
//， 代表第
//�
//i 个星星的开始闪烁时间；
//第 4 行读入 3 个整数
//�
//,
//�
//,
//�
//l, r, c，代表开始计数时间，结束时间，计数睡着的次数。
//数据保证
//1
//≤
//�
//≤
//1
//0
//5
//1≤n≤10
//5
//，
//1
//≤
//�
//�
//,
//�
//�
//,
//�
//,
//�
//,
//�
//≤
//1
//0
//18
//1≤a
//i
//​
//, b
//i
//​
//, l, r, c≤10
//18
//，
//�
//≤
//�
//l≤r。
//
//
//输出格式：
//如果小度能够睡着，那么输出小度睡着的时候，否则输出 - 1。
//
//
//样例 1
//输入：
//2
//1 2
//1 1
//1 10 4
//复制
//输出：
//3
//复制
//样例 2
//输入：
//1
//1
//1
//30 40 12
//复制
//输出：
//- 1
//复制
//样例 3
//输入：
//3
//1 3 5
//3 5 9
//1 30 20
//复制
//输出：
//16
//复制
//样例 4
//输入：
//1
//2
//3
//1 1000000000000000000 499999999999999999
//复制
//输出：
//999999999999999999
//复制
//备注
//样例1解释：
//第 1 秒，星星 1 与 星星 2 闪烁一次；
//第 2 秒，星星 1 闪烁一次；
//第 3 秒，星星 1 与 星星 2 闪烁一次；
//在第 3 秒时，所有星星共 5 次，大于等于 4 次，所以小度会在第 3 秒睡着。
//所以答案为 3。
//样例2解释：
//第 30 秒至第 40 秒期间，星星共闪烁 11 次，没有满足小度会睡着的条件，输出 - 1。
//
//1 / 8
//
// 小度一直对外太空充满向往，这次他购买了多台激光发射器，希望通过向天空发射信号来与太空取得联系。
//每台激光发射器都配备了一个控制器，初始状态下，所有激光发射器都朝向北方。
//控制器每拨动一次，激光发射器便会顺时针旋转90度。
//因此，随着控制器的多次拨动，激光的朝向将按照“北 - 东 - 南 - 西 - 北”的顺序循环变化。
//这些控制器整齐地排列在一条直线上，可以被视为一条坐标轴，每个整数单位上对应一个控制器。
//
//小度从原点出发，计划进行N次连续的操作。每次操作从当前坐标上的控制器开始，连续拨动一个区间内的所有控制器，并停留在最后一个控制器的位置，拨动包含当前控制器以及最后停留位置对应的控制器。
//每次操作用一个整数和一个字符
//�
//
//�
//x c 表示，其中
//�
//x 代表从当前控制器开始连续拨动多少个控制器，
//�
//c 表示拨动方向。
//�
//c 为字符
//�
//R 时，表示沿坐标向右操作；
//�
//c 为字符
//�
//L 时，表示沿坐标向左操作。
//例如，
//3
//
//�
//3 L 表示从当前控制器起向左拨动3个控制器。
//1
//
//�
//1 R 表示从当前控制器起向右拨动1个控制器，即停留在当前位置。
//通过这种方式，小度可以控制激光发射器的朝向，并向太空发射出特定的信号。
//
//现在给你小度的操作序列，希望你能告诉他最终朝向东方的激光器有多少台。
//
//格式
//输入格式：
//第 1 行读入 1 个整数
//�
//N，代表操作次数。
//(
//	1
//	≤
//	�
//	≤
//	1
//	∗
//	1
//	0
//	5
//)
//(1≤N≤1∗10
//	5
//	)；
//	第
//	2
//	2 到
//	�
//	+
//	1
//	N + 1 行，每行一个整数一个字符
//	�
//
//	�
//	x c，表示每次拨动的数量和方向。数据保障小度不会偏离原点
//	1
//	∗
//	1
//	0
//	9
//	1∗10
//	9
//	个单位。
//
//
//	输出格式：
//	一个整数，表示最终朝向东方的激光器有多少台。
//
//
//	样例 1
//	输入：
//	4
//	5 R
//	5 R
//	1 L
//	5 R
//	复制
//	输出：
//	11
//	复制
//	样例 2
//	输入：
//	5
//	5 R
//	10 L
//	6 R
//	3 L
//	4 R
//	复制
//	输出：
//	1
//	复制
//	备注
//	样例1解释：
//	5 R 拨动【0，1，2，3，4】，当前位置为4；
//	5 R 拨动【4，5，6，7，8】，当前位置为8；
//	1 L 拨动【8】，当前位置为8；
//	5 R 拨动【8，9，10，11，12】当前位置为12；
//	朝向东方的有拨动一次的【0，1，2，3，5，6，7，9，10，11，12】所以答案为11。
//

// 
//
//
//
//
//
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[1005];
//int max1[100000] = {0};
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		if (i > 0)
//		{
//			if (a[i - 1] == a[i]) {
//				max1[a[i]]++;
//			}
//		}
//	}
//	sort(max1, max1 + n);
//	cout << max1[n - 1]+1;
//	return 0;
//}
//
//#include<iostream>
//#include<queue>
//using namespace std;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	queue<int>a;
//	for (int i = 1; i <= n; i++)
//	{
//		a.push(i);
//	}
//	int m1=0;
//	int m2;
//	while (!a.empty())
//	{
//		m1++;
//		if (m1 == m)
//		{
//			m2 = a.front();
//	//		cout << m2;
//			a.pop();
//			m1 = 0;
//		}
//		else
//		{
//			 m2 = a.front();
//			a.pop();
//			a.push(m2);
//		}
//	}
//	cout << m2;
//	return 0;
//}
//#include<iostream>
//#include<stack>
//#include<cstdio>
//using namespace std;
//int main()
//{
//	stack<int>s1;
//	int n, m;
//	cin >> n >> m;
//		while (n != 0)
//		{
//			s1.push(n % m);
//			n /= m;
//		}	
//	
//	while (!s1.empty())
//	{
//		int i = s1.top();
//		if(i<10)
//		cout << i;
//		else
//		{
//		 char c='A' + i - 10;
//		 cout << c;
//		}
//		s1.pop();
//	}
//	return 0;
//}
//#include<iostream>
//#include<queue>
//using namespace std;
//int main()
//{
//	queue<int>q1, q2, q3;
//	int n;
//	cin >> n;
//	int n1 = n;
//	int n2 = n;
//	while (n1--)
//	{
//		int m;
//		cin >> m;
//		q1.push(m);
//	}
//	while (n2--)
//	{
//		int m;
//		cin >> m;
//		q2.push(m);
//	}
//	while (!q1.empty() && !q2.empty())
//	{
//		int m1 = q1.front();
//		int m2 = q2.front();
//		if (m1 < m2)
//		{
//			q1.pop();
//			q3.push(m1);
//		}
//		else
//		{
//			q2.pop();
//			q3.push(m2);
//		}
//	}
//	if (!q1.empty())
//	{
//		while (!q1.empty())
//		{
//			q3.push(q1.front());
//			q1.pop();
//		}
//	}
//	if (!q2.empty())
//	{
//		while (!q2.empty())
//		{
//			q3.push(q2.front());
//			q2.pop();
//		}
//	}
//	while (!q3.empty())
//	{
//		cout << q3.front()<<" ";
//		q3.pop();
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
void cal(int n) {
	int ans = n;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			ans = ans * (i - 1) / i;
			while (n % i == 0) {
				n /= i;
			}
		}
		
	}
	if (n > 1)
		ans = ans * (n - 1) / n;
	cout << ans<<"\n";
}
int main() {
	int n;
	while (cin >> n) {
		cal(n);
	}
	return 0;
}