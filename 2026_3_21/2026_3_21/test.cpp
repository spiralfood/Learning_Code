//#include<iostream>
//#include<vector>
//#include<queue>
//#include<cstring>
//using namespace std;
//vector<int>a[100010];
//int n, d;
//int dist[100010];
//int ans = 0;
////void dfs(int node,int fa,int h) {
////	if (h > d) return;
////	else if (node != 1)ans++;
////		for (int i = 0; i < a[node].size(); i++) {
////			if(fa!= a[node][i])
////			dfs(a[node][i],node, h + 1);
////		}
////	
////}
//class F {
//public:
//	int id;
//	int fa;
//	int cnt;
//};
//int main() {
//	memset(dist, -1, sizeof(dist));
//	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//	cin >> n >> d;
//	for (int i = 1; i < n; i++) {
//		int f, g; cin >> f >> g;
//		a[f].push_back(g);
//		a[g].push_back(f);
//	}
//	
//	queue<F>qu;
//	qu.push({ 1,0,1 });
//	while (qu.size()) {
//		
//		F f = qu.front();
//
//		if (f.cnt > d)break;
//		qu.pop();
//		for (int j = 0; j < a[f.id].size(); j++) {
//			
//			if (a[f.id][j] != f.fa)
//			{
//				ans++;
//				qu.push({ a[f.id][j],f.id,f.cnt + 1 });
//			}
//		}
//
//	}
//
//	//dfs(1,0, 0);
//	cout << ans << endl;
//	/*for (int i = 1; cnt <= d; cnt++) {
//
//		for (int j = 0; j < a[i].size(); i++) {
//			ans++;
//		}
//	}*/
//	return 0;
//}

#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
ll a[200000];
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int N, C;
	cin >> N >> C;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a, a + N);
	ll ans = 0;
	for (ll i = 0; i<N; i++) {
		ll t = a[i] + C;
		ans = ans + upper_bound(a, a + N, t) - lower_bound(a, a + N, t);
	}
	cout << ans;
	return 0;
}