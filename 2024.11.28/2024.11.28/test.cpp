//#include<iostream>
//using namespace std;
//char pre[26];
//char mid[26];
//struct node {
//	char name;
//	int lchild;
//	int rchild;
//};
//node tree[26];
//void build()
//{
//	tree[0].name = pre[0];
//	tree[0].lchild
//}
//
//int main()
//{
//	cin >> mid;
//	cin >> pre;
//	build();
//	return 0;
//}

#include<iostream>
#include<cstring>
using namespace std;
int a[26];
int b[26];
void build(int l1, int r1, int l2, int r2)
{
	for (int i = l2; i <= r2; i++)
	{
		if (b[i] == a[l1]) {
			build(l1 + 1, l1 + i - l2, l2, i - 1);
			build(l1 + i - l2 + 1, r1, i + 1, r2);
			cout << (char)a[l1];
			return;
		}
	}
}
int main()
{
	int score = 0;
	string s1; cin >> s1;
	for (int i = 0; i < s1.size(); i++)
	{
		
		b[i] = (char)s1[i];
	}
	for (int i = 0; i < s1.size(); i++)
	{
		char c; cin >> c;
		a[i] = c;
	}
	build(0,s1.size()- 1, 0, s1.size()-1);
	cout << "\n";
	return 0;
}