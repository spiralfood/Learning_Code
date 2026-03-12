//#include<iostream>
//using namespace std;
//int a[26];
//int cnt1 = 13;
//int cnt2 = 12;
//int ans = 0;
//void Initial() {
//	for (int i = 0; i < 26; i++) {
//		a[i] = -1;
//	}
//}
//void pd() {
//	if ((a[0] + a[1] + a[2] + a[3] + a[4]) % 5 == 0) return;
//	if ((a[6] + a[7] + a[8] + a[9] + a[5]) % 5 == 0) return;
//	if ((a[10] + a[11] + a[12] + a[13] + a[14]) % 5 == 0) return;
//	if ((a[15] + a[16] + a[17] + a[18] + a[19]) % 5 == 0) return;
//	if ((a[20] + a[21] + a[22] + a[23] + a[24]) % 5 == 0) return;
//	if ((a[0] + a[5] + a[10] + a[15] + a[20]) % 5 == 0) return;
//	if ((a[1] + a[6] + a[11] + a[16] + a[21]) % 5 == 0) return;
//	if ((a[2] + a[7] + a[12] + a[17] + a[22]) % 5 == 0) return;
//	if ((a[3] + a[8] + a[13] + a[18] + a[23]) % 5 == 0) return;
//	if ((a[4] + a[9] + a[14] + a[19] + a[24]) % 5 == 0) return;
//	if ((a[0] + a[6] + a[12] + a[18] + a[24]) % 5 == 0) return;
//	if ((a[4] + a[8] + a[12] + a[16] + a[20]) % 5 == 0) return;
//	ans++;
//}
//
//void dfs(int k) {
//	if (k == 25)pd();
//	if (cnt1 > 0) {
//		a[k] = 0;
//		cnt1--;
//		dfs(k + 1);
//
//		cnt1++;
//	}
//	if (cnt2 > 0) {
//		a[k] = 1;
//		cnt2--;
//		dfs(k + 1);
//		cnt2++;
//	}
//		
//	
//
//}
//int main() {
//	Initial();
//	//Print();
//	dfs(0);
//	cout << ans;
//	return 0;
//}
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define ll long long int
//ll c1[100000];
//ll c2[100000];
//ll c3[100000];
//ll min_sum = 0;
//int main() {
//	ll n, S;
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	cin >> n >> S;
//	int n1 = n;
//	for (int i = 0; i < n; i++) {
//		cin >> c1[i] >> c2[i];
//
//	}
//	while (1) {
//		ll sum = 0;
//		for (int i = 0; i < n; i++) {
//			if (c2[i]>0) {
//				sum += c1[i];
//			}
//			c2[i]--;
//		}
//		if (sum > S) {
//			for (int i = 0; i < n; i++) {
//				c3[i] = c2[i];
//			}
//			sort(c3, c3 + n);
//			ll poi;
//			for (int i = 0; i < n; i++) {
//				if (c3[i] > 0) {
//					poi = i;
//					break;
//				}
//			}
//			min_sum += S*(c3[poi]+1);
//			for (int i = 0; i < n; i++) {
//				c2[i]-=c3[poi];
//			}
//		}
//		else {
//			sum = 0;
//			for (int i = 0; i < n; i++) {
//				c2[i]++;
//				if (c2[i] > 0) {
//					sum += c1[i] * c2[i];
//				}
//			}
//			min_sum += sum;
//			break;
//		}
//	}
//	cout << min_sum;
//	return 0;
////}
//#include<algorithm>
//#include<iostream>
//#define ll long long int
//class solid {
//public:
//	ll a=0;
//	ll b=0;
//};
//solid grp[100005];
//using namespace std;
//bool cmp(solid s1,solid s2) {
//	return s1.b < s2.b;
//}
//int main() {
//	ll n, S;
//	cin >> n >> S;
//	for (int i = 0; i < n; i++) {
//		cin >> grp[i].a >> grp[i].b;
//	}
//	sort(grp, grp + n, cmp);
//	ll min_sum=0;
//	ll sum = 0;
//	ll bot = 0;
//	ll cnt = 0;
//	for (int i = 0; i < n; i++) {
//		sum += grp[i].a;
//	}
//	while (1) {
//		if (sum > S) {
//			min_sum += S * (grp[cnt].b- (cnt > 0 ? grp[cnt - 1].b : 0));
//			sum -= grp[cnt].a;
//			//bot = grp[cnt].b;
//			cnt++;
//		}
//		else {
//				for (int i = cnt; i < n; i++) {
//					min_sum += (grp[i].b-(cnt>0?grp[cnt-1].b:0)) * grp[i].a;
//				}
//			
//			
//			break;
//		}
//	}
//
//
//	cout << min_sum;
//	return 0;
//}

#include<iostream>
using namespace std;
#define ll long long int

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	ll n, m;

	return 0;
}