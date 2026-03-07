//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	int size1 = 0;
//	int size2 = 0;
//	int i;
//	char data[3000*25];
//	memset(data, '\0', sizeof(data));
//	char a;
//	for (i = 0; i < 3000*25; i++)
//	{
//		cin >> a;
//		data[i] = a;
//		if (a == 'E')
//			break;
//	}
//	for (i = 0; i < 3000*25; i++)
//	{
//		if (data[i] == 'W')
//			size1++;
//		if (data[i] == 'L')
//			size2++;
//		if ((size1>= 11&&size1-size2>=2 )|| (size2 >= 11 && size2 - size1 >= 2))
//		{		
//			cout << size1 << ":" << size2<<"\n";
//			size1 = 0;
//			size2 = 0;
//		}
//	//	if(size==11||i+1-)
//		if (data[i] == 'E')
//			break;
//	}
//	cout << size1 << ":" <<  size2<<"\n\n";
//	size1 = 0;
//	size2 = 0;
//	for (i = 0; i < 3000*25; i++)
//	{
//		if (data[i] == 'W')
//			size1++;
//		if (data[i] == 'L')
//			size2++;
//		if ((size1 >= 21 && size1 - size2 >= 2) || (size2 >= 21 && size2 - size1 >= 2))
//		{
//			cout << size1 << ":" << size2 << "\n";
//			size1 = 0;
//			size2 = 0;
//		}
//		//	if(size==11||i+1-)
//		if (data[i] == 'E')
//			break;
//	}
//	cout << size1 << ":" << size2;
//	return 0;
//}
//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	char arr[100+2][100+2];
//	int brr[100 + 2][100 + 2];
//	memset(arr, '\0', sizeof(arr));
//	memset(brr, 0, sizeof(brr));
//	int m, n;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> arr[i][j];
//			if (arr[i][j] == '*')
//				brr[i][j] = 1;
//			if (arr[i][j] == '?')
//				brr[i][j] = 0;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (arr[i][j] == '*')
//				cout << arr[i][j];
//			else
//			{
//				cout << brr[i - 1][j - 1] + brr[i - 1][j] + brr[i - 1][j + 1] + brr[i][j - 1] + brr[i][j + 1] + brr[i+1][j - 1] + brr[i + 1][j] + brr[i + 1][j + 1];
//			}
//		}
//		cout << "\n";
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	cout << a + b;

}