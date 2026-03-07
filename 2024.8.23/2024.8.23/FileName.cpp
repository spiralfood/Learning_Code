//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct people {
//	int ID;
//	long long time;
//};
//people a[1000];
//bool cmp(people p1, people p2) {
//	return p1.time < p2.time;
//}
//int ti[1000];
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		a[i].ID = i + 1;
//		cin >> a[i].time;
//	}
//	sort(a, a + n, cmp);
//	int stime = 0;
//	int sumtime=0;
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i].ID<<" ";
//		stime += a[i].time;
//		ti[i] = stime;
//		sumtime += ti[i];
//	}
//	sumtime -= ti[n - 1];
//	cout << "\n";
//
//	printf("%.2f", 1.0 * sumtime / n);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	float a;
//	cin >> a;
//	cout << a;
//	return 0;
//}

#include<iostream>
#include<algorithm>
using namespace std;
struct activity {
	int start;
	int end;
};
bool cmp(activity a1, activity a2) {
	return a1.end <= a2.end;
}
activity a[1000000];
int main() {
	int n;
	int ans = 0,finish=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].start >> a[i].end;
	}
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		if (finish <= a[i].start) {
			ans++;
			finish = a[i].end;
		}
	}
	cout << ans;
	return 0;
}