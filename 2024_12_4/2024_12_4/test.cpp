//#include<iostream>
//#include<cstring>
//using namespace std;
//int n;
//string s;
//int big[26]; int small[26]; int num[10]; int spe[2];
//int main()
//{
//	cin >> n;
//	while (n--)
//	{
//		cin >> s;
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] >= 'A' && s[i] <= 'Z')
//				big[s[i] - 'A']++;
//			else if (s[i] >= 'a' && s[i] <= 'z')
//				small[s[i] - 'a']++;
//			else if (s[i] >= '0' && s[i] <= '9')
//				num[s[i] - '0']++;
//			else if (s[i] == '*')
//				spe[0]++;
//			else if (s[i] == '#')
//				spe[1]++;
//		}
//		int score2 = 0, score11 = 0, score12 = 0, score13 = 0;
//		for (int i = 0; i < 26; i++)
//		{
//			if (big[i] > 2 || small[i] >2)
//				score2 = 1;
//			if (big[i] > 0 || small[i] > 0)
//				score11++;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			if (num[i] > 2 )
//				score2 = 1;
//			if (num[i]>0 )
//				score12++;
//		}
//		for (int i = 0; i < 2; i++)
//		{
//			if (spe[i] > 2)
//				score2 = 1;
//			if (spe[i]>0)
//				score13++;
//		}
//		if (score2 == 0 && score11 > 0&& score12 > 0 && score13 > 0)
//			cout << "2" << endl;
//		else if (score11 > 0 && score12 > 0 && score13 > 0)
//			cout << "1" << endl;
//		else
//			cout << "0"<<endl;
//		memset(big, 0, sizeof(big));
//		memset(small, 0, sizeof(small));
//		memset(num, 0, sizeof(num));
//		memset(spe, 0, sizeof(spe));
//	}
//
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//string s1; string s2; string test; string max2;
//char swi[63][2];
//int main()
//{
//    getline(cin, s1);
//    int n; cin >> n;
//    string str = "\n";
//    getline(cin, str);
//    for (int i = 0; i < n; i++)
//    {
//        getline(cin, test);
//        //		cout << test;
//        swi[i][0] = test[1];
//        swi[i][1] = test[2];
//    }
//    int m; cin >> m; int max1=0;
//    int k; int k1;
//    while (m--)
//    {
//         cin >> k;
//         k1 = k;
//        s2 = s1;
//        
//            while (k1--) {
//                for (int i = 0; i < s2.size(); i++)
//                {
//                    for (int j = 0; j < n; j++)
//                    {
//                        if (s2[i] == swi[j][0])
//                        {
//                            s2[i] = swi[j][1];
//                            break;
//                        }
//                    }
//                }
//            }
//            if (k1 > max1)
//            {
//                int n = k1 - max1;
//                while (n) {
//                    for (int i = 0; i < max2.size(); i++)
//                    {
//                        for (int j = 0; j < n; j++)
//                        {
//                            if (max2[i] == swi[j][0])
//                            {
//                                max2[i] = swi[j][1];
//                                break;
//                            }
//                        }
//                    }
//                }
//                s2 = max2;
//        }
//        
//        cout << s2 << "\n";
//        if (k > max1)
//        {
//            max1 = k;
//            max2 = s2;
//        }
//
//    }
//    return 0;
//}

