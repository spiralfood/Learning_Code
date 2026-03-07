//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[100000];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a,a+n);
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i]<<" ";
//	}
//	cout << "\n";
//	return 0;
//}
#include<iostream>
using namespace std;
int a[100000];
void qsort(int a[], int low, int high)
{
	int i = low;
	int j = high;
	int tmp = a[(low+high)/2];
	do
	{
		while (a[i] < tmp)i++;
		while (a[j] > tmp)j--;
		if (i <= j)swap(a[i], a[j]);
	} while (i<=j);
	if (low < j)qsort(a, low, j);
	if (high > i)qsort(a, i, high);
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	qsort(a, a[0], a[n - 1]);

	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<" ";
	}
	
	return 0;
}
//#include<iostream>
//using namespace std;
//int main()
//{
//	return 0;
//}