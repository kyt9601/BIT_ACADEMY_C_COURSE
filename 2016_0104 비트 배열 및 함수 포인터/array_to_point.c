#include<stdio.h>
/*
//1�� ����
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

//2�� ����
/*void foo(int (*a)[3],int num);
void woo(int *p,int num);
void goo(int (*a)[3],int num);
void hoo(int (*a)[3] ,int num);
void joo(int (*a)[3] ,int num);
void zoo(int (*a)[3],int num);
void main()
{
	int a[2][3]; int i,j;
	foo(a,1);	//a[0][0] 1  --> a[0][0] ��ġ�� �ѱ��.
	woo(a[2],2);//a[0][1] 2  --> a[2][0] ��ġ�� �ѱ��.
	goo(a+2,3);	//a[0][2] 3  --> a[2][0] ��ġ�� �ѱ��.
	hoo(a,4);	//a[1][0] 4  --> a[0][0] ��ġ�� �ѱ��.
	joo(a,5);	//a[1][1] 5  --> a[0][0] ��ġ�� �ѱ��.
	zoo(a-1,6);	//a[1][2] 6  --> a[-1][0] ��ġ�� �ѱ��.

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d] = %d\n",i,j,a[i][j]);	
		}
	}
}
//1. 2���������ʹ� ���� 2���迭�� �޾Ƶ� �������.
//void foo(int a[2][3],int num){}
//2. 2���迭���� ���� �ּҰ��� �迭�����ͷ� �ްڴ�.
//void foo(int (*a)[3],int num){}
//3. 2���迭���� ���� �ּҰ��� ����Ʈ �迭�� �ްڴ�.
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
	//a[2][0] - > 1024 �ּ�
	//a[0][1] - > 1004 �ּ�
	//*(p-5) = num;
	p[-5] = num;
}
void goo(int (*a)[3],int num)
{
	//a[2][0] - > 1024 �ּ�
	//a[0][2] - > 1008 �ּ�
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