#include<stdio.h>
/*
void foo(int a);
void main()
{
	int a = 10;
	foo(a);
}
void foo(int a)
{
	printf("%d\n",num);
}*/



/*
void foo(int a);
void main()
{
	void (*p)(int);
	p = foo;
	p(10);
}
void foo(int a)
{
	printf("%d\n",a);
}*/
/*
int add(int a,int b);
int minus(int a,int b);
void main()
{
	int result;
	int (*p)(int,int);
	p = add;
	result = p(10,20);
	printf("渦и高 : %d\n",result);
	p = minus;
	result = p(10,20);
	printf("賓 高 : %d\n",result);
}
int add(int a,int b)
{
	return a+b;
}
int minus(int a,int b)
{
	return a-b;
}*/
/*
int add(int a,int b);
int minus(int a,int b);
void main()
{
	int result;
	int (*p[2])(int,int);
	p[0] = add;
	result = p[0](10,20);
	printf("渦и高 : %d\n",result);
	p[1] = minus;
	result = p[1](10,20);
	printf("賓 高 : %d\n",result);
}
int add(int a,int b)
{
	return a+b;
}
int minus(int a,int b)
{
	return a-b;
}
*/

int *p();
void main()
{
	int a[] = foo();
}
int *p()
{
	int a[5];
	return a;
}
