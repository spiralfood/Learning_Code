//#include<iostream>
//using namespace std;
////int a[105];
//int main() {
//	int N; cin >> N;
//	int cnt=0;
//	while (N--) {
//		int a; cin >> a;
//		if (a != 1)cnt++;
//	}
//	cout << cnt;
//	return 0;
//}
//
//#include<iostream>
//#include<cstdio>
//#define ll long long int
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//
//	int T; cin >> T;
//	while (T--) {
//		ll A, B, C,cnt;
//		cin >> A >> B >> C >> cnt;
//		while (cnt--) {
//			ll new_A, new_B, new_C;
//			new_A = (B + C) / 2;
//			new_B = (C + A) / 2;
//			new_C = (B + A) / 2;
//			A = new_A;
//			B = new_B;
//			C = new_C;
//			if (A == B&&B == C) {
//				break;
//			}
//		}
//		cout << A << " " << B << " " << C << "\n";
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main() {
//	float a, b; cin >> a >> b;
//	int c = (a + b) / 2;
//	cout << c;
//}
//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#define ll long long int
//using namespace std;
//int N, M;
//
//ll min_val = -1;
//vector<ll>a;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	
//	cin >> N >> M;
//	a.resize(N);
//	for (int i = 0; i < N; i++) {
//		cin >> a[i];
//	}
//	sort(a.begin(), a.end());
//	for (int j = 0; j + M <= N; j++) {
//		ll val = 0;
//		val = val + a[M - 1 + j] * a[M - 1 + j] - a[j] * a[j];
//		if (min_val == -1) min_val = val;
//		min_val = min(min_val, val);
//	}
//	
//	cout << min_val;
//	return 0;
//}
//

//#include<iostream>
//#include<vector>
//using namespace std;
//#define ll long long int
//ll cnt = 0;
////ll my_cnt = 0;
//ll min_added=-1;
//vector<string>water;
//vector<int>n;
//int q[2][1000005];
//int def(int poi,int cet,ll my_con,ll added) {
//	//ll my_con = 0;
//	//ll added = 0;
//	if (cet != 0 && cet != 1) return 0;
//	if (poi >= water[cet].size() || poi < 0) return 0;
//	if (q[cet][poi]) return 0;
//	q[cet][poi] = 1;
//	if (water[cet][poi] == '#') {
//		my_con++;
//	}
//	else if (water[cet][poi] == '.') {
//		added++;
//	}
//	if (my_con == cnt) {
//		if (min_added == -1) min_added = added;
//		else if(added<min_added) min_added = added;
//		q[cet][poi] = 0;
//		cout << added << "\n";
//		return 0;
//	}
//	def(poi - 1, cet , my_con, added);
//	def(poi + 1, cet , my_con, added);
//	def(poi , cet - 1, my_con, added);
//	def(poi , cet + 1, my_con, added);
//	q[cet][poi] = 0;
//	return 0;
//}
//int main() {
//	water.resize(2);
//	string a, b;
//
//	int cet = -1;
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	int poi = -1;
//	cin >> a >> b;
//	water[0]=a;
//	water[1]=b;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < water[i].size(); j++) {
//			if (water[i][j] == '#') {
//				cnt++;
//			}
//		}
//	}
//	cout << cnt << "\n";
//	for (int i = 0; i < a.size(); i++) {
//		if (a[i] == '#') {
//			poi = i;
//			cet = 0;
//			break;
//		}
//	}
//	if (poi == -1) {
//		for (int i = 0; i < b.size(); i++) {
//			if (b[i] == '#') {
//				poi = i;
//				cet = 1;
//				break;
//			}
//		}
//	}
//	if (poi == -1) cout << 0;
//	else {
//		def(poi, cet,0,0);
//		cout << min_added;
//	}
//	
//	return 0;
//}

#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
#define ll long long int
ll dp[3];
ll pre_dp[3];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	string a, b;
	cin >> a >> b;
	ll n = a.size();
	int L = n, R = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] == '#' || b[i] == '#') {			
			L = min(i, L);
			R = max(i, R);
		}
	}
	if (R == -1) {
		cout << 0;
		return 0;
	}
	pre_dp[0] = 1e9;
	pre_dp[1] = 1e9;
	pre_dp[2] = 1e9;
	int nc = a[L] == '#' ? 0 : 1;
	int nt = b[L] == '#' ? 0 : 1;
	if (a[L] != '#') pre_dp[1] = nt;
	if (b[L] != '#') pre_dp[0] = nc;
	pre_dp[2] = nt+nc;
	for (int i = L + 1; i<= R; i++) {
		dp[0] = 1e9;
		dp[1] = 1e9;
		dp[2] = 1e9;
		int nc0 = a[i] == '#' ? 0 : 1;
		int nc1 = b[i] == '#' ? 0:1;
		if (b[i] != '#') {
			dp[0] = min(pre_dp[0] , pre_dp[2]) + nc0;
		}
		if (a[i] != '#') {
			dp[1] = min(pre_dp[1], pre_dp[2]) + nc1;
		}
		dp[2] = min({ pre_dp[0], pre_dp[1], pre_dp[2] }) + nc0 + nc1;
		pre_dp[0] = dp[0];
		pre_dp[1] = dp[1];
		pre_dp[2] = dp[2];
	}
	cout << min({ pre_dp[0], pre_dp[1], pre_dp[2] });
}



