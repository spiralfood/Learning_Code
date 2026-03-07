#define _CRT_SECURE_NO_WARNINGS 0
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//class student {
//public:
//	int sumscore;
//	int cscore;
//	int ID;
//	student()
//	{
//		sumscore = 0;
//		cscore = 0;
//		ID = 0;
//	}
//	student(int a, int b, int c,int d)
//	{
//		sumscore = a + b + c;
//		cscore = a;
//		ID = d;
//
//	}
//};
//int cmp(student s1,student s2)
//{
//	if (s1.sumscore != s2.sumscore)return s1.sumscore > s2.sumscore;
//	if (s1.cscore != s2.cscore)return s1.cscore > s2.cscore;
//	return s1.ID < s2.ID;
//}
//int main()
//{
//	int num,a,b,c;
//	student s[300];
//	scanf("%d", &num);
//	for (int i = 1; i <= num; i++)
//	{
//		scanf("%d%d%d", &a, &b, &c);
//		s[i-1] = student(a, b, c, i);
//	}
//	sort(s, s + num, cmp);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d %d\n", s[i].ID, s[i].sumscore);
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
class person {
public:
	int ID;
	string num;
	person()
	{
		ID = 0;
		
	}
	person(int a, string b)
	{
		ID = a;
		num=b;
	}
};
bool cmp(person p1, person p2)
{
	if (p1.num.length() != p2.num.length())
		return p1.num.length() > p2.num.length();
	if (p1.num.length() == p2.num.length())
		return p1.num > p2.num;
}
int main()
{
	person p[20];
	int n;
	scanf("%d", &n);
	string  b;
	b.resize(100);
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		p[i] = person(i+1, b);
	}
	sort(p, p + n, cmp);
	cout << p[0].ID << "\n" << p[0].num;
	return 0;
}

//int main()
//{
//	string s1;
//	cin >> s1;
//	printf("%ls", s1);
//}