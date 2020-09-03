#include<stdio.h>
/*
void main()
{
	int a = 10;
	int *p = &a;

	printf("a = %d\n",a);
	printf("&a = %d\n",&a);
	printf("p = %d\n",p);
	printf("&p = %d\n",&p);
	printf("*p = %d\n",*p);
	//배열첨자를 써도 첨자 자체는 차수를 내리는 역활을 
	//하기 때문에 배열이든 포인터든 아무거나 사용해도된다.
	printf("p[0] = %d\n",p[0]);
// *p == p[0] == *(p+0)

}*/

/*void main()
{
	int a = 10;
	int *p = &a;
	*p = 20;
	printf("%d\n",a);
	printf("%d\n",*p);
}*/

//일반 swap함수 
/*void swap(int num1,int num2);
void main()
{
	int a = 10;
	int b = 20;
	printf("a = %d  b = %d\n",a,b);
	swap(a,b);
	printf("a = %d  b = %d\n",a,b);
}

void swap(int num1,int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("swap   num1 = %d  num2 = %d\n",num1,num2);
}*/

//주소값을 사용한 swap 함수
/*void swap(int *num1,int *num2);
void main()
{
	int a = 10;
	int b = 20;
	printf("a = %d  b = %d\n",a,b);
	swap(&a,&b);
	printf("a = %d  b = %d\n",a,b);
}

void swap(int *num1,int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	printf("swap num1 = %d  num2 = %d\n",*num1,*num2);
}*/

void main()
{
	int num[5] = {1,2,3,4,5};
	int *p;
	p = num;
	printf("num = %d\n",num);
	printf("p = %d\n",p);
	printf("p+1 = %d\n",p+1);
	printf("num+1 = %d\n",num+1);
	printf("p+1 = %d\n",*p+1);
	printf("p+1 = %d\n",*(p+1));
}

