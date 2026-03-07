//#include<iostream>
//#include<vector>
//using namespace std;
//#include<set>
//set<long long int>an;
//int main() {
//	long long int m;
//	cin >> m;
//	while (m--) {
//		int a = 0;
//		long long int len;
//		cin >> a>>len;
//		if (a == 1) {
//			//cin >> len;
//			long long int size1 = an.size();
//			an.insert(len);
//			if (size1 == an.size()) cout << "Already Exist\n";
//		}
//		else if (a == 2) {
//			if (!an.empty()) {
//				//cin >> len;
//				set<long long int>::iterator it = an.lower_bound(len);
//				if (it!=an.end() && *it == len) { cout << len << endl; an.erase(it); }
//				else if(it != an.end()){
//					long long int de = *it - len;
//					long long int j = len - de;
//					set<long long int>::iterator it1 = an.lower_bound(j);
//					cout << *it1 << endl; an.erase(it1);
//				}
//				else if (it == an.end()) {
//					--it;
//					cout << *it<< endl; an.erase(it);
//				}
//			}
//			else cout << "Empty\n";
//		}
//		
//	}
//	return 0;
//}
//
//#include<iostream>
//#include<set>
//#include<cstring>
//#include<map>
//using namespace std;
//long long int n;
//string name;
//map<string, int>sys;
//int main() {
//	cin >> n;
//	while (n--) {
//		int op = 0; cin >> op;
//		if (op == 1) {
//			cin >> name;
//			long long int score; cin >> score;
//			sys[name] = score;
//			cout << "OK\n";
//		}
//		if (op == 2) { 
//		cin >> name; 		
//		if (sys.find(name)!=sys.end())
//			cout << sys[name]<<"\n";
//		else cout << "Not found\n";
//		}
//		if (op == 3) {
//		cin >> name; 
//		if (sys.find(name) != sys.end())
//		{
//			sys.erase(sys.find(name));
//			cout << "Deleted successfully\n";
//		}
//		else cout << "Not found\n";
//		}
//		if (op == 4) { cout << sys.size() << "\n"; }
//	}
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//long long int a[5000000];
//int main() {
//	int N, C;
//	cin >> N >> C;
//	for(int i=0;i<N;i++){cin>>}
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int main() {
//	long long a, b;
//	cin >> a >> b;
//	long long a1 = a;
//	for (int i = 1; i < b; i++) {
//		if (a <= 1e9 && a > 0)
//			a = a * a1;
//		else
//		{
//			cout << "-1";
//			return 1;
//		}
//	}
//	if (a <= 1e9 && a >= 0)
//		cout << a;
//	else
//		cout << "-1";
//	return 0;
//}


//#include<iostream>
//#include<map>
//using namespace std;
//int main() {
//	long long int N, C;
//	map<long long int,long long int>a;
//	cin >> N >> C;
//	while (N--) {
//		long long int con;
//		cin >> con;
//		a[con]++;
//	}
//	map<long long int, long long int>::iterator it = a.begin();
//	long long int count = 0;
//	long long int a_size = a.size();
//	for (long long int i=0; it != a.end()&&i<a_size; it++,i++) {
//		count += a[it->first + C]*a[it->first];
//		if (a[it->first] == 0) {
//			a.erase(it);
//		}
//		if (a[it->first + C] == 0) {
//			map<long long int, long long int>::iterator its=a.find(it->first + C);
//			a.erase(its);
//		}
//	}
//	cout << count;
//	return 0;
//}

#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>my_graph;
vector<int>my_index;
void solve1(int a) {
	cout << a<<" ";
	for (int j = 0; j < my_graph[a].size(); j++) {
		if (my_index[my_graph[a][j]] == 0) {
			my_index[my_graph[a][j]] = 1;
				solve1(my_graph[a][j]);
		}
		
	}
}
void solve2(int a) {
	cout << a << " ";
	for (int j = 0; j < my_graph[a].size(); j++) {
		if (my_index[my_graph[a][j]] == 0) {
			my_index[my_graph[a][j]] = 1;
			solve1(my_graph[a][j]);
		}
		cout << my_graph[a][j]<<" ";
	}
}
int main() {
	int n, m; cin >> n >> m;
	my_graph.resize(n+5);
	my_index.resize(n+5);
	while (m--) {
		int a, b;
		cin >> a >> b;
		my_graph[a].push_back(b);
	}
	solve1(1);
	solve2(1);
	return 0;
}