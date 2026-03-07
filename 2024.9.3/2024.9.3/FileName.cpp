#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//int a[100000]; int n, m;
//int score = 0;
////11 3
////1 3 3 3 5 7 9 11 13 15 15
////1 3 6
//void check(int q, int start, int end) {
//	
//	int mark = (start + end) / 2;
//	while (start <= end) {
//		if (a[mark] > q&&a[start]!=q)check(q, start, mark - 1);
//		if (a[mark] < q&&a[end]!=q)check(q, mark, end - 1);
//		if (a[mark] == q)
//		{
//			while (mark > 0 && a[mark] == q) {
//				mark--;
//			}
//			if (a[mark] != q)cout << mark + 2 << " ";
//			else cout << mark + 1<<" ";
//			score = 1;
//			return;
//		}
//		else if (a[end]==q) {
//			mark = end;
//			while (mark > 0 && a[mark] == q) {
//				mark--;
//			}
//			if (a[mark] != q)cout << mark + 2 << " ";
//			else cout << mark + 1 << " ";
//			score = 1;
//			return;
//		}
//		else if (a[start]==q) {
//			cout << start + 1<<" ";
//			return;
//		}
//		break;
//	}
//	if (score == 0)
//	{
//		cout << "-1" << " ";
//		score = 1;
//	}
//		
//}
//	
//int main()
//{
//	memset(a, 0, sizeof(a));
//	scanf("%d%d", &n,&m);
//	for (int i = 0; i < n; i++) {
//		scanf("%d",&a[i]);
//	}
//	while (m--) {
//		int q;
//		scanf("%d", &q);
//		score = 0;
//		 check(q,0,n-1);
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std; 
//int main() {
//	int n;
//	cin >> n;
//	cout << n;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//int a[1000000]; int n, m;
//int score = 0;
////11 3
////1 3 3 3 5 7 9 11 13 15 15
////1 3 6
//int check(int q, int start, int end) {//二分查找
//	while (start <= end) {
//		int mid = (start + end) / 2;
//		if (q == a[mid]&&mid>0) {
//			while (a[mid] == q)//找到最前面的那个
//				mid--;
//			return mid + 2;
//		}
//		if (q == a[mid] && mid == 0) {
//			return 1;
//		}
//		if (q < a[mid])end=mid-1;
//		if (q > a[mid])start=mid+1;
//	}
//	return -1;
//}
//
//int main()
//{
////	memset(a, 0, sizeof(a));
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	while (m--) {
//		int q;
//		scanf("%d", &q);
//		score = 0;
//		cout<<check(q, 0, n - 1)<<" ";
//	}
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[1000000] = {0};
int n, m;
int check(int x) {
	int poi = lower_bound(a, a + n, x) - a+1;
	if (a[poi-1] != x) {
		return -1;
	}
	return poi;
}
int main() {
	
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	while (m--) {
		int x;
		scanf("%d", &x);
		cout<<check(x)<<" ";
	}
	return 0;
}