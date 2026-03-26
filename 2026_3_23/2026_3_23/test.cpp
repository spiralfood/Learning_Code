//#include<iostream>
//#include<vector>
//using namespace std;
//#define ll long long int
//ll n, m;
//#define mod 10007
//vector<int>num;
//vector<int>color;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	cin >> n >> m;
//	num.resize(n + 5);
//	color.resize(n + 5);
//	for (int i = 1; i <= n; i++) {
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++) {
//		cin >> color[i];
//	}
//
//	vector<vector<ll>>g_c(m + 5, vector<ll>(2, 0));
//	vector<vector<ll>>g_n(m + 5,vector<ll>(2,0) );
//
//	for (int i = 1; i <= n; i++) {
//		g_c[color[i]][i % 2]++;
//		g_n[color[i]][i % 2] = (g_n[color[i]][i % 2] + num[i]) % mod;
//	}
//	ll ans = 0;
//	for (int i = 1; i <= n; i++) {
//		ll cnt = (((g_c[color[i]][i % 2] - 2) % mod) + mod) % mod;
//		ll sco = g_n[color[i]][i % 2];
//		ans = (ans + i * (cnt * num[i] + sco)) % mod;
//	}
//	cout << ans;
//
//
//	return 0;
//}

//
//#include<iostream>
//#include<vector>
//using namespace std;
//int N, M;
//vector<vector<int>>a;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(0), cout.tie(0);
//	cin >> N >> M;
//	a.resize(N+5);
//	for (int i = 1; i <= N; i++) {
//		
//		a[i].resize(M+5);
//		for (int j = 1; j < M; j++) {
//			char g;
//			cin >> g;
//			if (g == 'R')a[i][j] = 1;
//			else if(g=='F')a[i][j]=2;
//		}
//	}
//
//}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 优化输入输出流，防超时
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    // 初始化三个状态数组
    vector<int> up(m + 1, 0);
    vector<int> l(m + 1, 1);
    vector<int> r(m + 1, m);

    long long max_area = 0;

    for (int i = 1; i <= n; i++) {
        int left_bound = 1;
        int right_bound = m;
        vector<char> row(m + 1);

        // 从左往右遍历，更新 up 和 l
        for (int j = 1; j <= m; j++) {
            cin >> row[j]; // 忽略空格自动读取字符
            if (row[j] == 'F') {
                up[j]++;
                l[j] = max(l[j], left_bound);
            }
            else {
                up[j] = 0;
                l[j] = 1; // 悬线断裂，重置为最宽松的左边界
                left_bound = j + 1; // 更新当前行左侧的障碍物位置
            }
        }

        // 从右往左遍历，更新 r 并计算最大面积
        for (int j = m; j >= 1; j--) {
            if (row[j] == 'F') {
                r[j] = min(r[j], right_bound);
                // 此时 up, l, r 都已更新完毕，计算面积
                long long area = (long long)up[j] * (r[j] - l[j] + 1);
                max_area = max(max_area, area);
            }
            else {
                r[j] = m; // 悬线断裂，重置为最宽松的右边界
                right_bound = j - 1; // 更新当前行右侧的障碍物位置
            }
        }
    }

    // 题目要求输出 S * 3 的银子数量
    cout << max_area * 3 << "\n";

    return 0;
}