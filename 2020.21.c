#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

//#define A 4+5
//#define B A*A
	/*int func(int i,int j)
	{
		if (i <= 0 || j <= 0)
			return 1;
		return 2 * func(i - 3,j / 2);
	}
*/
//void fun()
//{
//	int a = 100;int b = 200;
//}

//struct HAR{ int x, y; struct HAR *p; }h[2];
//int fun(int n)
//{
//	if (n)
//	return fun(n - 1) + n;
//	else return n;
//}

//int fun(int x, int y)
//{
//	if (x == y)
//		return (x);
//	else return ((x + y) / 2);
//}
//#define N 2
//#define M N+1
//#define NUM (M+1)*M/2

//int func(int a)
//{
	
	/*int b;
	switch (a)
	{
	       case 1:b = 30;
		   case 2:b = 20;
		   case 3:b = 16;
		   default:b = 0;
	}
	return b;
}*/

//float func(float a, int b)
//{
//	float m = 1, n = 1;
//	int i;
//	for (i = 1; i < b; i++)
//	{
//		m *= a / i;
//		n += m;
//	}
//	return n;
//}
int main()
{
	char *p = "abcdefgh", *r;
	long *q;
	q = (long*)p;
	q++;
	r = (char*)q;
	printf("%s", r);
	//char str[] = "ABCD", *p = str;
	//printf("%d\n", *(p + 4));
	//printf("%d", func(2.225,3.22));

	/*int n = 2;
	n += n -= n*n;
	printf("%d",n );
*/

	//printf("%d", func(1));
	//printf("%d", NUM);
	//int a = 4, b = 5, c = 6;
	//printf("%d\n", fun(2 * a, fun(b, c)));


	//printf("%d", fun(4));

	/*h[0].x = 1; h[0].y = 2;
	h[1].x = 3; h[1].y = 4;
	h[0].p = &h[1]; h[1].p = h;
	printf("%d%d\n", (h[0].p)->x, (h[1].p)->y);

*/
	/*
	int a = 5, b = 7;
	fun();
	printf("%d%d", a, b);*/

	/*char s[] = "abcfefgh",*p=s;
	p += 3;
	printf("%d", strlen(strcpy(p, "ABhgiughCD")));
*/
	//int a; int b;
	//scanf("%d%d", &a, &b);
	//if (a > b){ a = b; b = a; }
	//else a++; b++;
	//printf("%d%d", a, b);

	//int a = 1;int b = 2;
	//for (; a < 8; a++)
	//{
	//	b += a; a += 2;
	//}
	//printf("%d%d\n", a, b);

	//int a[] = { 2, 4, 6, 8 }, *p = a, i;
	////int *p;
	////p = a;
	////int i;
	//for (i = 0; i < 4; i++)
	//{
	//	a[i] = *p++;
	//}
	//printf("%d", a[2]);


	//printf("%d", func(15, 20));
	/*int j = B*B;
	printf("%d", j);*/

	//int a[] = { 2, 4, 6, 8, 10 };
	//int *p;
	//int **k;
	//p = a;
	//k = &p;
	//printf("%d\n", *p);
	//p++;
	//printf("%d\n", **k);

	//short i = 65537;
	//int j = i + 1;
	//printf("i=%d j=%d", i, j);
	/*int a = 10;
	for (;;)
	{
		a++;
	}
	printf("%d", a);*/

	/*int a = 0; int i = 0;
	while (i < 20)
	{
		for (;;)
		{
			if ((i % 10 )== 0)break;
			else  i--;
		}
		i += 11; a += i;
	}
	printf("%d", i);*/


	system("pause");
	return 0;
}