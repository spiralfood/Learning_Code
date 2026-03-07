//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	string a[52];
//	for (int i = 0; i < n; i++)
//	{
//		string b;
//		cin >> b;
//		a[i] = b;
//	}
//	int core = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			if (a[i] == a[j]&&a[i]!="  ")
//			{
//				a[j] = "  ";
//				core++;
//			}
//		}
//	}
//	cout << 52 - n + core;
//	return 0;
//}
#include<iostream>
#include<set>
using namespace std;
int main()
{
	set<string>a;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string b;
		cin >> b;
		a.insert(b);
	}
	cout << 52 - a.size();
	return 0;
}