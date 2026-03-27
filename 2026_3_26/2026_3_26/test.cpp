//#include<iostream>
//#include<vector>
//using namespace std;
//#define ll long long int
//vector<int>up;
//vector<int>l;
//vector<int>r;
//vector<char>a;
//ll max_area;
//int N, M;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	cin >> N >> M;
//	up.resize(M+5), l.resize(M+5), r.assign(M+5,M-1);
//	a.resize(M+5);
//	for (int i = 0; i < N; i++) {
//		int l_d = 0;
//		int r_d = M - 1;
//		for (int j = 0; j < M; j++) {
//			cin >> a[j];
//
//			if (a[j] == 'F')
//			{
//				up[j]++;
//				l[j] = max(l[j], l_d);
//			}
//			else {
//				up[j] = 0;
//				l[j] = 0;
//				l_d = j + 1;
//			}
//		}
//		for (int j = M - 1; j >= 0; j--) {
//			if (a[j] == 'F') {
//				r[j] = min(r[j], r_d);
//				ll area = up[j] * (r[j] - l[j] + 1);
//				max_area = max(max_area, area);
//			}
//			else {
//				r[j] = M - 1;
//				r_d = j - 1;
//			}
//		}
//
//
//	}
//	cout << max_area*3;
//	return 0;
//}
//
//#include<iostream>
//#include<vector>
//using namespace std;
//#define ll long long int
//ll N;
//vector<int>a;
//vector<int>f;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	cin >> N;
//	a.resize(N + 5);
//	f.assign(N + 5,0);
//	cin >> a[0];
//	ll sum = 0;
//	for (int i = 1; i < N; i++) {
//		cin >> a[i];
//	}
//	for (int i = N - 2; i >=0; i--) {
//		if (a[i] > a[i + 1]) {
//			f[i] = f[i + 1] + 1;
//		}
//		else {
//			f[i] = 0;
//		}
//		sum += f[i];
//	}
//	cout << sum;
//
//	return 0;
//}

#include<iostream>
#define ll long long int
#include<stack>
using namespace std;
stack<int>f;
int main() {
	int N;
	cin >> N;
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	ll ans = 0;
	for (int i = 0; i < N; i++) {
		int c; cin >> c;
		if (f.empty())f.push(c);
		else if (f.top() > c) {
			ans += f.size();
			f.push(c);
		}
		else {
			while (!f.empty() && f.top() <= c) {
				f.pop();
			}
			ans += f.size();
			f.push(c);
		}
	}

	cout << ans;




	return 0;
}