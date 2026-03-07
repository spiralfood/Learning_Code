#define _CRT_SECURE_NO_WARNINGS 0

//#include<iostream>
//#include<string>
//using namespace std;
//const int MAXV = 105;
//const int INF = 0x3f3f3f3f;
//class matgraph {
//public:
//	int edges[MAXV][MAXV];
//	int n, e;
//	string vexs[MAXV];
//	void create(int a[][MAXV], int n, int e);
//};
//void matgraph::create(int a[][MAXV], int n, int e)
//{
//	this->n = n;
//	this->e = e;
//	for (int i = 1; i <= n; i++)
//		for (int m = 1; m <= n; m++)
//		{
//			this->edges[i][m] = a[i][m];
//			if (i != m && a[i][m] == 0) {
//				this->edges[i][m] = INF;
//			}
//		}
//
//}
//void dijkstra(matgraph& g, int v, int end)
//{
//	int dist[MAXV];
//	int path[MAXV];
//	int s[MAXV];
//	for (int i = 1; i <= g.n; i++)
//	{
//		dist[i] = g.edges[v][i];
//		s[i] = 0;
//		if (g.edges[v][i] != 0 && g.edges[v][i] < INF)
//		{
//			path[i] = v;
//		}
//		else
//			path[i] = -1;
//	}
//	s[v] = 1;
//	int mindis, u = -1;
//	for (int i = 0; i < g.n - 1; i++)
//	{
//		mindis = INF;
//		for (int j = 1; j <= g.n; j++)
//		{
//			if (s[j] == 0 && dist[j] < mindis) {
//				u = j;
//				mindis = dist[j];
//			}
//
//		}
//		s[u] = 1;
//		for (int j = 1; j <= g.n; j++)
//		{
//			if (s[j] == 0)
//			{
//				if (g.edges[u][j] < INF && dist[u] + g.edges[u][j] < dist[j])
//				{
//					dist[j] = dist[u] + g.edges[u][j];
//					path[j] = u;
//				}
//			}
//		}
//	}
//	cout << dist[end];
//}
//int main()
//{
//	int n, m;
//	matgraph t;
//	int a[MAXV][MAXV] = { 0 };
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int a1, a2;
//		cin >> a1 >> a2;
//		cin >> a[a1][a2];
//	}
//	t.create(a, n, m);
//	int end;
//	cin >> end;
//	dijkstra(t, 1, end);
//	return 0;
//}
//
//#include <iostream>
//#include <unordered_map>
//#include <string>
//
//using namespace std;
//
//struct City {
//    string parent;
//    int distance;
//};
//
//int main() {
//    int N;
//    cin >> N;
//    int num_cities = (1 << (N + 1)) - 2;
//    unordered_map<string, City> cities;
//
//    for (int i = 0; i < num_cities; i++) {
//        string from, to;
//        int distance;
//        cin >> from >> to >> distance;
//        cities[to] = { from, distance };
//    }
//
//    string target;
//    cin >> target;
//
//    int total_distance = 0;
//    //反向追踪它的父键值，并累加它们的距离值，直到找不到目标键值为止
//    while (cities.find(target) != cities.end()) {
//        total_distance += cities[target].distance;
//        target = cities[target].parent;
//    }
//
//    cout << total_distance << endl;
//
//    return 0;
//}

//#include<iostream>
//#include<map>
//#include<string>
////#include<utility>
//using namespace std;
//map<string, int>m;
//int main()
//{
//	string s;
//	int id;
//	cin >> s >> id;
//	m[s] = id;
//	map<string, int>::iterator it;
//	for (it = m.begin(); it != m.end(); it++) {
//		cout << it->first << " " << it->second << "\n";
//	}
//}
//#include <iostream>
//#include <unordered_map>
//#include <string>
//
//using namespace std;
//
//struct City {
//    string parent;
//    int distance;
//};
//
//int main() {
//    int N;
//    cin >> N;
//    int num_cities = (1 << (N + 1)) - 2;
//    unordered_map<string, City> cities;
//
//    for (int i = 0; i < num_cities; i++) {
//        string from, to;
//        int distance;
//        cin >> from >> to >> distance;
//        cities[to] = { from, distance };
//    }
//
//    string target;
//    cin >> target;
//
//    int total_distance = 0;
//    //反向追踪它的父键值，并累加它们的距离值，直到找不到目标键值为止
//    while (cities.find(target) != cities.end()) {
//        total_distance += cities[target].distance;
//        target = cities[target].parent;
//    }
//
//    cout << total_distance << endl;
//
//    return 0;
//}
//#include<iostream>
//#include<unordered_map>
//using namespace std;
//class city {
//public:
//	string parent;
//	int len;
//
//};
//int main()
//{
//	int n;
//	cin >> n;
//	int num = (1 << (n+1)) - 2;
//	unordered_map<string, city>m;
//	for (int i = 0; i < num; i++)
//	{
//		string from, to;
//		int len;
//		cin >> from >> to >> len;
//		m[to] = { from,len };
//	}
//	int length=0;
//	string target;
//	cin >> target;
//	while (m.find(target) != m.end()) {
//		length += m[target].len;
//		target = m[target].parent;
//	}
//	cout << length;
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//using namespace std;
//struct project {
//	int day;
//	char up;
//	char self;
//};
//int main()
//{
//	project N[26];
//	int x, n;
//	cin >> x >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int day1;
//		char up1, self1;
//		cin >> up1 >> self1 >> day1;
//		N[i].day = day1;
//		N[i].up = up1;
//		N[i].self = self1;
//	}
//	int t;
//	int weight[26] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//
//		for (int j = 0; j < n; j++)
//		{
//			if (N[i].self == N[j].up)
//			{
//				weight[i] = weight[i] + N[i].day + N[j].day;
//			}
//		}
//	}
//	sort(weight, weight + 26, greater<int>());
//	int m = 999;
//	for (int i = 0; i < n; i++)
//	{
//		if (N[i].up == 'A' && N[i].self == 'Z')
//			m == N[i].day;
//	}
//	if (m > weight[0])
//	{
//		cout << weight[0];
//	}
//	else
//		cout << m;
//
//	return 0;
//}
//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	string s;
//	while (cin >> s)
//	{
//		int m = s.length();
//		int sum = m * (m + 1) / 2 + 1;
//		cout << sum << "\n";
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m[100][100] = { 0 };
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++)
//			cin >> m[i][j];
//	}
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		sum += m[i][i];
//	cout << sum;
//	return 0;

//}
#include<iostream>
#include<string>
using namespace std;
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	for (int i = 0; i < s2.length(); i++)
//	{
//		for (int j = 0; j < s1.length(); j++) {
//			if (s2[i] == s1[j]) {
//				i++;
//			}
//		}
//	}
//	cout << "0";
// 
// 
//	return 0;
//}


//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//char s[101] = { '\0' };
//double ans;
//double calculate() {
//    cin >> s;
//    switch (s[0]) {
//    case'+':ans = calculate() + calculate(); break;
//    case'-':ans = calculate() - calculate(); break;
//    case'*':ans = calculate() * calculate(); break;
//    case'/':ans = calculate() / calculate(); break;
//    default:ans = atof(s);
//    }
//    return ans;
//}
//int main() {
//    printf("%.6lf", calculate());
//    cout << endl;
//    return 0;
//}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//double a;
//char s[100] = {'\0'};
//double cal()
//{
//	cin >> s;
//	switch (s[0])
//	{
//	case'+':a=cal() + cal(); break;
//	case'-':a=cal() - cal(); break;
//	case'*':a=cal() * cal(); break;
//	case'/':a=cal() / cal(); break;
//	default:a= atof(s);
//	}
//	return a;
//}
//int main()
//{
//	cal();
//	printf("%.6lf", a);
//	return 0;
//}
//#include<iostream> 
//#include<string>
//using namespace std;
//int main()
//{
//	int count = 0;
//	string s1, s2;
//	cin >> s1 >> s2;
//	int j;
//	for (int i = 0; i < s1.size(); i++)
//	{
//		if (s1[i] == s2[0])
//		{
//			for (j = 0; j < s2.size(); j++)
//			{
//				if (s1[i + j] != s2[j])
//				{
//					count = 1;
//					break;
//				}
//			}
//			if (count == 0)
//			{
//				cout << i + 1;
//				return 0;
//			}
//			else if (count == 1)
//			{
//				count = 0;
//				i = i + j;
//			}
//		}
//
//	}
//	cout << "0";
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	int count = 0;
//	int j;
//	for (int i = 0; i < s1.length(); i++)
//	{
//		if (s1[i] == s2[0]) {
//			for (j = 0; j < s2.length(); j++) {
//				if (s1[i + j] != s2[j]) {
//					count = 1;
//					break;
//				}
//			}
//			if (count == 1)
//			{
//				count = 0;
//				i = i + j;
//			}
//			else {
//				cout << i + 1;
//				return 0;
//			}
//		}
//	}
//	cout << "0";
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, h, L;
//	int c = 0;
//	cin >> n;
//	h = 0;
//	L = n - 1;
//	int a[100][100] = { 0 };
//	while (h <= L)
//	{
//		for (int i = h; i <= L; i++)a[h][i] = ++c;
//		for (int j = h + 1; j <= L; j++)a[j][L] = ++c;
//		for (int i = L - 1; i >= h; i--)a[L][i] = ++c;
//		for (int j = L - 1; j > h; j--)a[j][h] = ++c;
//		h++; L--;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//			cout << a[i][j] << " ";
//		cout << "\n";
//	}
//#include<iostream>
//using namespace std;
//int main() {
//	int a[100][100];
//	int n;
//	cin >> n;
//	int L = 0;
//	int c = 0;
//	int H = n - 1;
//	while (H >= L) {
//		for (int i = L; i <= H; i++)a[L][i] = ++c;
//		for (int j = L + 1; j <= H; j++)a[j][H] = ++c;
//		for (int i = H-1; i >= L; i--)a[H][i] = ++c;
//		for (int j = H - 1; j > L; j--)a[j][L]=++c;
//		L++;
//		H--;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++) {
//			cout << a[i][j]<<" ";
//		}
//		cout << "\n";
////	}
//#include<iostream>
//using namespace std;
//int i = 1;
//void move(int n, char a, char b)
//{
//	cout << i << " " << n << " " << a << "->" << b << "\n"; i++;
//}
//void cal(int n, char a, char b, char c)
//{
//
//	if (n == 1)
//	{
//		move(1, a, c);
//	}
//	else
//	{
//		cal(n - 1, a, c, b);
//		move(n, a, c);
//		cal(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	cal(n, a, b, c);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int i = 0;
//void move(int n,char a,char c) {
//	i++;
//	cout << i << " " << n << " " << a << "->" << c<<"\n";
//}
//void cal(int n,char a,char b,char c) {
//	if (n == 1) {
//		move(n, a, c);
//	}
//	else {
//		cal(n - 1, a, c, b);
//		move(n,a,c);
//		cal(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	cal(n,a,b,c);
//	return 0;
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> in, pre, post;
//bool unique = true;
//void getIn(int preLeft, int preRight, int postLeft, int postRight) {
//	if (preLeft == preRight) {
//		in.push_back(pre[preLeft]);
//		return;
//	}
//	if (pre[preLeft] == post[postRight]) {
//		int i = preLeft + 1;
//		while (i <= preRight && pre[i] != post[postRight - 1]) i++;
//		if (i - preLeft > 1)
//			getIn(preLeft + 1, i - 1, postLeft, postLeft + (i - preLeft - 1) - 1);
//		else
//			unique = false;
//
//		in.push_back(post[postRight]);
//		getIn(i, preRight, postLeft + (i - preLeft - 1), postRight - 1);
//
//	}
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	pre.resize(n), post.resize(n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &pre[i]);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &post[i]);
//	getIn(0, n - 1, 0, n - 1);
//	printf("%s\n%d", unique == true ? "Yes" : "No", in[0]);
//	for (int i = 1; i < in.size(); i++)
//		printf(" %d", in[i]);
//	printf("\n");
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int i = 0;
//class tree {
//public:
//	int p;
//	vector<int>child;
//	tree() {
//
//		p = -1;
//	}
//};
//tree t[26];
//void post(int root) {
//	
//	for (int i = 0; i < t[root].child.size(); i++) {
//		post(t[root].child[i]);
//	}	
//	printf("%c ", root + 'A');
//}
//int main()
//{
//	int root;
//	char p, c;
//	while (cin >> p >> c) {
//		t[p - 'A'].child.push_back(c-'A');
//		t[c - 'A'].p = 1;
//		
//	}
//	for (int i = 0; i < 26; i++) {
//		if (t[i].p == -1 && !t[i].child.empty())
//			root = i;
//	}
//	post(root);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class bitree {
//public:
//	char data;
//	bitree* lchild, * rchild;
//	bitree() {
//		lchild = rchild = NULL;
//	}
//};
//
//bitree*createtree(bitree*&t) {
//	char ch;
//	scanf("%c", &ch);
//	if (ch == ' ') {
//		t = NULL;
//	}
//	else {
//		t = new(bitree);
//		t->data = ch;
//		createtree(t->lchild);
//		createtree(t->rchild);
//	}
//	return t;
//}
//void pre(bitree* t) {
//	if (t != NULL) {
//		cout << t->data << " ";
//		pre(t->lchild);
//		pre(t->rchild);
//	}
//}
//void in(bitree* t) {
//	if (t != NULL) {
//		in(t->lchild);
//		cout << t->data << " ";
//		in(t->rchild);
//	}
//}
//int main() {
//	bitree*t=new(bitree);
//	t=createtree(t);
//	pre(t);
//	cout << "\n";
//	in(t);
//	cout << "\n";
//	in(t);
//	cout << "\n";
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<vector>
//using namespace std;
//int n;
//int sum = 0;
//class node {
//public:
//    char data;
//    int weight;
//    int p, lch, rch;
//    bool flag;
//    //        int deep=1;
//    node() {
//        p = -1;
//
//    }
//    node(int w1)
//    {
//        weight = w1;
//        lch = rch = -1;
//    }
//};
//node hf[2000];
//class heap {
//public:
//    int w;
//    int i;
//    heap(int w1, int i1)
//    {
//        w = w1; i = i1;
//    }
//    bool operator<(const heap& s)const {
//        return w > s.w;
//    }
//};
//int cal(node a, int path) {
//
//    if (a.lch == -1 && a.rch == -1)
//    {
//        return a.weight * path;
//    }
//    return cal(hf[a.lch], path + 1) + cal(hf[a.rch], path + 1);
//}
//int main() {
//    int path = 0;
//    while (cin >> n)
//    {
//        priority_queue<heap>a;
//        for (int i = 0; i < n; i++)
//        {
//            int m;
//            cin >> m;
//            a.push(heap(m, i));
//            hf[i] = node(m);
//        }
//        for (int i = n; i < 2 * n - 1; i++)
//        {
//            heap m1 = a.top(); a.pop();
//            heap m2 = a.top(); a.pop();
//            hf[i].weight = hf[m1.i].weight + hf[m2.i].weight;
//            hf[m1.i].p = i;
//            hf[i].lch = m1.i;
//            hf[m1.i].flag = true;
//            hf[m2.i].p = i;
//            hf[i].rch = m2.i;
//            hf[m1.i].flag = false;
//            //        hf[i].deep++;
//            a.push(heap(hf[i].weight, i));
//        }
//
//        cout << cal(hf[2 * n - 2], path) << "\n";
//    }
//    return 0;
//}
//#include<algorithm>
//#include<queue>
//#include<iostream>
//using namespace std;
//class tree {
//public:
//	int p,lchild,rchild,weight;
//	tree() {
//		lchild = rchild = p = -1; weight = 0;
//	}
//	tree(int w) {
//		weight = w;
//	}
//};
//tree hf[2000];
//class heap {
//public:
//	int i;
//	int weight;
//	heap() {
//
//	}
//	heap(int i, int w) {
//		this->i = i; weight = w;
//
//	}
//	bool operator<(const heap&h1)const {
//		return weight > h1.weight;
//	}
//};
//
//int cal(tree h,int path) {
//	if (h.lchild == -1 && h.rchild == -1) {
//		return path * h.weight;
//	}
//	return cal(hf[h.lchild], path + 1) + cal(hf[h.rchild], path + 1);
// }
//int main() {
//	int n;
//	int w;
//	int path=0;
//	priority_queue<heap>q1;
//	while (cin >> n) {
//		for (int i = 0; i < n; i++) {
//			cin >> w;
//			hf[i].weight = w;
//			q1.push(heap(i, w));
//		}
//		for (int i = n; i < 2 * n-1; i++) {
//			heap m1 = q1.top(); q1.pop();
//			heap m2 = q1.top(); q1.pop();
//			hf[m1.i].p = i;
//			hf[m2.i].p = i;
//			hf[i].lchild = m1.i;
//			hf[i].rchild = m2.i;
//			hf[i].weight = m1.weight + m2.weight;
//			q1.push(heap(i, hf[i].weight));
//		}
//		int s=cal(hf[2 * n - 2], path);
//		while (!q1.empty()) {
//			q1.pop();
//		}
//		for (int i = 0; i < 2 * n - 1; i++) {
//			hf[i] = tree();
//		}
//		cout << s << "\n";
//	}
//	return 0;
//}

//
//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> in, pre, post;
//bool unique = true;
//void getIn(int preLeft, int preRight, int postLeft, int postRight) {
//	if (preLeft == preRight) {
//		in.push_back(pre[preLeft]);
//		return;
//	}
//	if (pre[preLeft] == post[postRight]) {
//		int i = preLeft + 1;
//		while (i <= preRight && pre[i] != post[postRight - 1]) i++;
//		if (i - preLeft > 1)
//			getIn(preLeft + 1, i - 1, postLeft, postLeft + (i - preLeft - 1) - 1);
//		else
//			unique = false;
//
//		in.push_back(post[postRight]);
//		getIn(i, preRight, postLeft + (i - preLeft - 1), postRight - 1);
//
//	}
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	pre.resize(n), post.resize(n);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &pre[i]);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &post[i]);
//	getIn(0, n - 1, 0, n - 1);
//	printf("%s\n%d", unique == true ? "Yes" : "No", in[0]);
//	for (int i = 1; i < in.size(); i++)
//		printf(" %d", in[i]);
//	printf("\n");
//	return 0;
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//vector<int>pre,in,post;
//bool flag = true;
//void getin(int preleft,int preright,int postleft,int postright) {
//	if (preleft == preright) {
//		in.push_back(pre[preleft]);
//	}
//	else if (pre[preleft] == post[postright]) {
//		int i = preleft + 1;
//		while (i <= preright && pre[i] != post[postright - 1])i++;
//		if (i - preleft > 1)
//			getin(preleft+1, i - 1, postleft, postleft + (i - preleft - 1) - 1);
////			getIn(preLeft + 1, i - 1, postLeft, postLeft + (i - preLeft - 1) - 1);
//		else flag = false;
//		in.push_back(pre[preleft]);
//		getin(i, preright, postright-(preright-i+1), postright - 1);
////		getIn(i, preRight, postLeft + (i - preLeft - 1), postRight - 1);		
//	}
//}
//int main() {
//	
//	int n;
//	cin >> n;
//	pre.resize(n);
//	post.resize(n);
////	in.resize(n);
//	for (int i = 0; i < n; i++)cin >> pre[i];
//	for (int i = 0; i < n; i++)cin >> post[i];
//	int preleft = 0; int preright = n-1; int postleft = 0; int postright = n-1;
//	getin(preleft,preright,postleft,postright);
//	if (flag == true)cout << "Yes\n";
//	else cout << "No\n";
//	for (int i = 0; i < n; i++)cout<<in[i]<<" ";
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//const int MAX = 105;
//const int INF = 0x3f3f3f3f;
//class mat {
//public:
//	int edges[MAX][MAX];
//	int n, m;
//	mat(int n, int m,int a[][MAX]) {
//		this->n = n; this->m = m;
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				this->edges[i][j] = a[i][j];
//				if (i != j && edges[i][j] == 0)
//					edges[i][j] = INF;
//			}
//		}
//
//	}
//};
//void dis(mat& t, int start, int end) {
//	int dist[MAX], path[MAX],s[MAX];
//	for (int i = 1; i <= t.n; i++) {
//		dist[i] = t.edges[start][i];
//		 s[i] = -1;
//		if (dist[i] != INF) {
//			path[i] = start;
//		}
//		else path[i] = -1;
//	}
//	s[start] = 1;
//	for (int i = 0; i < t.n - 1; i++) {
//		int mindis = INF;
//		int minpoi = 0;
//		for (int j = 1; j <= t.n; j++) {
//			if (dist[j] < mindis&&s[j]==-1) {
//				minpoi = j;
//				mindis = dist[j];
//			}
//		}
//		s[minpoi] = 1;
//		for (int j = 1; j <= t.n; j++) {
//			if (s[j] == -1) {
//				if (dist[minpoi] + t.edges[minpoi][j] < dist[j]&& t.edges[minpoi][j]<INF) {
//					dist[j] = dist[minpoi] + t.edges[minpoi][j];
//					path[j] = minpoi;
//				}
//			}
//			
//		}
//	}
//	if (s[end]==1)
//		cout << dist[end] << "\n";
//	else cout << "STOP";
//}
//int main() {
//	int a[MAX][MAX] = { 0 };
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int a1, a2, a3;
//		cin >> a1 >> a2 >> a3;
//		a[a1][a2] = a3;
//	}
//	mat t(n, m, a);
//	int start, end;
//	cin >> start >> end;
//	dis(t,start,end);
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//const int INF = 0x3f3f3f3f;
//int length[50] = { 0 };
//class matgraph
//{
//public:
//	int edges[50][50];
//	int n, e;
//	string vexs[50];
//	void creat(int a[][50], int n, int e);
//};
//void matgraph::creat(int a[][50], int n, int e)
//{
//	this->n = n; this->e = e;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//		{
//			this->edges[i][j] = a[i][j];
//			if (i != j && this->edges[i][j] == 0)
//				this->edges[i][j] = INF;
//		}
//
//}
//void prim(matgraph g, int v)
//{
//	int lowcost[50];
//	int closest[50];
//	for (int i = 0; i < g.n; i++)
//	{
//		lowcost[i] = g.edges[v][i];
//		closest[i] = v;
//	}
//	for (int i = 1; i < g.n; i++)
//	{
//		int min = INF;
//		int k = -1;
//		for (int j = 0; j < g.n; j++)
//		{
//			if (lowcost[j] != 0 && lowcost[j] < min)
//			{
//				min = lowcost[j];
//				k = j;
//			}
//		}
//		for (int q = 0; q < 50; q++)
//		{
//			if (length[q] == 0)
//			{
//				length[q] = min;
//				break;
//			}
//		}
//
//		lowcost[k] = 0;
//		for (int j = 0; j < g.n; j++)
//		{
//			if (lowcost[j] != 0 && g.edges[k][j] < lowcost[j])
//			{
//				lowcost[j] = g.edges[k][j];
//				closest[j] = k;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[50][50] = { 0 };
//	matgraph m;
//	int n, e = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a[i][j];
//			if (a[i][j] != 0)
//				e++;
//		}
//	}
//	m.creat(a, n, e);
//	prim(m, 0);
//	int sum = 0;
//	for (int i = 0; i < 50; i++)
//		sum += length[i];
//	cout << sum << "\n";
//	return 0;
//}


//
//
//#include<iostream>
//#include<vector>
//using namespace std;
//const int MAX = 50;
//const int INF = 0x3f3f3f3f;
//vector<int>length;
//class matgraph {
//	public:
//		int edges[MAX][MAX];
//		int m, n;
//		matgraph(int m,int n,int a[][MAX]) {
//			this->m = m; this->n = n;
//			for (int i = 0; i < m; i++) {
//				for (int j = 0; j < m; j++) {
//					edges[i][j] = a[i][j];
//					if (i != j && a[i][j] == 0) {
//						edges[i][j] = INF;
//					}
//				}
//			}
//		}
//};
//void prim(matgraph& g, int start) {
//	int closest[MAX];
//	int lowcost[MAX];
//	int s[MAX] = { 0 };
//	for (int i = 0; i < g.m; i++) {
//		lowcost[i] = g.edges[start][i];
//		closest[i] = start;
//	}
//	s[start] = 1;
//	for (int i = 0; i < g.m - 1; i++) {
//		int mindis = INF;
//		int s1 = -1;
//		for (int j = 0; j < g.m; j++) {
//			if (mindis > lowcost[j]&&lowcost[j]!=0) {
//				mindis = lowcost[j];
//				s1 = j;
//			}
//		}
//		s[s1] = 1;
//		length.push_back(mindis);
//		for (int j = 0; j < g.m; j++) {
//			if (g.edges[s1][j] < lowcost[j]) {
//				lowcost[j] = g.edges[s1][j];
//				closest[j] = s1;
//			}
//		}
//	}
//}
//int main() {
//	int a[MAX][MAX];
//	int m, n = 0;
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> a[i][j];
//			if (a[i][j] != 0) {
//				n++;
//			}
//		}
//	}
//	matgraph g(m, n, a);
//	prim(g, 0);
//	int sum=0;
//	for (int i = 0; i < length.size(); i++) {
//		sum += length[i];
//	}
//	cout << sum;
//	return 0;
//}
//
//



//#include<unordered_map>
//#include<iostream>
//#include<cstring>
//using namespace std;
//class city {
//public:
//	string parent;
//	int len;
//};
//int main() {
//	int n;
//	cin >> n;
//	unordered_map<string, city>m;
//	for (int i = 0; i < (1 << (n + 1)) - 2; i++) {
//		string s1, s2; int len;
//		cin >> s1 >> s2 >> len;
//		m[s2] = { s1,len };
//	}
//	string start;
//	cin >> start;
//	int sumlen = 0;
//	while (m.find(start) != m.end()) {
//		sumlen += m[start].len;
//		start = m[start].parent;
//	}
//	cout << sumlen;
//	return 0;
//}






//#include<iostream>
//using namespace std;
//int main() {
//	int n=0;
//	cin >> n;
//	int m = (1 << (n+1))-2;
//	cout << m;
//}
//#include<iostream>
//using namespace std;
//const int MAX=105;
//const int INF = 0x3f3f3f3f;
//class matgraph {
//public:
//	int edges[MAX][MAX];
//	int n,m;
//	matgraph(int n, int m, int a[][MAX]) {
//		this->n = n;
//		this->m = m;
//		for (int i = 1; i <= n; i++) {
//			for (int j = 0; j <= n; j++) {
//				edges[i][j] = a[i][j];
//				if (i != j && a[i][j] == 0) {
//					edges[i][j] = INF;
//				}
//			}
//		}
//	}
//};
//void dik(matgraph& t, int start, int end) {
//	int dis[MAX];
//	int path[MAX];
//	int s[MAX] = {0};
//	for (int i = 1; i <= t.n; i++) {
//		dis[i] = t.edges[start][i];
//		if (dis[i] < INF)
//			path[i] = start;
//	}
//	s[start] = 1;
//	for (int i = 0; i < t.n - 1; i++) {
//		int mindis = INF;
//		int p = -1;
//		for (int j = 1; j <= t.n; j++) {
//			if (mindis > dis[j]&&dis[j]!=0) {
//				p = j;
//				mindis = dis[j];
//			}
//		}
//		s[p] = 1;
//		for (int j = 1; j <= t.n; j++) {
//			if (s[j] == 0 && dis[p] + t.edges[p][j] < dis[j]) {
//				dis[j] = dis[p] + t.edges[p][j];
//				path[j] = p;
//			}
//		}
//	}
//	cout << dis[end] << "\n";
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int a[MAX][MAX] = {0};
//	for (int i = 0; i < m; i++) {
//		int a1, a2,length; cin >> a1 >> a2>>length;
//		a[a1][a2] = length;
//	}
//	matgraph t(n, m, a);
//	int end; cin >> end;
//	dik(t, 1,end);
//	return 0;
//}

#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int x, int y) {
	int x1=0, y1 = 0;
	int x2 = x; int y2 = y;
	while (x > 0) {
		x1 += x % 10;
		x /= 10;
	}
	while (y > 0) {
		y1 += y % 10;
		y /= 10;
	}
	if (x1 > y1)return 1;
	else if (x1 == y1)return x2 > y2;
	else return 0;
}
int main()
{
	vector<int>a;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int m; cin >> m;
		a.push_back(m);
	}
	sort(a.begin(), a.end(), cmp);
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	return 0;
}


//#include<iostream>
//#include<algorithm>
//#define int long long
//using namespace std;
//const int N = 1000010;
//
//int a[N];
//bool cmp(int m, int n) {
//	int x = m, y = n;
//	int sm = 0, sn = 0;
//	while (m > 0) {
//		sm += m % 10;
//		m /= 10;
//	}
//	while (n > 0) {
//		sn += n % 10;
//		n /= 10;
//	}
//	if (sm > sn) return 1;
//	else if (sm == sn) return x > y;
//	else return 0;
//}
//signed main() {
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	sort(a + 1, a + n + 1, cmp);
//	for (int i = 1; i <= n; i++) {
//		cout << a[i] << ' ';
//	}
//	return 0;
//}



