//#include<iostream>
//#include<cstring>
//using namespace std;
//int main()
//{
//	int m, i;
//	char arr[1000];
//	char brr[1000];
//	memset(arr, '0', sizeof(arr));
//	memset(brr, '0', sizeof(brr));
//	cin >> arr>>brr;
//	for (m = 999; m >= 0; m--)
//	{
//		if (arr[m] == '\0')
//		{
//			arr[m] = '0';
//			m--;
//			break;
//		}
//	}
//	for (i = 999; i >= 0; i--)
//	{
//		if (brr[i] == '\0')
//		{
//			brr[i] = '0';
//			i--;
//			break;
//		}
//	}
//	int i1 = i;
//	int m1 = m;
//	if (i > m)
//	{
//		for (; i >= 0; i--)
//		{
//			brr[i] = brr[i] + arr[m]  - '0';
//			if (brr[i] > '9'&&i!=0)
//			{
//				brr[i-1] +=1;
//				brr[i] -= 10;
//			}
//			if (brr[i] > '9' && i == 0)
//			{
//				brr[i] -= 10;
//				cout << "1";
//			}
//			if (m > 0)
//				m--;
//			else if (m == 0)
//			{				
//				for (i = i1; i>=0; i--)
//				{
//					if (brr[i] > '9' && i != 0)
//					{
//						brr[i - 1] += 1;
//						brr[i] -= 10;
//					}
//					if (brr[i] > '9' && i == 0)
//					{
//						brr[i] -= 10;
//						cout << "1";
//					}
//					cout << brr[i1-i];
//				}
//				break;
//			}
//		}
//		
//	}
//	else if (i <= m)
//	{
//		for (; m >= 0; m--)
//		{
//			arr[m] = arr[m] + brr[i]  - '0';
//			if (arr[m] > '9' && m != 0)
//			{
//				arr[m - 1] += 1;
//				arr[m] -= 10;
//			}
//			if (arr[m] > '9' && m == 0)
//			{
//				arr[m] -= 10;
//				cout << "1";
//			}
//			if (i > 0)
//				i--;
//			else if (i == 0)
//			{
//				for (m = 0; m <= m1; m++)
//					cout << arr[m];
//				break;
//			}
//		}
//		
//		
//	}
//	
//	
//	return 0;
//}
////#include<iostream>
////#include<cstring>
////using namespace std;
////int main()
////{
////	char a = '1';
////	char b = '2';
////	char c = a + b - '0';
////	cout << c;
////	return 0;
///
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main()
//{
//	int j;
//	int A[3000] = {0};
//	int B[3000] = {0};
//	string a, b;
//	cin >> a >> b;
//	unsigned int len = max(a.length() - 1, b.length() - 1);
//	for (int i = a.length() - 1, j = 0; i >= 0; i--, j++)
//		A[j] = a[i]-'0';
//	for (int i = b.length() - 1, j = 0; i >= 0; i--, j++)
//		B[j] = b[i]-'0';
//	for (int i = 0; i <= len; i++)
//	{
//		A[i] *= B[i];
//		if (A[i] >= 10)
//		{
//			
//			A[i + 1] += A[i]/10;
//			A[i] %= 10;
//		}
//	}
//	if (A[len + 1])
//		len += 1;
//	for (int i = len; i >= 0; i--)
//		cout << A[i];
//	return 0;
//}
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int j;
	int A[3000] = { 0 };
	int B[3000] = { 0 };
	int C[3000] = {0};
	string a, b;
	cin >> a >> b;
	unsigned int len = max(a.length() - 1, b.length() - 1);
	for (int i = a.length() - 1, j = 0; i >= 0; i--, j++)
		A[j] = a[i] - '0';
	for (int i = b.length() - 1, j = 0; i >= 0; i--, j++)
		B[j] = b[i] - '0';
	for (int i=0;i<=len;i++)
	{
		for (int k = 0; k <= len; k++)
		{
			C[k+i] += A[i] * B[k];
			C[k + i+1] += C[k+i] / 10;
			C[k+i] %= 10;
		}
	}
	if (C[a.length()+b.length()])
		len = a.length() + b.length();
	else
		len = a.length() + b.length() - 1;
	if (C[len - 1])
	{
		for (int i = len - 1; i >= 0; i--)
			cout << C[i];
	}
	else
		cout << "0";
	
	return 0;
}