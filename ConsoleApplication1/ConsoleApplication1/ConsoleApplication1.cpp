#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 0, M = 0;
    cin >> N >> M;
    vector<vector<int> > warehouse(N + 1, vector<int>(M));
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> warehouse[i][j];
        }
    }
    for (int i = 1; i <= N; i++) {
        int res = 0;
    }

}