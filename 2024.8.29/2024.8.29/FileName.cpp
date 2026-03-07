//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//int n, n2, a1[10010], a2[10010], sum = 0;
//using namespace std;
//int main() {
//	cin >> n;
//	memset(a1, 127, sizeof(a1));
//	memset(a2, 127, sizeof(a2));
//	for (int i = 0; i < n; i++)
//		cin >> a1[i];
//	sort(a1, a1 + n);
//	int i = 0, j = 0, k, w;
//	for (k = 1; k < n; k++) {
//		w = a1[i] < a2[j] ? a1[i++] : a2[j++];//取最小值
//		w += a1[i] < a2[j] ? a1[i++] : a2[j++];//取第二次最小值
//		a2[n2++] = w;//加入第二个队列
//		sum += w;//计算价值
//	}
//	cout << sum;
//	return 0;
//}
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main() {
	priority_queue <int, vector<int>, greater<int>>q1;
	priority_queue <int, vector<int>, greater<int>>q2;
	int n,a;
	cin >> n;
	int n1 = n;
	while (n--) {
		cin >> a;
		q1.push(a);
	}
	if (n1 == 1) {
		cout << a;
		return 1;
	}
	int k = 1;
	int a1, b1,sumweight=0,c1=0;
	for (; k < n1; k++) {
		if (q2.empty()) {
			a1=q1.top();
			q1.pop();
			b1 = q1.top();
			q1.pop();
			c1 = a1 + b1;
			sumweight += c1;
			q2.push(c1);
		}
		else {
			if (!q1.empty() && !q2.empty() && q2.top() >= q1.top()) {
				a1 = q1.top();
				q1.pop();
			}
			else if (!q1.empty() && !q2.empty() && q2.top() < q1.top()) {
				a1 = q2.top();
				q2.pop();
			}
			else if (q1.empty()) {
				a1 = q2.top();
				q2.pop();
			}
			if (!q1.empty() && !q2.empty() && q2.top() > q1.top()) {
				b1 = q1.top();
				q1.pop();
			}
			else if (!q1.empty() && !q2.empty() && q2.top() < q1.top()) {
				b1 = q2.top();
				q2.pop();
			}
			else if(q1.empty()){
				b1 = q2.top();
				q2.pop();
			}
			else{
				b1 = q1.top();
				q1.pop();
			}
			c1 = a1 + b1;
			sumweight += c1;
			q2.push(c1);
		}

	}
	cout << sumweight;
	return 0;
}


