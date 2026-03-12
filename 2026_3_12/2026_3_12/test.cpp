//#include<iostream>
//#include<cstring>
//using namespace std;
//#define ll long long int
//#define mod 1000000007
//ll a[1010];
//ll aw[10010];
//ll n;
////ll dfs(ll adx,ll w) {
////	if (w < 0||adx>=n) return 0;
////	if (w == 0)return 1;
////
////	if (aw[adx][w] != -1)return aw[adx][w];
////	else {
////		ll total = 0;
////		ll res1 = dfs(adx + 1, w);
////		ll res2 = dfs(adx, w - a[adx]);
////		total = (res1 + res2) % mod;
////		aw[adx][w] = total;
////	}
////	return aw[adx][w];
////}
//int main() {
//	ll  w;
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	cin >> n >> w;
//	//memset(aw, -1, sizeof(aw));
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	aw[0] = 1;
//	for (int i = 0; i < n; i++) {
//		for (int j = a[i]; j <= w; j++) {
//			aw[j] = (aw[j] + aw[j - a[i]]) % mod;
//		}
//	}
//	cout << aw[w];
//
//
//
//
//
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//#define ll long long int
//int main() {
//	ll wer = 0;
//	for (ll i = 1; i < 1e8; i++) {
//		ll my_i = i;
//		int cnt = 0;
//		while (my_i != 0) {
//			my_i=my_i/10;
//			cnt++;
//		}
//		if (cnt % 2 != 0)continue;
//		else {
//			my_i = i;
//			cnt /= 2;
//			int ans1 = 0, ans2 = 0;
//			for (int i = 0; i < cnt; i++) {
//				ll zi = my_i % 10;
//				my_i = my_i / 10;
//				ans1 += zi;
//			}
//			for (int i = 0; i < cnt; i++) {
//				ll zi = my_i % 10;
//				my_i = my_i / 10;
//				ans2 += zi;
//			}
//			if (ans1 == ans2) {
//				wer++;
//			}
//		}
//	}
//	cout << wer;
//	return 0;
//}
 
 


//#include<iostream>
//using namespace std;
//int main() {
//	cout << 4430091;
//	return 0;
//}


#include<iostream>
using namespace std;
#define ll long long int
ll sco = 0;
ll cnt = 0;
void dfs(ll w) {
	if (w == 0 && sco == 70) {
		cnt++;
		return;
	}
	else if (w == 0) return;
	if (sco == 100)return;
	if (sco == 70) {
		cnt++;
	}
	//»Ø´ðÕýÈ·
	sco += 10;
	dfs(w - 1);
	sco = 0;
	dfs(w - 1);


	
}
int main() {
	ll qus = 30;
	dfs(30);
	cout << cnt;
	return 0;

}



















