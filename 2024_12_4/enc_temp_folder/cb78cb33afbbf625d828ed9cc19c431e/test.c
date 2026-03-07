#include<stdio.h>
int main()
{
	int a = 1, b = 2, n = 1, flag = 1, m;
	double s = 0, c;
	for (n; n <= 20; n++)
	{
		c = (double)a / b * flag;
		s = s + c;
		flag = -flag;
		m = a;
		a = a + b;
		m = m + b;
	}
	printf("%lf", s);
}