#include<iostream>
using namespace std;
int maxn, sum[110][110], a[110][110];
int main()
{
	int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + a[i][j];
        }
    }
  /*  for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cout << sum[i][j]<<" ";
        cout << "\n";
    }*/
    //这是另一种求前缀和方法，这种不用容斥原理:先对列前缀和，然后对行前缀和
    /*
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++)sum[i][j]=sum[i-1][j]+a[i][j];
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            sum[i][j]=sum[i][j-1]+sum[i][j];
        }
    }
    */
    int maxn = -1e9;
    for (int x1 = 1; x1 <= n; x1++) {
        for (int y1 = 1; y1 <= m; y1++) {
            for (int x2 = x1; x2 <= n; x2++) {
                for (int y2 = y1; y2 <= m; y2++) {
                    int now = sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2] + sum[x1 - 1][y1 - 1];
                    maxn = max(maxn, now);
                } 
            }
        }
    }
    cout << maxn;
	return 0;
}