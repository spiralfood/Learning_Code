#define _CRT_SECURE_NO_WARNINGS 0
//#include<iostream>
//#include<cstdio>
//#include<math.h>
//using namespace std;
//int main()
//{
//	int n,m,count=0;
//	scanf("%d", &n);
//	for (int k = 0; k < n; k++)
//	{
//		cin >> m;
//		for (int i = 2; i < m; i++)
//		{
//			for (int x = 2; x <=i; x++)
//			{
//				if (i % x == 0 && m % x == 0)
//				{
//					count++;
//					break;
//				}
//
//			}
//		}
//		cout << m - count-1<<"\n";
//		count = 0;
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//// 辅助函数：计算最大公约数
//int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//int main() {
//    int n;
//    cin >> n; // 读取输入的数量
//    for (int k = 0; k < n; k++) {
//        int m;
//        cin >> m; // 读取每个测试案例的值
//        int count = 0; // 初始化互质数计数器
//        for (int i = 1; i <= m; i++) {
//            if (gcd(i, m) == 1) { // 如果最大公约数为1，即互质
//                count++;
//            }
//        }
//        cout << count << "\n"; // 输出互质数的数量
//    }
//    return 0;
//}
//#include <iostream>
//
//int countNewFriends(int n) {
//    int newFriends = 0;
//    for (int i = 1; i <= n; ++i) {
//        if (n % i != 0) {
//            newFriends++;
//        }
//    }
//    return newFriends;
//}
//
//int main() {
//    int CN;
//    std::cin >> CN; // 读取测试数据组数
//    for (int i = 0; i < CN; ++i) {
//        int N;
//        std::cin >> N; // 读取每组数据的N值
//        std::cout << countNewFriends(N) << std::endl; // 输出新朋友的数量
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = a % b;
//        a = b;
//        b = temp;
//    }
//    return a;
//}
//
//int countFriends(int n) {
//    int count = 0;
//    for (int i = 1; i < n; i++) {
//        if (gcd(i, n) == 1) {
//            count++;
//        }
//    }
//    return n - 1 - count;
//}
//
//int main() {
//    int t, n;
//    cin >> t; // 输入测试数据的组数
//    while (t--) {
//        cin >> n; // 输入会员人数
//        int result = countFriends(n);
//        cout << result << endl; // 输出新朋友的人数
//    }
//    return 0;
//}
//#include<iostream>
//#include<cmath>
//using namespace std;
//
//// 辅助函数：计算最大公约数
//int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//
//int countCoprimes(int m) {
//    int count = 0; // 初始化互质数计数器
//    for (int i = 1; i <= sqrt(m); i++) {
//        if (m % i == 0) {
//            if (i == m / i) {
//                if (gcd(i, m) == 1) {
//                    count++;
//                }
//            }
//            else {
//                if (gcd(i, m) == 1) {
//                    count++;
//                }
//                if (gcd(m / i, m) == 1) {
//                    count++;
//                }
//            }
//        }
//    }
//    return count;
//}
//
//int main() {
//    int n;
//    cin >> n; // 读取输入的数量
//    for (int k = 0; k < n; k++) {
//        int m;
//        cin >> m; // 读取每个测试案例的值
//        int result = countCoprimes(m);
//        cout << m - 1 - result << "\n"; // 输出新朋友的人数
//    }
//    return 0;

//#include<iostream>
//using namespace std;
//int gcd(int a, int b) {
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//    return a;
//}
//int main()
//{
//	int n;
//	int count = 0;
//	cin >> n;
//	while (n != 0)
//	{
//		for (int i = 1; i < n; i++)
//		{
//			if (gcd(n, i)==1)
//			{
//				count++;
//			}
//		}
//		cout << count<<"\n";
//		count = 0;
//		cin >> n;
//	}
//	return 0;
//}
// 
// 
 //求质数
//#include <iostream>
//using namespace std;
//
//// 计算欧拉函数φ(n)的值
//int eulerTotientFunction(int n) {
//    int result = n;
//    for (int i = 2; i * i <= n; i++)
//    {
//        if (n % i == 0)
//            result = result / i * (i - 1);
//        while (n % i == 0)
//        {
//            n /= i;
//        }
//    }
//    if (n > 1)result = result / n * (n - 1);
//    return result;
//}
//
//int main() {
//    int n;
//    while (cin >> n && n != 0) {
//        cout << eulerTotientFunction(n) << endl;
//    }
//    return 0;
//}

//约瑟夫问题
//#include<iostream>
//#include<queue>
//using namespace std;
//int main()
//{
//	queue<int>qu1;
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		qu1.push(i);
//	}
//	while (qu1.size() != 1)
//	{
//		int i;
//		for (i = 1; i <= m; i++)
//		{
//			int cmp = qu1.front();
//			qu1.pop();
//			if(i!=m)
//			qu1.push(cmp);
//		}
//		i = 1;
//	}
//	cout << qu1.front();
//	return 0;
//}


//进制转换
//#include<iostream>
//using namespace std;
//void swi(int a, int b)
//{
//	if (b == 10)
//		cout << a;
//	if (b < 10)
//	{
//		int i = 0;
//		int c[100] = {0};
//		while (a != 0)
//		{
//			c[i] = a % b;
//			a = a / b;
//			i++;
//		}
//		for (int m = i-1; m >= 0; m--)
//			cout << c[m];
//	}
//	if (b > 10)
//	{
//		int i = 0;
//		int c[100] = { 0 };
//		while (a != 0)
//		{
//			c[i] = a % b;
//			a = a / b;
//			i++;
//		}
//		for (int m = i - 1; m >= 0; m--)
//		{
//			if (c[m] >= 10)
//			{
//				if (c[m] == 10)
//					cout << "A";
//				else if (c[m] == 11)
//					cout << "B";
//				else if (c[m] == 12)
//					cout << "C";
//				else if (c[m] == 13)
//					cout << "D";
//				else if (c[m] == 14)
//					cout << "E";
//				else if (c[m] == 15)
//					cout << "F";
//				else if (c[m] == 16)
//					cout << "G";
//				else if (c[m] == 17)
//					cout << "H";
//				else if (c[m] == 18)
//					cout << "I";
//				else if (c[m] == 19)
//					cout << "J";
//			}
//			else
//				cout << c[m];
//		}
//	}
//}
//int main()
//{
//	int n, m;
//	cin >> n>>m;
//	swi(n, m);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b;
//	char c, d;
//	cin >> a >> c >> b >> d;
//	cout << a << c << b << d << a + b;
//	return 0;
//}
//#include<iostream>
//#include<cstring>
//#include<stack>
//#include<queue>
//using namespace std;
//int main()
//{
//	queue<int>qu1;
//	queue<int>qu2;
//	int n;
//	cin >> n;
//	int n1, n2;
//	n1 = n; n2 = n;
//	while (n1--)
//	{
//		int m;
//		cin >> m;
//		qu1.push(m);
//	}
//	while (n2--)
//	{
//		int m;
//		cin >> m;
//		qu2.push(m);
//	}
//	queue<int>qu3;
//	while (qu1.size() != 0 && qu2.size() != 0)
//	{
//		int sam1 = qu1.front();
//		int sam2 = qu2.front();
//		if (sam1 < sam2)
//		{
//			qu1.pop();
//			qu3.push(sam1);
//		}
//		else
//		{
//			qu2.pop();
//			qu3.push(sam2);
//		}
//	}
//	while (qu1.size() != 0)
//	{
//		int sam1 = qu1.front();
//		qu1.pop();
//		qu3.push(sam1);
//	}
//	while (qu2.size() != 0)
//	{
//		int sam2 = qu2.front();
//		qu2.pop();
//		qu3.push(sam2);
//	}
//	while (qu3.size() != 0)
//	{
//		cout << qu3.front() << " ";
//		qu3.pop();
//	}
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
//#include <iostream>
//using namespace std;
//struct child {
//	int no;
//	child* next;//指向下一个节点的指针
//	child(int d) :
//		no(d), next(NULL) {}//构造函数 	
//};
//class Joseph {
//	int n, m;
//	child* first;
//public:
//	Joseph(int n1, int m1) :n(n1), m(m1) {}
//	void creatlist() {
//		first = new child(1);
//		child* r = first, * p;
//		
//		for (int i = 2; i < -n; i++) {
//			p = new child(i);
//			r->next = p;
//			r = p;
//		}
//		r->next = first;
//	}
//	void Jsequence() {
//		child* p, * q;
//		for (int i = 1; i <= n; i++) {
//			p = first;
//			int j = 1;
//			while (j != m) {
//				j++;
//				p = p->next;
//			}
//
//			q = p->next;
//			p->no = q->no;
//			p->next = q->next;
//			delete q;
//			first = p;
//		}cout << first->no;
//	}
//};
//int main() {
//	int m, n;
//	cin >> n >> m;
//	Joseph L(n, m);
//	L.creatlist();
//	L.Jsequence();
//	return 0;
//}
//#include<iostream>
//using namespace std;
//#include<cstdio>
//#include<vector>
//int main()
//{
//	int n, m,sel,a,b,c;
//	cin >> n >> m;
//	vector<vector<int>>cab(n);
//	
//	while (m)
//	{
//		cin >> sel;
//		if (sel == 1)
//		{
//			cin >> a >> b >> c;
//			if (cab[a-1].size() < b+1)
//				cab[a-1].resize(b+1);
//			cab[a-1][b-1 ] = c;
//		}
//		if (sel == 2)
//		{
//			cin >> a >> b;
//			cout << cab[a-1][b-1]<<"\n";
//			
//		}
//		m--;
//		if (m == 0)
//			break;
//	}
//	return 0;
//}

#include<iostream>
#include<stack>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	char c;
	int m,tmp=0;
	stack<char>s;
	cin >> m;
	string s1;
	getline(cin,s1);
	while (m--)
	{
		getline(cin, s1);
		for (int i = 0; i < s1.size(); i++)
		{
			if (s1[i] == '[' || s1[i] == '(' || s1[i] == '{')
			{
				s.push(s1[i]);
			}
			else if (s1[i] == ']' || s1[i] == ')' || s1[i] == '}')
			{
				if(!s.empty())
				 c = s.top();
				else {
					tmp = 1;
					break;
				}
				s.pop();
				if (s1[i] == ']' && c == '[' || s1[i] == ')' && c == '(' || s1[i] == '}' && c == '{'  )
				{

				}
				else {
					tmp = 1;
					while (!s.empty())
						s.pop();
					break;
				}
			}
			
		}
		if (!s.empty())
		{
			tmp = 1;
			while (!s.empty())
				s.pop();
		}
		if (tmp == 1)
		{
			cout << "No"<<"\n";
			tmp = 0;
		}
		else if (tmp == 0)
		{
			cout << "Yes" << "\n";
		}
		
	}
	
	return 0;
}