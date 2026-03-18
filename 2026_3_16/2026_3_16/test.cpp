//#include<iostream>
//#include<string>
//#include<cstdio>
//using namespace std;
//#define ll long long int
//#define maxn 1010
//ll f[maxn][maxn];
//
//int main() {
//	string S;
//	cin >> S;
//	for (int i = 0; i < maxn; i++) {
//		f[i][i] = 0;
//	}
//	for (int i = 1;i<S.size(); i++) {
//		if (S[i - 1] == S[i]) {
//			f[i - 1][i] = 0;
//		}
//		else {
//			f[i - 1][i] = 1;
//		}
//	}
//	for (int L = 2; L < S.size(); L++) {
//		for (int i = 0; i+L < S.size(); i++) {
//			ll j = i + L;
//			f[i][j] = 1 + min(f[i + 1][j], f[i][j - 1]);
//			if (S[i] == S[j]) {
//				f[i][j] = min(f[i][j], f[i + 1][j - 1]);
//					
//			}
//		}
//	}
//	cout << f[0][S.size() - 1];
//	return 0;
//}

#include<iostream>
#include<algorithm>
using namespace std;
int T, M;
long long int mval[1010];
class Med {
public:
	int time;
	int value;
	double per;
};
bool cmp(Med a,Med b) {
	return a.per > b.per;
}

int main() {
	Med med[110];
	int time, value;
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> T >> M;
	for (int i = 0; i < M; i++) {
		cin >> time>>value;
		for (int j = T; j >=time; j--) {
			mval[j] = max(mval[j], mval[j - time] + value);
		}
	}
	//sort(med, med + M,cmp);
	/*for (int i = T; i <= T; i++) {
		int i_val = i;
		for (int j = 0; j < M; j++) {
			if (i >= med[j].time) {
				i -= med[j].time;
				mval[i_val] += med[j].value;
			}
			
		}
		i = i_val;
	}*/
	cout << mval[T];

	return 0;
}