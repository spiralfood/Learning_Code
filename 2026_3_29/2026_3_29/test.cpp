//#include<iostream>
//using namespace std;
//#include<vector>
//int main() {
//	int n;
//	cin >> n;
//	vector<vector<int>>a(n + 5, vector<int>(n + 5, 0));
//	vector<vector<int>>sum(n+5,vector<int>(n+5,0));
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> a[i][j];
//			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + a[i][j];
//		}
//	}
//	int my_max = -1e9;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//
//			for (int k = i; k <= n; k++) {
//				for (int l = j; l <= n; l++) {
//					int cu = sum[k][l] + sum[i-1][j-1]-sum[i-1][l]-sum[k][j-1];
//					my_max = max(cu, my_max);
//				}
//			}
//		}
//	}
//
//	cout << my_max;
//
//
//
//
//	return 0;
//}
//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main() {
//	int n, p;
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	cin >> n >> p;
//	vector<int>a(n + 2);
//	vector<int>d(n+2);
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		d[i] = a[i] - a[i - 1];
//	}
//	while (p--) {
//		int t, b,score;
//		cin >> t >> b>>score;
//		d[t] += score;
//		d[b + 1] -= score;
//	}
//	for (int i = 1; i <= n; i++) {
//		a[i] = a[i - 1] + d[i];
//		
//	}
//	sort(a.begin(), a.end());
//	cout << a[2];
//
//
//
//	return 0;
//}


#include<iostream>
using namespace std;
#include<vector>
int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>>a(n+1,vector<int>(n+1,0));
	while (m--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		a[x1][y1]++;
		a[x1][y2 + 1]--;
		a[x2 + 1][y1]--;
		a[x2][y2]++;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			a[i][j]=
		}
	}






	return 0;
}