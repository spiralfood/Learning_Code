//#include<iostream>
//#define maxn 10010
//using namespace std;
//int ans, a[maxn], f[maxn], n;
//int main() {
//	while (cin >> a[++n]) {
//
//	}
//	n--;
//	for (int i = 1; i <= n; i++) {
//		f[i] = 1;
//		for (int j = 1; j < i; j++) {
//			if (a[j] >= a[i]) {
//				f[i] = max(f[i], f[j] + 1);
//			}
//
//		}
//		ans = max(ans, f[i]);
//	}
//	cout << ans << endl;
//	for (int i = 1; i <= n; i++) {
//		f[i] = 0;
//	}
//	ans = 0;
//	for (int i = 1; i <= n; i++) {
//		f[i] = 1;
//		for (int j = 1; j < i; j++) {
//			if (a[j] < a[i]) {
//				f[i] = max(f[i], f[j] + 1);
//
//			}
//		}
//		ans = max(ans, f[i]);
//	}
//
//	cout << ans << endl;
//
//
//
//	return 0;
//}



#include<iostream>
using namespace std;
#define ll long long int
ll f[25][25];
ll dp[25];
int main() {
	int N;
	int sda;
	cin >> N;
	ll a[25];
	for (int i = 1; i <= N; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < N; i++) {
		for (int j = i+1; j <= N; j++) {
			cin >> sda;
			f[i][j] = sda;
		}
	}
	for (int i = 1; i <= N; i++) {
		for(int j=1;j<=N;j++)
		dp[i]= a[i];
	}
	ll my_max = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (f[i][j]) {
				dp[j] = max(dp[j], dp[i] + a[j]);
				my_max = max(my_max, dp[j]);
			}
		}
	}
	cout << my_max<<endl;
	ll pos = 0;
	/*for (ll i=1;i<=N;i++) {
		if (dp[i] == my_max) {
			pos = i;
		}
	}
	*/








	return 0;


}