//#include<iostream>
//#include<set>
//#include<vector>
//#include<string>
//using namespace std;
//
//int a[1010];
//int find(int x) {
//	if (x == a[x])return x;
//	else return find(a[x]);
//}
//void join(int a1, int b) {
//	int fa = find(a1);
//	int fb = find(b);
//	if(fa!=fb) a[fa] = fb;
//}
//int main() {
//	while (1) {
//		int n, m;
//		cin >> n;
//		for(int i=0;i<=n;i++) a[i]=i;
//		if (n == 0) break;
//		cin >> m;
//
//		int m1 = m;
//		while (m1--) {
//			int mi, mj;
//			cin >> mi >> mj;
//			join(mi, mj);
//		}
//		int count = 0;
//		for (int i = 1; i <=n; i++)
//		{
//				if (find(1) != find(i)) {
//					count++;
//					join(i, 1);
//				
//			}
//		}
//		cout << count<< endl;
//	}
//	return 0;
//}
//
//#include<iostream>
//#include<string>
//#include<set>
//using namespace std;
//int main() {
//	int n;
//
//	cin >> n;
//	set<string> s;
//	while (n--) {
//		string a;
//		cin >> a;
//		s.insert(a);
//	}
//	cout << s.size();
//	return 0;
//}

//
//#include<iostream>
//#include<string>
//#include<set>
//#include<vector>
//using namespace std;
//#define mod 23333
//#define Base 130
//vector<int>linker[mod+2];
//int cnt = 0;
//void insert(string a,string b) {
//	int name = 1,state=1,fs=1;
//	for (int i = 0; i < a.size(); i++) {
//		name=(name*Base*10+a[i])%mod;
//	}
//	fs = a[1] * 10 + a[0];
//	state = b[1] * 10 + b[0];
//	for (int i = 0; i < linker[state].size(); i++) {
//		if(linker[state][i]==name*1000+fs) {
//			return;
//		}
//	}
//	linker[state].push_back(name*1000+fs);
//	for (int i = 0; i < linker[fs].size(); i++) {
//		for (int j = 0; j < linker[state].size(); j++) {
//		if (state == linker[fs][i] % 1000 && fs == linker[state][j]%100) { cnt++; }
//		}
//	}
//	
//}
//int main() {
//	int n;
//
//	cin >> n;
//	
//	while (n--) {
//		string a,b;
//		cin >> a>>b;
//		insert(a,b);
//	}
//	cout << cnt;
//	return 0;
//}

//
//#include<iostream>
//#include<string>
//#include<set>
//#include<vector>
//using namespace std;
//#define mod 233333
//char a[12], b[12];
//vector<pair<int, int>>linker[mod + 2];
//long long ans;
//int n;
//inline int gethash(char a[], char b[]) {
//	return (a[0] - 'A') + (a[1] - 'A') * 26 + (b[0] - 'A') * 26 * 26 + (b[1] - 'A') * 26 * 26 * 26;
//}
//inline void insert(int x) {
//	for (int i = 0; i < linker[x % mod].size(); i++) {
//		if (linker[x % mod][i].first == x) {
//			linker[x % mod][i].second++;
//			break;
//		}
//	}
//	linker[x % mod].push_back(pair<int, int>(x, 1));
//
//}
//inline int find(int x) {
//	for (int i = 0; i < linker[x % mod].size(); i++) {
//		if (linker[x % mod][i].first == x) return linker[x % mod][i].second;
//
//	}
//	return 0;
//}
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> a >> b;
//		a[2] = 0;
//		if (a[0] != b[0] || a[1] != b[1]) ans += find(gethash(b ,a));
//		insert(gethash(a, b));
//	}
//	cout << ans;   
//	
//	return 0;
//}