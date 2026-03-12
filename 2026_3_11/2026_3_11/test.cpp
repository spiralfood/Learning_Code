//#include<iostream>
//using namespace std;
//#define ll long long int
//#define INF 1e7
//ll a[1010];
//ll t[10010];
//ll n, w;
//
//ll dfs(ll w) {
//	if (w < 0) return INF;
//	if (w == 0)return 0;
//	ll my_min = INF;
//	if (t[w])return t[w];
//	else {
//		for (int i = 0; i < n; i++) {
//			my_min = min(my_min, dfs(w-a[i])+1);
//		}
//		t[w] = my_min;
//	}
//	return t[w];
//}
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> n >> w;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	dfs(w);
//	cout << t[w];
//	
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#define ll long long int
//vector<vector<ll>>a;
//ll r1;
//#define INF 0
//ll co[1010][1010];
//ll dfs(ll l,ll r) {
//	if (l<1 || r>l||l>r1)return INF;
//	if (co[l][r]!=-1) return co[l][r];
//	else {
//		co[l][r] = max({ co[l][r], dfs(l + 1, r) + a[l][r], dfs(l + 1, r + 1) + a[l][r] });
//		
//	}
//	return co[l][r];
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0), cout.tie(0);
//	for (int i = 0; i < 1010; i++) {
//		for (int j = 0; j < 1010; j++) {
//			co[i][j] = -1;
//		}
//	}
//	cin >> r1;
//	a.resize(r1+1);
//	for (int i = 1; i <= r1; i++) {
//		a[i].resize(i+1);
//		for (int j = 1; j <= i; j++) {
//			cin >> a[i][j];
//		}
//	}
//	cout << dfs(1, 1);
//	
//	return 0;
//}

	#include<iostream>
	#define mod 1000000007
	using namespace std;
	#define ll long long int
	ll n;
	#define INF 1e10;
	ll ep[10010];
	ll a[1010];
	ll dfs(ll w) {
		if (w < 0) return 0;
		if (w == 0) return ep[w]=1;
		if (ep[w] != -1)return ep[w];
		else {
			ep[w] = 0;
			for (int i = 0; i < n; i++) {
				ep[w] = (ep[w]+dfs(w - a[i]))%mod;
			}
		}
		return ep[w];
	}
	int main() {
		ll  w;
		for (int i = 0; i < 10010; i++) {
			ep[i] = -1;
		}
		ios::sync_with_stdio(0);
		cin.tie(0), cout.tie(0);
		cin >> n >> w;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout<<dfs(w);

		return 0;
	}