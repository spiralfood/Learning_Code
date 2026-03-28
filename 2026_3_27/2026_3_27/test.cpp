#include<iostream>
using namespace std;
#define ll long long int
ll n, k;
#include<queue>
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	cin >> n >> k;
	priority_queue<ll>a;
	queue<ll>f;
	for (int i = 0; i < n; i++) {
		ll t;
		cin >> t;
		a.push(t);
		f.push(t);
		if (f.size() == k) {
			cout << a.top()<<"\n";
			ll t1 = f.front();
			f.pop();
			if (t1 == a.top()) {
				a.pop();
			}
		}
	}







	return 0;
}