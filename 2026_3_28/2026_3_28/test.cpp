//#include<iostream>
//using namespace std;
//#define ll long long int
//#include<queue>
//class ANS {
//public:
//	ll _age;
//	ll _val;
//};
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	ll n, k;
//	cin >> n >> k;
//	queue<ANS>a;
//	for (int i = 0; i < n; i++) {
//		ll g;
//		cin >> g;
//		if (a.empty())a.push({ 1,g });
//		else if (a.front()._val <= g) {
//			a.pop();
//			a.push({ 1,g });
//		}
//		else {
//			a.push({ 1,g });
//			a.front()._age++;
//		}
//		
//		cout << a.front()._val << "\n";
//
//		if (a.front()._age == k) {
//			a.pop();
//		}
//
//	}
//
//
//
//
//
//
//
//
//
//	return 0;
//}

//
//#include<iostream>
//#include<vector>
//using namespace std;
//#define ll long long int
//#include<deque>
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	ll n, k;
//	cin >> n >> k;
//	vector<int>a; a.resize(n);
//	for (int i = 0; i < n; i++) cin >> a[i];
//	deque<int>q;
//	for (int i = 0; i < n; i++) {
//		if (!q.empty() && q.front() < i - k + 1) {
//			q.pop_front();
//		}
//		while (!q.empty() && a[q.back()] <= a[i]) {
//			q.pop_back();
//		}
//		q.push_back(i);
//		if (i >= k - 1) {
//			cout << a[q.front()] << "\n";
//		}
//	}
//
//
//
//	return 0;
//}

#include<iostream>
using namespace std;
#include<vector>
#define ll long long int
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	ll n;
	cin >> n;
	vector<ll>sum;
	sum.resize(n); 
	cin >> sum[0];
	for (int i = 1; i < n; i++) {
		cin >> sum[i];
		sum[i] += sum[i - 1];
	}
	ll m; cin >> m;
	while (m--) {
		ll s, e;
		cin >> s >> e;
		s--, e--;
		if (s == 0) {
			cout << sum[e] << "\n";
		}
		else {
			cout << sum[e] - sum[s - 1]<<"\n";
		}
	}
	return 0;
}




