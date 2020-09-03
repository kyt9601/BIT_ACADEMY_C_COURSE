/*#include <stdio.h>

int insert_num();
char insert_op();
int result_select(int num1,int num2,char op);

void main()
{
	int num1,num2;
	char op;
	int result=0;
	num1 = insert_num();
	num2 = insert_num();
	op = insert_op();
	
	result = result_select(num1,num2,op);

	printf("결과값 : %d\n",result);
}
int insert_num()
{
	int num1;
	printf("정수를 입력하세요 : ");
	scanf("%d",&num1);
	return num1;
}
char insert_op()
{
	char op;
	printf("연산자를 입력하세요 : ");
	fflush(stdin);
	scanf("%c",&op);
	return op;
}

int result_select(int num1,int num2,char op)
{
	int result=0;
	switch(op)
	{
	case '+': result = num1+num2; break;
	case '-': result = num1-num2; break;
	case '*': result = num1*num2; break;
	case '/': result = num1/num2; break;
	}
	return result;
}*/

