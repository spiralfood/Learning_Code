#include <iostream>
#include <vector>
using namespace std;

//const int MOD = 1e9 + 7;
//const int MAX_N = 20;
//
//// 定义状态
//long long dp[MAX_N + 1][6][6];
//
//int main() {
//    int N;
//    cin >> N;
//
//    // 初始化状态
//    for (int j = 0; j <= 5; ++j) {
//        for (int k = 0; k <= 5; ++k) {
//            dp[1][j][k] = 1;
//        }
//    }
//
//    // 填充动态规划表
//    for (int i = 2; i <= N; ++i) {
//        for (int j = 0; j <= 5; ++j) {
//            for (int k = 0; k <= 5; ++k) {
//                for (int l = 1; l <= 5; ++l) {
//                    if (l == 1 && j == 1 && k == 1) continue; // 避免四个连续的1
//                    dp[i][j][k] = (dp[i][j][k] + dp[i - 1][(l == 1 ? 0 : l)][j]) % MOD;
//                }
//            }
//        }
//    }
//
//    // 计算最终答案
//    long long ans = 0;
//    for (int j = 0; j <= 5; ++j) {
//        for (int k = 0; k <= 5; ++k) {
//            ans = (ans + dp[N][j][k]) % MOD;
//        }
//    }
//
//    cout << ans << endl;
//
//    return 0;
//}
int main() {
    int value = 5;
    int* ptr = &value;
    int*& refPtr = ptr;
    (*ptr)++;
    std::cout << value << std::endl;
    (*refPtr)++;
    std::cout << value << std::endl;
    return 0;
}