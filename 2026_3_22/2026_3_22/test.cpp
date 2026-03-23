//#include<iostream>
//#include<vector>
//#include<map>
//using namespace std;
//#define ll long long int
//ll N, C;
//vector<ll>a;
//map<ll, ll>b;
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0), cout.tie(0);
//	cin >> N >> C;
//	a.resize(N);
//	
//	for (int i = 0; i < N; i++) {
//		cin >> a[i];
//		b[a[i]]++;
//	}
//	ll ans = 0;
//	for (int i = 0; i < N; i++) {
//		int _sum = a[i] + C;
//		if (b.count(_sum))ans += b[_sum];
//	}
//	cout << ans << endl;
//	return 0;
//}

//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//#define ll long long int
//ll N, C;
//vector<ll>a;
//map<ll, ll>b;
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0), cout.tie(0);
//	cin >> N >> C;
//	a.resize(N);
//
//	for (int i = 0; i < N; i++) {
//		cin >> a[i];
//		//b[a[i]]++;
//	}
//	ll ans = 0;
//	sort(a.begin(), a.end());
//	for (int i = 0,l=0,r=0; i < N; i++) {
//		while (l<N && a[i] - C>a[l])l++;
//		while (r<N && a[i] - C>=a[r])r++;
//		if (a[i] - C == a[l]) {
//			ans = ans + r - l;
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}
//
//#include<iostream>
//#define ll long long int
//
//using namespace std;
//#include<vector>
//#include<algorithm>
//vector<ll>a,b;
//ll n, m;
//struct tet {
//	int _l;
//	int _r;
//	int _len;
//};
//bool cmp(tet t1,tet t2) {
//	if (t1._len != t2._len)return t1._len < t2._len;
//	return t1._l < t2._l;
//}
//vector<tet> t;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	a.resize(n+5);
//	b.resize(m + 5);
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	int l = 1, r = 1;
//	int cnt = 0;
//	while(1){
//		while (cnt < m&&r<=n) {
//			if ((b[a[r++]]++) == 0)cnt++;
//			if (cnt == m) {
//				r--;
//				//b[a[r]]--;
//			}
//		}
//		
//		while (cnt == m && l <= n) {
//			if (--b[a[l++]] == 0)cnt--;
//			if (cnt < m) {
//				
//				--l;
//			}
//		}
//		t.push_back({ l,r,r - l });
//		if (r> n || l > n)break;
//		l++;
//		r++;
//	}
//	sort(t.begin(), t.end(), cmp);
//	cout << t[0]._l << " " << t[0]._r;
//	return 0;
//}
//
//#include<iostream>
//#include<vector>
//using namespace std;
//#define ll long long int
//vector<ll>a;
//int main() {
//	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//	ll n;
//	cin >> n;
//	a.resize(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	ll l = 0, r = 0;
//	ll _max = -1e9;
//	while(r < n) {
//		while()
//	}
//	return 0;
//}

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
vector<int>a;
int s[605];
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int n; int w;
	cin >> n >> w;
	
	int p = 0;
	//a.resize(n);
	for (int i = 0; i < n; i++) {
		int score;
		cin >> score;
		s[score]++;

		p = max(1, (i+1)* w / 100);
		int sum = 0;
		for (int j = 600; j >= 0; j--) {
			sum += s[j];
			if (sum >= p) {
				cout << j << " ";
				break;
			}
		}
		
	}




	return 0;
}