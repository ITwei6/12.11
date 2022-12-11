#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//
//	int year, month, week;
//	scanf("%4d%2d%2d", &year, &month, &week);
//	printf("year=%4d\n", year);
//	printf("month=%2d\n", month);
//	printf("week=%2d\n", week);
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("a=%d,b=%d", &a, &b);
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//int main()
//{
//
//	char a;
//	scanf("%c", &a);
//	printf("%d", a);
//	return 0;
//}¡°(-8+22)¡Áa-10+c¡Â2¡±£¬ÆäÖÐ£¬a = 40£¬c = 212¡£
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int d;
//	d = (-8 + 22) * a - 10 + c / 2;
//	printf("%d", d);
//
//	return 0;
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d", &a, &b);
//	c = a / b;
//	d = a % b;
//	printf("%d %d", c, d);
//
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0;i < 4;i++)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	
//	return 0;
//}
//int main()
//{
//	unsigned int a, b;
//	int n, m;
//	int x, y;
//	int p, q;
//	scanf("%d%d", &a, &b);
//	int sum = a + b;
//	if (a >= 100)
//	{   
//		n = a % 10;
//		a = a / 10;
//		m = a % 10;
//		a = m * 10 + n;
//
//	}
//	if (b >= 100)
//	{
//		x = b % 10;
//		b = b / 10;
//		y = b % 10;
//		b = y * 10 + x;
//	}
//	if (sum>=100)
//	{
//		p = sum % 10;
//		sum = sum / 10;
//		q = sum % 10;
//		sum = q * 10 + p;
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//
//	double n;
//	scanf("%lf", &n);
//	int x = ((int)n) % 10;
//	printf("%d", x);
//	return 0;
//}3.156¡Á107 s
//#include <math.h>
//int main()
//{
//	int age;
//	scanf("%d", &age);
//	long long sum;
//	sum = age*3.156*pow(10, 7);
//	printf("%ld", sum);
//	return 0;
//}i
int main()
{
	int seconds;
	scanf("%d", &seconds);
	int t, m, s;
	t = seconds / 3600;
	m = seconds % 3600 / 60;
	s=seconds % 3600 % 60;
	printf("%d %d %d", t, m, s);

	return 0;
}