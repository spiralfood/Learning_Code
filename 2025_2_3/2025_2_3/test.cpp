//#include<iostream>
//using namespace std;
//int main()
//{
//	const char* str = "1111111";
//	int b = 1;
//	const int* a = &b;
//	cout << (void*)str;
//	return 0;
//}


#include<iostream>
using namespace std;

class date{
public:
	void print();
	date(int _year, int _month, int _day)
	{
		year = _year, month = _month, day = _day;
	}
	

	int year;
	int month;
	int day;
};
void date::print() {
	cout << year << " " << month << " " << day;
}

bool operator==(date&a1, date&a2)
{
	if (a1.day == a2.day && a2.month == a1.month && a1.year == a2.year)
		return true;
	else return false;
}
int main()
{
	date d1(2024, 11, 11);
	date d2(2024, 11, 11);
	bool ret = d1 == d2;
	cout << ret;
}











