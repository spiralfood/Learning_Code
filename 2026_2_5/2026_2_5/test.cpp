#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

int main() {
	ll n;
	cin >> n;
	ll ans = n;
	while (n--) {
		int c; cin >> c;
		if (c == 1) ans--;
	}
	cout<< ans;
	return 0;
}