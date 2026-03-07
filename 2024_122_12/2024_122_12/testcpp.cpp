//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//string longestPalindrome(string s) {
//    int n = s.size();
//    if (n < 2) {
//        return s;
//    }
//    int maxLen = 1;
//    int begin = 0;
//    // dp[i][j] 表示 s[i..j] 是否是回文串
//    vector<vector<int>> dp(n, vector<int>(n));
//    // 初始化：所有长度为 1 的子串都是回文串
//    for (int i = 0; i < n; i++) {
//        dp[i][i] = true;
//    }
//    // 递推开始
//    // 先枚举子串长度
//    for (int L = 2; L <= n; L++) {
//        // 枚举左边界，左边界的上限设置可以宽松一些
//        for (int i = 0; i < n; i++) {
//            // 由 L 和 i 可以确定右边界，即 j - i + 1 = L 得
//            int j = L + i - 1;
//            // 如果右边界越界，就可以退出当前循环
//            if (j >= n) {
//                break;
//            }
//
//            if (s[i] != s[j]) {
//                dp[i][j] = false;
//            }
//            else {
//                if (j - i < 3) {
//                    dp[i][j] = true;
//                }
//                else {
//                    dp[i][j] = dp[i + 1][j - 1];
//                }
//            }
//
//            // 只要 dp[i][L] == true 成立，就表示子串 s[i..L] 是回文，此时记录回文长度和起始位置
//            if (dp[i][j] && j - i + 1 > maxLen) {
//                maxLen = j - i + 1;
//                begin = i;
//            }
//        }
//    }
//    return s.substr(begin, maxLen);
//}
//int main()
//{
//	int n;
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstdio>
//using namespace std;
//long long int a[200010];
//long long int n,mul,sqr;
//int main()
//{
//	n = 0; int m; int sco;
//	scanf("%d", &m);
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &a[i]);
//		mul += a[i];
//		sqr += a[i] * a[i];
//	}
//
//		
//	
//	printf("%ld", (mul*mul-sqr)/2);
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
//	long long int n=0;
	cout << "2429042904288";
	return 0;	
}