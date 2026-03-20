//#include<iostream>
//#include<vector>
//using namespace std;
//#define ll long long int 
//ll n, m;
//ll in_de[5010], out_de[5010];
//
//ll dp[5010];
//vector<vector<int>>a;
//#define mod 80112002
//ll dfs(int i) {
//	if (dp[i])return dp[i];
//	if (out_de[i] == 0)return 1;
//	else {
//		for (int j = 0; j < a[i].size(); j++) {
//			dp[i] = (dfs(a[i][j])+dp[i])%mod;
//		}
//		
//	}
//	return dp[i];
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	a.resize(n + 5);
//	for (int i = 0; i < m; i++) {
//		int g, h;
//		cin >> g >> h;
//		a[g].push_back(h);
//		in_de[h]++;
//		out_de[g]++;
//
//	}
//	int p = 0;
//	int my_sum = 0;
//	for (int i = 0; i <= n; i++) {
//		if (in_de[i] == 0 && out_de[i] > 0) {
//			my_sum=(dfs(i)+my_sum)%mod;
//		}
//	}
//
//	cout << my_sum;
//
//
//
//	return 0;
//}


	#include<iostream>
	using namespace std;
	#define ll long long int
	#include<vector>
	vector<ll>f;
	vector<ll>s;
	vector<ll>dp;
	int n;
	ll my_max = -1000000000;

	ll dfs(int i) {
		if (i < 0 || i >= n)return 0;
		if (dp[i]!= -1000000000)return dp[i];
		else {
			dp[i] = max(f[i], f[i] + dfs(i + 1));
			my_max = max(dp[i], my_max);
		}
		return dp[i];
	}

	int main() {
		ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
		cin >> n;
		f.resize(n + 5);
		//s.resize(n + 5);
		dp.resize(n + 5);
		for (int i = 0; i < n; i++) {
			cin >> f[i];
			dp[i] = f[i];
		
			//s[i] = f[i];
		}

		dfs(0);
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if (i == j)dp[i] = f[i];
				else dp[j] = max(dp[j], f[j] + dp[i]);
			}
			my_max = max(dp[i],my_max);
		}
		cout << my_max;
		return 0;
	}