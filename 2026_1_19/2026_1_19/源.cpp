//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	int a = 233, b = 666;
//	double c = sqrt(a * a + b * b);
//	double d = 666 / c;
//	c = c + c * asin(d);
//	cout << 1576;
//	return 0;
//}

#include<iostream>
using namespace std;
#define ll long long int
ll mod = 1e9 + 7;

ll speed(ll a, ll b) {
	ll ans = 1;
	while (b) {
		
		if (b & 1) ans = ans * a%mod;
		a *=  a%mod;
		b >>= 1;
	}
	return ans;
}
//int main() {
//	cout << speed(2, 1012);
//	return 0;
//}

#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;
int qmi(int m, int k, int p) {
	long long t = m, res = 1;
	while (k) {
		if (k & 1) res = res * t % p;
		t = t * t % p;
		k >>= 1;
	}
	return res;
}

signed main() {
	cout << qmi(2, 1012, MOD) << "\n";
	cout << speed(2, 1012) << "\n";

	//cout << power(2, 1012, MOD) << "\n";
	return 0;
}
