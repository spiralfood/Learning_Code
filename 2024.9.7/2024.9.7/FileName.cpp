#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//int a[200000];
//int main() {
//	int n, m;
//	long long score = 0;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	sort(a, a + n);
//	for (int i = 0; i < n; i++) {
//		int poi1=lower_bound(a, a + n, a[i] + m) - a;
//		int poi2 = upper_bound(a, a + n, a[i] + m) - a;
//			if (a[poi1] == a[i] + m) {
//				score += poi2 - poi1;
//			}
//			if (poi1 == n - 1 && a[poi1] !=a[i]+m) {
//				break;
//		}
//	}
//	cout << score;
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	cout<<lower_bound(a, a + 10, 9) - a;
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[1000000] = {0};
//int main() {
//	int n, m,x;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
////		a[i] = x - m;
//	}
//	sort(a, a + n);
//
//	return 0;
//}
//
//#include<iostream>
//#include<cstdio>
//using namespace std;
//#define maxn 1000010
//typedef long long LL;
//LL a[maxn], n, m;
//bool p(int h) {
//	LL tot = 0;
//	for (int i = 1; i <= n; i++) {
//		if (a[i] > h) {
//			tot += a[i] - h;
//		}
//	}
//	return tot >= m;
//}
//int main() {
//	scanf("%lld%lld", &n, &m);
//	for (int i = 1; i <= n; i++)
//		scanf("%lld", &a[i]);
//	int L = 0, R = 1e9, ans, mid;
//	while (L <= R)
//		if (p(mid = L + R >> 1))
//		{
//			ans = mid, L = mid + 1;
//		}
//		else R = mid - 1;
//	printf("%d", ans);
//	return 0;
//}

#include<iostream>
using namespace std;
int main() {

	return 0;
}