#include<iostream>
#include<cstring>
using namespace std;
string pre,post;
int ans;
int main()
{
	cin >> pre >> post;
	for (int i = 0; i < pre.size(); i++)
	{
		for (int j = 1; j < post.size(); j++)
		{
			if (pre[i] == post[j] && pre[i + 1] == post[j - 1])
				ans++;
		}
	}
	cout << (1 << ans) << endl;
	return 0;
}