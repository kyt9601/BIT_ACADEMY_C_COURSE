#include<stdio.h>
/*
//1차 문제
void foo(int *p);
void woo(int *p);
void goo(int *p);
void hoo(int *p);
int joo(int num);
void main()
{
	int a[5];
	int *p = a; int i;
	foo(p);		//a[0] 1
	woo(p+3);	//a[1] 2
	goo(p+2);	//a[2] 3
	hoo(p);		//a[3] 4
	p[4] = joo(p[2]);	//a[4] 5

	for(i=0;i<5;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}

void foo(int *p)
{
	//*p = 1;
	//p[0] = 1;
	*(p+0) = 1;
}
void woo(int *p)
{
	//*(p-2) = 2;
	p[-2] = 2;
}

void goo(int *p)
{
	
	//*p = 3;
	//*(p+0) = 3
	p[0] = 3;
}

void hoo(int *p)
{
	*(p+3) = 4;
	//p[3] = 4;
}

int joo(int num)
{
	return num+2;
}*/

//2차 문제
/*void foo(int (*a)[3],int num);
void woo(int *p,int num);
void goo(int (*a)[3],int num);
void hoo(int (*a)[3] ,int num);
void joo(int (*a)[3] ,int num);
void zoo(int (*a)[3],int num);
void main()
{
	int a[2][3]; int i,j;
	foo(a,1);	//a[0][0] 1  --> a[0][0] 위치를 넘긴다.
	woo(a[2],2);//a[0][1] 2  --> a[2][0] 위치를 넘긴다.
	goo(a+2,3);	//a[0][2] 3  --> a[2][0] 위치를 넘긴다.
	hoo(a,4);	//a[1][0] 4  --> a[0][0] 위치를 넘긴다.
	joo(a,5);	//a[1][1] 5  --> a[0][0] 위치를 넘긴다.
	zoo(a-1,6);	//a[1][2] 6  --> a[-1][0] 위치를 넘긴다.

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d] = %d\n",i,j,a[i][j]);	
		}
	}
}
//1. 2차에서부터는 같은 2차배열로 받아도 상관없다.
//void foo(int a[2][3],int num){}
//2. 2차배열에서 오는 주소값을 배열포인터로 받겠다.
//void foo(int (*a)[3],int num){}
//3. 2차배열에서 오는 주소값을 포인트 배열로 받겠다.
//void foo(int *a[2],int num){}

void foo(int (*a)[3],int num)
{
	//a[0][0] = num;
	//*(a[0]+0) = num;
	//*(*(a+0)+0) = num;
	**a = num;
}
void woo(int *p,int num)
{
	//a[2][0] - > 1024 주소
	//a[0][1] - > 1004 주소
	//*(p-5) = num;
	p[-5] = num;
}
void goo(int (*a)[3],int num)
{
	//a[2][0] - > 1024 주소
	//a[0][2] - > 1008 주소
	//a[-2][+2] = num;
	a[0][-4] = num;
	// *(*(a-2)+2) = num;
	// *(a[-2]+2) = num;
	// *(*(a-2))[2] = num;
	// *(*a-4) = num;
	// (*a)[-4] = num;
	// a[0][-4] = num;
}
void hoo(int (*a)[3] ,int num)
{
	//a[1][0] = num;
	**(a+1) = num;
}
void joo(int (*a)[3] ,int num)
{
	a[1][1] = num;
}
void zoo(int (*a)[3],int num)
{
	a[2][2] = num;
}*/