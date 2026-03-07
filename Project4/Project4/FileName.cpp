//#include<iostream>
//using namespace std;
//int score = 0;
//int a[1000] = {0};
//int cal(int n) {
//	int ans=1;
//	if (a[n]) {
//		return a[n];
//	}
//	if (n == 1) {
//		score++;
//		return 1;
//	}
//	for (int i = 1; i <= n / 2; i++) {
//		
//		ans+=cal(i);
//		a[n]++;
//	}
//	return a[n] = ans;
//}
//int main() {
//	int n;
//	cin >> n;
//	a[1] = 1;
//	cal(n);
//	cout<<a[n];
//	return 0;
//}
#include<iostream>
#include<cstring>
using namespace std;
int n, f[1010];
int sol(int x) {
	int ans = 1;
	if (f[x] != -1)return f[x];
	for (int i = 1; i <= x / 2; i++)
		ans += sol(i);
	return f[x] = ans;
}
int main() {
	cin >> n;
	memset(f, -1, sizeof(f));
	f[1] = 1;
	cout << sol(n) << endl;
	return 0;
}
//#include<iostream>
//using namespace std;
//int sol(int n) {
//	int ans = 1;
//	if (n == 1)return 1;
//	for (int i = 1; i <= n / 2; i++)
//		ans += sol(i);
//	return ans;
//}
//int main() {
//	int n;
//	cin >> n;
//	cout<<sol(n);
//	return 0;
//}