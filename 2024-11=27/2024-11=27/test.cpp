#include<iostream>
using namespace std;
struct tree {
	int lef;
	int rig;
};
tree a[100000];
int dep(int x)
{
	if (a[x].lef == 0 && a[x].rig == 0)
		return 0;
	return max(dep(a[x].lef), dep(a[x].rig))+1;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].lef;
		cin >> a[i].rig;
	}
	cout<<dep(1)+1;
}