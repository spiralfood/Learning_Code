//#include<iostream>
//using namespace std;
//int qpow(int a, int b) {
//	long long int ans=1;
//	while (b) {
//		if (b & 1) {
//			ans *= a;
//		}
//		a *= a;
//		b >>= 1;
//	}
//	return ans;
//}
//int main() {
//	int pretotal;
//	cin >> pretotal;
//	int total = pretotal - 2;
//	cout << qpow(2, 5);
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//int sum;
//int scale;
//int x;
//long long bucket[500007];
//long long jc[500007] = { 1 };
//long long invjc[500007] = {};
//long long ans = 0;
//const long long mod = 1000000007ll;
//
//long long qpow(long long a, long long b)
//{
//	long long res = 1;
//	while (b)
//	{
//		if (b & 1)
//			res = res * a % mod;
//		a = a * a % mod;
//		b >>= 1;
//	}
//	return res;
//}
//
//long long inv(long long x)
//{
//	return qpow(x, mod - 2);
//}
//
//int main()
//{
//	cin >> sum;
//	scale = sum - 2;
//	for (long long i = 1; i <= 500000; i++)
//	{
//		jc[i] = jc[i - 1] * i % mod;
//	}
//
//	for (int i = 0; i <= 500000; i++)
//	{
//		invjc[i] = inv(jc[i]);
//		cout << jc[i] << " " << invjc[i] << "\n";
//		if (i == 100) return 1;
//	}
//	for (int i = 1; i <= sum; i++)
//	{
//		cin >> x;
//		bucket[x]++;
//	}
//	for (int i = 1; i <= scale; i++)
//	{
//		if (scale % i == 0 && bucket[i] && bucket[scale / i])
//		{
//			int n = i, m = scale / i;
//			bucket[n]--;
//			bucket[m]--;
//			long long now = jc[scale];
//			for (int j = 1; j <= 500000; j++)
//				if (bucket[j])
//					now = now * invjc[bucket[j]] % mod;
//			ans = (ans + now) % mod;
//			bucket[n]++;
//			bucket[m]++;
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//#define ll long long int
//ll tong[500007] = { 0 };
//ll mod = 1000000007;
//ll nm2;
//ll scale;
//ll jc[500007] = { 1 };
//ll invjc[500007] = { 1 };
//ll ans=0;
//ll qpow(ll a, ll b) {
//	ll ans=1;
//	while (b) {
//		if (b & 1) ans= a*ans%mod;
//		a= a*a%mod;
//		b >>= 1;
//	}
//	return ans;
//}
//long long inv(ll x) {
//	return qpow(x, mod - 2);
//}
//int main() {
//	cin >> nm2;
//	for (int i = 1; i <= 500000; i++) {
//		jc[i] = jc[i - 1] * i % mod;
//	}
//	for (int i = 1; i <= 500000; i++) {
//		invjc[i] = inv((jc[i]));
//	}
//	for (int i = 0; i < nm2; i++) {
//		int x; cin >> x;
//		tong[x]++;
//	}
//	scale = nm2 - 2;
//	for (int i = 1; i <=nm2; i++) {
//		if (tong[i] && scale % i == 0 && tong[scale / i]) {
//			tong[i]--; tong[scale / i]--;
//			ll now = jc[scale];
//			for (int j = 1; j <= 500000; j++) {
//				if(tong[j])
//				now = now * invjc[tong[j]]%mod;
//			}
//			ans = (ans + now) % mod;
//
//
//
//			tong[i]++; tong[scale / i]++;
//
//		}
//	}
//	cout << ans << "\n";
//	return 0;
//}
//
//#include<iostream>
//
//using namespace std;
//
//const int nn = 100005;
//char s[nn];
//
//int main() {
//    cin.tie(0);
//    ios::sync_with_stdio(0);
//    cin >> s;
//    int brk = 0, l = 0;
//    int64_t ans = 0;
//    for (int r = 0; s[r]; r++) {
//        if (r && s[r - 1] + 1 != s[r] && s[r - 1] != s[r])
//            brk++;
//        while (brk > 1) {
//            l++;
//            if ((s[l] != s[l - 1] && s[l - 1] + 1 != s[l]))
//                brk--;
//        }
//        ans += r - l + 1;
//    }
//    cout << ans << '\n';
//    return 0;
//}
//
//

#include<iostream>
#include<cstring>
using namespace std;
int main() {
	string s;
	cin >> s;
	long long int ans=0,l=0,r,bre = 0;
	for (r=0 ; r < s.size(); r++) {
		if (r != 0 && s[r] != s[r - 1] && s[r] != s[r - 1] + 1) {
			bre++;
		}
		while (bre > 1) {
			l++;
			if (s[l] != s[l - 1] && s[l] != s[l - 1] + 1) {
				bre--;
			}
		}
		ans += r - l + 1;
		
	}
	cout << ans;
	return 0;
}