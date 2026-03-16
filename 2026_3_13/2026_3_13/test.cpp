//#include<iostream>
//using namespace std;
//#define ll long long int
//int main() {
//	ll L, R;
//	cin >> L >> R;
//	ll cnt=0;
//	for (ll x = L; x <= R; x++) {
//		if (x % 4 != 2) {
//			cnt++;
//		}
//	}
//	cout << cnt;
//	return 0;
//}


#include<iostream>
using namespace std;
#define ll long long int
#include<cstring>
#include<algorithm>
int main() {
	string a;
	cin >> a;
	string a_new = a;
	ll cnt = 0;
	//cout << a_new;
	for (int i = 0; i < a_new.size(); i++) {
		for (int j = i+1; j < a_new.size(); j++) {
			int i_true = i, j_true = j;
			while ( i < j) {
				if (a_new[i] > a_new[j]) { cnt++; break; }
				else if (a_new[i] < a_new[j])break;
				else if (a_new[i] == a_new[j]) {
					i++, j--;
				}
				
			}
			i = i_true, j = j_true;
		}
	}
	cout << cnt;
	return 0;
}