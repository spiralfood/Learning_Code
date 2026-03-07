//#include<iostream>
//#include<cmath>
//using namespace std;
//struct node {
//	int lchild;
//	int rchild;
//
//};
//node tree[1000010];
//int dfs(int x)
//{
//	if (tree[x].lchild == 0 && tree[x].rchild == 0)
//		return 1;
//	return max(dfs(tree[x].lchild), dfs(tree[x].rchild)) + 1;
//}
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> tree[i].lchild >> tree[i].rchild;
//	}
//	cout<<dfs(1);
//	return 0;
//}

//
//#include<iostream>
//#include<cstring>
//using namespace std;
//string s1, s2;
//void mid(int l1, int r1, int l2, int r2) {
//	for (int i = l1; i <= r1; i++)
//	{
//		if (s1[i] == s2[l2])
//		{
//			mid(l1, i - 1, l2 + 1, l2+i-l1);
//			mid(i+1, r1, l2 + 1+i-l1,r2 );
//			cout << s1[i];
//		}
//	}
//}
//int main()
//{
//	cin >> s1 >> s2;
//	mid(0, s1.size() - 1, 0, s2.size());
//	return 0;
//}

#include<iostream>
#define MAXN 100010
using namespace std;
int n, root, cnt, opt, x;
struct Node{
	int left, right, size, value, num;
	Node(int l,int r,int s,int v):left(1),right(r),size(s),value(v),num(1){}
	Node(){}
}t[MAXN];
int main()
{
	cin >> n;
	int num = 0;
	t[root=++cnt]=
	return 0;
}