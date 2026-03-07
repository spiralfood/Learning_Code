#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<algorithm>
//int a[100000] = { 0 };
//using namespace std;
//void qsort( int low, int high)
//{
//	int i, j, tmp;
//	tmp = a[(low + high)/ 2];
//	i = low, j = high;
//	do {
//		while (a[i] < tmp)i++;
//		while (a[j] > tmp)j--;
//		if (i <= j)
//		{
//			swap(a[i], a[j]);
//			i++, j--;
//		}		
//	} while (i<=j);
//	if (low < j)qsort( low, j);
//	if (i < high)qsort(i, high);
//	//else
//	//	return;
//}
//int main()
//{
//	
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> a[i];
// 	}
//	qsort( 0, m-1);
//	for (int i = 0; i < m; i++)
//		cout << a[i] << " ";
//	cout << "\n";
//	return 0;
//}
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
//	sort(a, a + n);
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << "\n";
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//int a[5000000] = { 0 };
//int ans;
//using namespace std;
//void qsort( int low, int high,int k)
//{
//	/*if (high == low)
//	{
//		ans = a[low];
//		return;
//	}*/
//	int i, j, tmp;
//	tmp = a[(low + high)/ 2];
//	i = low, j = high;
//	do {
//		while (a[i] < tmp)i++;
//		while (a[j] > tmp)j--;
//		if(i<=j)
//		{
//			swap(a[i], a[j]);
//			i++;
//			j--;
//		}
//	} while (i <= j);
//	if ( k <= j)qsort(low, j, k);
//	else if ( k >= i)qsort(i, high, k);
//	else qsort(j + 1, i - 1, k);
//	if (k == ((low + high) / 2))
//	{
//		ans = a[k];
//	}
//}
//int main()
//{
//	int m,k;
//	cin >> m>>k;
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &a[i]);
// 	}
//	qsort( 0, m-1,k);
//	
//	cout << ans;
//	return 0;
//}
//#include<cstdio>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[5000005];
//int main()
//{
//	int m, k;
//	scanf("%d%d", &m, &k);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	sort(a, a + m);
//	cout << a[k];
//	return 0;
//}
 
// 
//#include<bits/stdc++.h>
//using namespace std;
//int x[5000005], k;
//int main()
//{
//	int n;
//	scanf("%d%d", &n, &k);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &x[i]);
//	sort(x, x + n);//¿ìÅÅ
//	printf("%d", x[k]);
//}
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int a[100];
	int n,sco=1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i - 1] && i != 0)
			sco++;
	}
	printf("%d\n", sco);
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i - 1] && i != 0)
			printf("%d ", a[i]), sco++;
		if (i == 0)
			printf("%d ", a[i]);
	}
	return 0;
}