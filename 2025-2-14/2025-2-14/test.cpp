//#include<iostream>
//using namespace std;

//class Date {
//public:
//	void print() {
//		cout << _year << _month << _day;
//	}
//protected:
//
//private:
//	int _year=0;
//	int _month=0;
//	int _day=0;
//};
//#include<iostream>
//using namespace std;
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		this->_year = year;
//		this->_month = month;
//		this->_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "/" << _month << "/" << _day << endl;
//	}
//private:
//	// 这⾥只是声明，没有开空间
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	cout << sizeof(d1);
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	void Print()
//	{
//		cout << _a;
//		cout << "A::Print()" << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	
//	p->Print();
//	return 0;
////}
//#include<iostream>
//using namespace std;
//class A {
//public:
//	int*_a;
//	A()
//	{
//		_a = (int*)malloc(4);
//	}
//	A(A& a)
//	{
//		_a = (int*)malloc(sizeof(*a._a));
//		*_a = *(a._a);
//	}
//	~A()
//	{
//		free(_a);
//		_a = NULL;
//	}
//};
//
//int main()
//{
//	A a1;
//	A a2 = a1;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date {
//public:
//	int _year;
//	int _month;
//	const int _day;
//	//初始化列表
//	Date(int year = 1, int month = 1, int day = 1):
//		_year(year),_month(month){
//		 
//	}
//	void print()
//	{
//		cout << _year << " " << _month << " " << _day;
//	}
//};
//int main()
//{
//	Date d1(2025, 2, 16);
//	d1.print();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2 = 2;
//	int _a1 = 2;
//};
//int main()
//{
//	A aa(1);
//	aa.Print();
//}

//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	// 构造函数explicit就不再⽀持隐式类型转换
//	// explicit A(int a1)
//	A(int a1)
//		:_a1(a1)
//	{}
//	//explicit A(int a1, int a2)
//	A(int a1, int a2)
//		:_a1(a1)
//		, _a2(a2)
//	{}
//	void Print()
//	{
//		cout << _a1 << " " << _a2 << endl;
//	}
//	int Get() const
//	{
//		return _a1 + _a2;
//	}
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//class B
//{
//public:
//	B(const A& a)
//		:_b(a.Get())
//	{}
//private:
//	int _b = 0;
//};
//int main()
//{
//	// 1构造⼀个A的临时对象，再⽤这个临时对象拷⻉构造aa3
//	// 编译器遇到连续构造+拷⻉构造->优化为直接构造
//	A aa1 = 1;
//	aa1.Print();
//	const A& aa2 = 1;
//	// C++11之后才⽀持多参数转化
//	A aa3 = { 2,2 };
//	// aa3隐式类型转换为b对象
//	// 原理跟上⾯类似
//	B b = aa3;
//	const B& rb = aa3;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class A {
//
//	int _a;
//	friend void print(A a);
//};
//void print(A a)
//{
//	cout << a._a;
//}
//int main()
//{
//	A a;
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//class A {
//public:A(int a = 1) {
//	_a = a;
//}
//private:
//	int _a;
//};
//int main()
//{
//	A a;
//		a.A;
//	}
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstdio>
//#include<list>
//using namespace std;
//int main()
//{
//	list<int>a;
//	a.push_back(1);
//	int N;
//	scanf("%d", &N);
//	for (int i = 2; i <= N; i++)
//	{
//		int k, p; int j = 0;
//		scanf("%d%d", &k, &p);list<int>::iterator it = a.begin();
//		for (auto num : a)
//		{
//			if (num == k) {
//				if (p == 0)
//				{
//					 a.insert(it,i);
//				}
//				else {
//					if (it==a.end()) {
//						a.push_back((i));
//					}
//					else {
//						it++; a.insert(it, i);
//					}
//					
//				}
//				break;
//			}
//			if (it != a.end())
//				it++;
//		}
//		it = a.begin();
//	}
//	int M;
//	cin >> M;
//	while (M--)
//	{
//		int x; cin >> x;
//		a.remove(x);
//	}
//	for (auto x: a) {
//		printf("%d ", x);
//	}
//	return 0;
//}

//#include <list>
//#include <iostream>
//
//using std::cout;
//using std::list;
//using std::endl;
//
//int main() {
//    list<int> mylist{ 1, 2, 3, 4 };
//    cout << "初始化后的mylist为：";
//    for (auto num : mylist) {
//        cout << num << " ";
//    }
//    // it指向mylist的第二个元素
//    list<int>::iterator it = mylist.begin() + 1;
//    // 使用insert添加2个元素，value为20
//    mylist.insert(it, 2, 20);
//    cout << "\n使用insert插入元素后：";
//    for (auto num : mylist) {
//        cout << num << " ";
//    }
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<cstdio>
//#include<list>
//using namespace std;
//class node {
//public:
//	int _left, _right, _middle;
//	node(int left = 0, int middle = 0, int right = 0) 
//		:_left(left), _middle(middle), _right(right){}
//};
//int main()
//{
//	node all[100005];
//	list<int>a;
//	a.push_back(1);
//	all[1] = { 0,1,0 };
//	int N;
//	scanf("%d", &N);
//	for (int i = 2; i <= N; i++)
//	{
//		int k, p; int j = 0;
//		scanf("%d%d", &k, &p);list<int>::iterator it = a.begin();
//		for (auto num : a)
//		{
//			if (num == k) {
//				if (p == 0)
//				{
//					 a.insert(it,i);
//				}
//				else {
//					if (it==a.end()) {
//						a.push_back((i));
//					}
//					else {
//						it++; a.insert(it, i);
//					}
//					
//				}
//				break;
//			}
//			if (it != a.end())
//				it++;
//		}
//		it = a.begin();
//	}
//	int M;
//	cin >> M;
//	while (M--)
//	{
//		int x; cin >> x;
//		a.remove(x);
//	}
//	for (auto x: a) {
//		printf("%d ", x);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//class node {
//public:
//	int pre, nxt, key;
//	node(int _key=0, int _pre=0, int _nxt=0) :pre(_pre), nxt(_nxt), key((_key)) {}
//};
//node s[100005];
//int n, m, tot = 0;
//void ins_back(int x, int y) {//x是在哪个元素后边插入，y是插入的内容
//	s[y] = node(y, x, s[x].nxt);//插入了这个节点
//	s[s[x].nxt].pre = y;//修改下一个节点
//	s[x].nxt = y;//修改上一个节点
//}
//void ins_front(int x, int y) {
//	s[y] = node(y, s[x].pre, x);
//	s[s[x].pre].nxt = y;
//	s[x].pre = y;
//}
//void del(int x) {
//	int le = s[x].pre, rt = s[x].nxt;
//	s[le].nxt = rt;
//	s[rt].pre = le;
//	s[x].key = 0;
//}
//
//
//int main()
//{
//	int x, k, p, now;
//	cin >> n;
//	s[0] = node();
//	ins_back(0, 1);
//	for (int i = 2; i <= n; i++) {
//		cin >> k >> p;
//		p ? ins_back(k, i) : ins_front(k, i);
//	}
//	cin >> m;
//	for (int i = 1; i <= m; i++) {
//		cin >> x;
//		if (s[x].key)del(x);
//	}
//	now = s[0].nxt;
//	while (now) {
//		cout << s[now].key << " ";
//		now = s[now].nxt;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class node {
//public:
//	int _pre, _key, _nxt;
//	node(int pre=0,int key=0,int nxt=0):_pre(pre),_key(key),_nxt(nxt){}
//};
//node s[100005];
//void insert_back(int k,int i) {//k表示在某个元素的后边插入，i表示插入的内容
//	s[i] = { k,i,s[k]._nxt };
//	s[k]._nxt = i;
//	s[s[i]._nxt]._pre = i;
//}
//void insert_front(int k, int i) {//k表示在某个元素的前边插入，i表示插入的内容
//	s[i] = { s[k]._pre,i,k };
//	s[k]._pre = i;
//	s[s[i]._pre]._nxt = i;
//}
//void del(int x) {
//	s[x]._key = 0;
//	s[s[x]._pre]._nxt = s[x]._nxt;
//	s[s[x]._nxt]._pre = s[x]._pre;
//}
//int main()
//{
//	int N; cin >> N; s[1]._key = 1; s[0]._nxt = 1;
//	for (int i = 2; i <= N; i++) {
//		int k, p; cin >> k >> p;
//		p ? insert_back(k, i) : insert_front(k, i);
//	}
//	int M; cin >> M;
//	while (M--) {
//		int x; cin >> x;
//		if (s[x]._key)del(x);
//	}
//	int now = s[0]._nxt;
//	while (now != 0) {
//		cout << now << " ";
//		now = s[now]._nxt;
//	}
//	return 0;
//}
//
//#include<iostream>
//#include<cmath>
//using namespace std;
//class tree {
//public:
//	int lef;
//	int rig;
//};
//tree node[100005];
//int leap(int x) {
//	if (node[x].lef == 0 && node[x].rig == 0) return 1;
//	return 1 + max(leap(node[x].lef), leap(node[x].rig));
//}
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//		cin >> node[i].lef >> node[i].rig;
//	cout<<leap(1);
//	return 0;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//string mid, pre;
//void post(int pl,int pr,int ml,int mr)
//{
//	int i;
//	char ch = pre[pl];
//	for ( i = ml; i <= mr; i++) {
//		if (ch == mid[i]) {
//			break;
//		}
//	}
//	if (pl != pr&&pl<pre.size()){
//		post(pl + 1,pl + i-ml,ml, i - 1);
//		post(pl+i-ml+1,pr,i + 1,mr);
//		}
//	
//	cout << pre[pl];
//}
//int main()
//{
//	cin >> mid >> pre;
//	int preleft = 0, preright = pre.size() - 1;
//	int midleft = 0, midright = mid.size() - 1;
//	post(preleft,preright,midleft,midright);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	std::string s1 = "1234";
//	cout << s1.size();
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int q;
//class tree {
//public:
//	int _left;
//	int _right;
//	int _people; 
//	int _lenth;
//	tree(int people = 0,int left=0,int right=0) :_people(people),_left(left),_right(right){}
//};
//tree node[105]; int lenth[105];
//int main() {
//	int n; cin >> n;
//	for (int i = 1; i <= n;i++) {
//		int w, u, v; cin >> w >> u >> v;
//		node[i] = { w,u,v };
//		for (int j = 1; j <= n; j++) {
//			if (j == i) {
//				continue;
//			}
//			node[j]._lenth += node[i]._people;
//		}
//	}
//	
//	return 0;
//}

#include<iostream>
#include<cstring>
#define MAXN 110
using namespace std;
int n, ans = 1000000000, vis[MAXN];
class Node {
public:int left, right, father, value;
};
Node t[MAXN];
int cal(int x, int d) {
	if (!x || vis[x]) return 0;
	vis[x] = 1;
	return cal(t[x].left, d + 1) + cal(t[x].right, d + 1) + cal(t[x].father, d + 1) + t[x].value * d;
}
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> t[i].value >> t[i].left >> t[i].right;
	for (int i = 1; i <= n; i++) {
		t[t[i].left].father = i; t[t[i].right].father = i;
	}
	for (int i = 1; i <= n; i++) {
		memset(vis, 0, sizeof(vis));
		ans = min(ans, cal(i, 0));
	}
	cout << ans << "\n";
	return 0;
}
