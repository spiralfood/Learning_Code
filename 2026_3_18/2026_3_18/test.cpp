//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//int dp[25];
//int a[25];
//int f[25][25];
//vector<int>bud;
//class cnt {
//public:
//	int my_max = 0;
//	int my_i;
//};
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> a[i];
//		dp[i] = a[i];
//	}
//	for (int i = 1; i < N; i++) {
//		for (int j = i + 1; j <= N; j++) {
//			cin >> f[i][j];
//		}
//	}
//	cnt c;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (f[i][j])dp[j] = max(dp[j], dp[i] + a[j]);
//			if (c.my_max < dp[j]) {
//				c.my_max = dp[j];
//				c.my_i = j;
//			}
//
//		}
//	}
//	bud.push_back(c.my_i);
//	int cnt2 = 0;
//	for (int j = c.my_i;cnt2<400; ) {
//		for (int i = 1; i < N; i++) {
//			if (dp[i] + a[j] == dp[j]&&f[i][j]) {
//				j = i;
//				bud.push_back(i);
//				break;
//			}
//			cnt2++;
//		}
//	}
//	reverse(bud.begin(), bud.end());
//	for (auto& x : bud) {
//		cout << x << " ";
//	}
//	cout << endl<<c.my_max << endl;
//
//	return 0;
//}

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int a[110][110];
int dp[110][110];
int dfs(int i, int j) {
	if (dp[i][j]) return dp[i][j];
	if (a[i][j] == -1)return 0;
	else {
		int cnt = 0;
		if (a[i][j] > a[i - 1][j]) {
			dp[i][j] = max(dp[i][j], 1 + dfs(i-1,j));
			cnt = 1;
		}
		if (a[i][j] > a[i + 1][j]) {
			dp[i][j] = max(dp[i][j], 1 + dfs(i +1, j));
			cnt = 1;
		}
		if (a[i][j] > a[i][j-1]) {
			dp[i][j] = max(dp[i][j], 1 + dfs(i,j-1));
			cnt = 1;
		}
		if (a[i][j] > a[i][j+1]) {
			dp[i][j] = max(dp[i][j], 1 + dfs(i,j+1));
			cnt = 1;
		}
		if (cnt == 0)dp[i][j] = 1;
	}
	return dp[i][j];
}


int main() {
	memset(a, -1, sizeof(a));
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	int R, C;
	cin >> R >> C;
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			cin >> a[i][j];
		}
	}
	int my_max=1;
	for (int i = 1; i <= R; i++) {
		for (int j = 1; j <= C; j++) {
			my_max=max(dfs(i, j),my_max);
		}
	}
	cout << my_max;





	return 0;

}