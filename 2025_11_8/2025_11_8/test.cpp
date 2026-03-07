#include<iostream>
#include<vector>
#include<set>
#include<cstring>
using namespace std;
vector<set<int>>v;
int score = 0;
int ast[5010];
void dfs(int a, int b) {
	for (set<int>::iterator it=v[a].begin(); it !=v[a].end(); it++) {
		if (*it == b) {
			score = 1;
			break;
		}
		else if (score == 1) break;
		else if(*it != a&&ast[*it]==0) {
			ast[*it] = 1;
			dfs(*it, b);
		}
	}
	
}
int main() {
	int m, n, p;
	cin >> m >> n >> p;

	v.resize(m + 1);
	int m1 = n;
	while (m1--) {
		int mi, mj;
		cin >> mi >> mj;
		v[mi].insert(mj);
		v[mj].insert(mi);
	}
	int p1 = p;
	while (p1--) {
		memset(ast, 0, sizeof(ast));
		score = 0;
		int pi, pj;
		cin >> pi >> pj;
		dfs(pi, pj);
		if (score == 1) cout << "Yes" << endl;
		else if (pi == pj) cout << "Yes" << endl;
		else cout << "No"<<endl;
	}
	return 0;
}