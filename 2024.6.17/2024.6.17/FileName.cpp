//#include <iostream>
//using namespace std;
//
//int countStrings(int N) {
//    int dp[N + 1][4];
//    // 初始化第一行
//    for (int j = 0; j < 4; ++j) {
//        dp[1][j] = 1;
//    }
//
//    // 计算后续行
//    for (int i = 2; i <= N; ++i) {
//        dp[i] = dp[i - 1] + dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3]; // 可以添加任何数字
//        dp[i][1] = dp[i - 1] + dp[i - 1][1] + dp[i - 1][2]; // 只能添加除1以外的数字
//        dp[i][2] = dp[i - 1] + dp[i - 1][1]; // 只能添加除1以外的数字
//        dp[i][3] = dp[i - 1]; // 只能添加除1以外的数字
//    }
//
//    // 计算总和
//    int total = 0;
//    for (int j = 0; j < 4; ++j) {
//        total += dp[N][j];
//    }
//    return total;
//}
//
//int main() {
//    int N;
//    cin >> N;
//    cout << countStrings(N) << endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int cal(int n)
//{
//	int num = n;
//	for (int i = 2; i * i <= n; i++)
//	{
//		if (n % i == 0)
//			num = n * (i - 1) / i;
//		while (n % i == 0)
//		{
//			n /= i;
//		}
//	}
//	if (n > 1)
//		num = num * (n - 1) / n;
//	return num;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	cout << cal(n);
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (1)
	{
		cin >> s;
		int len = s.size();
		cout << len * (len + 1) / 2 + 1<<"\n";
	}
	return 0;
}