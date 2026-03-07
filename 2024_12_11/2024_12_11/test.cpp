#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> a;
    a.resize(numRows);
    a[0].push_back(1);
    if (numRows > 1)
    {
        a[1].push_back(1); a[1].push_back(1);
    }
   
    for (int i = 2; i < numRows; i++)
    {
        a[i].resize(numRows+1);
        a[i][0] = 1; a[i][i] = 1;
        for (int j = 1; j < i; j++)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
    return a;
}
int main()
{
    vector<vector<int>> a=generate(1);
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < a[i].size(); j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
        
	return 0;
}