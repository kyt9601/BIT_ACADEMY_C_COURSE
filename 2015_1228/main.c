#include<stdio.h>
/*
void main()
{
	int num=0;
	//scanf("%d",&num);
	printf("%d\n",&num);
}*/
/*//7번문제
void main()
{
	int num1 = 1;
	int num2 = 2;
	int num3;
	num3 = num1;
	num1 = num2;
	num2 = num3;
	printf("%d %d ",num1,num2);
}
*/

/*//10번 문제
void main()
{
	char ch=' ';
	printf("문자를 입력하세요 : ");
	scanf("%c",&ch);
	printf("문자 %c는 %d 번째 입니다.\n",ch,ch-96);
}*/


//조건문

//void main()
//{
	//1. int형 변수 x가 10보다 크고 20보다 작을 때 true인 조건식
	/*int x = 20;
	if(10<x && x<20)
	{
		printf("true\n");
	}*/
	// 2. char형 변수 ch가 공백이나 탭이 아닐 때 true인 조건식
	/*char ch = '\t';
	if(ch != ' ' && ch != '\t')
	{
		printf("true\n");
	}*/
	// 3. char형 변수 ch가 ‘x' 또는 ’X'일 때 true인 조건식
	/*char ch = 'A';
	if(ch == 'x' || ch == 'X')
	{
		printf("true\n");
	}*/
	// 4. char형 변수 ch가 숫자(‘0’~‘9’)일 때 true인 조건식
	/*char ch = '0';
	if(48<=ch && ch<=57)
	{
		printf("true\n");
	}
	if('0'<=ch && ch<='9')
	{
		printf("true\n");
	}*/
	// 5. char형 변수 ch가 영문자(대문자 또는 소문자)일 때 true인 조건식
	/*char ch = '0';
	if(('a'<=ch && ch <= 'z' ) || ( 'A'<=ch && ch <= 'Z' ))
	{
		printf("true\n");
	}*/
//}

//[ 제어문 ]

//1번문제
/*void main()
{
	int num=0;
	scanf("%d",&num);
	if(num%2 == 0)
	{
		printf("even number");
	}
	else
	{
		printf("odd number");
	}

}*/
//2번 문제
/*void main()
{
	int num=0;
	scanf("%d",&num);
	if(num <12 && num >=0)
	{
		printf("오전 %d시 입니다.\n",num)
	}
	else if(num>=12 && num <=23)
	{
		printf("오후 %d시 입니다.\n",num-12);
	}
	else
	{
		printf("잘못 입력하셨습니다.\n");
	}
}*/

//3번문제
/*void main()
{
	char ch = 'C';
	if(ch>='a' && ch <='z')
	{
		printf("%c\n",ch-32);
	}
	else if(ch>='A' && ch <='Z')
	{
		printf("%c\n",ch+32);
	}
	else
	{
		printf("잘못 입력 하셨습니다.");
	}
}*/

//5번 문제
/*void main()
{
	int num=0;
	int num1=0,num2=0;
	int result=0;
	printf("My Calculator\n");
    printf("=========================\n");
    printf("1. 더하기\n");
    printf("2. 빼  기\n");
    printf("3. 곱하기\n ");
    printf("4. 나누기\n ");
	printf("선택하세요 : ");
	scanf("%d",&num);
	
	printf("첫번째 수 : ");
	scanf("%d",&num1);
	printf("두번째 수 : ");
	scanf("%d",&num2);
	
	switch(num)
	{
	case 1: printf("두수의 더한 값 : "); result=num1+num2; break;
	case 2: printf("두수의 뺀 값 : ");result=num1-num2; break;
	case 3: printf("두수의 곱한 값 : ");result=num1*num2; break;
	case 4: printf("두수의 나눈 값 : ");result=num1/num2; break;
	default: printf("잘못 입력하셨습니다.");
	}
	printf("%d\n",result);
}*/

//[ 반복문 ]

//1번 문제
/*void main()
{
	int i;
	for(i=1;i<11;i++)
	{
		printf("for [%d] Hello World~!!\n",i);
	}
	i=1;
	while(i<11)
	{
		printf("while [%d] Hello World~!!\n",i);
		i++;
	}
}*/

//2번 문제

/*void main()
{
	int i;
	int num=0;
	int num1=0;
	printf("반복 횟수를 입력하세요 : ");
	scanf("%d",&num);
	printf("시작한 번호를 입력하세요 : ");
	scanf("%d",&num1);
	for(i=num1;i<=num;i++)
	{
		printf("for [%d] Hello World~!!\n",i);
	}
	i=1;
	while(i<=num)
	{
		printf("while [%d] Hello World~!!\n",i);
		i++;
	}
}*/

//3.번 문제

/*void main()
{
	char ch=' ';
	while(1)
	{
		printf("문자 : ");
		scanf("%c",&ch);
		fflush(stdin);
		if(ch == 'x' || ch == 'X')
		{
			break;
		}
	}
}*/
/*
void main()
{
	char ch=' ';
	while(ch != 'x' && ch != 'X')
	{
		printf("문자 : ");
		scanf("%c",&ch);
		fflush(stdin);
	}
}*/

//4번 문제
/*void main()
{
	int i;
	for(i=1;i<11;i++)
	{
		printf("%d * %d = %d\n",5,i,5*i);
	}
}*/

//5번 문제
/*void main()
{
	int i;
	int num;
	while(1)
	{
		printf("단수를 입력하세요 : ");
		scanf("%d",&num);
		if(num == 0)
		{
			break;
		}
		for(i=1;i<11;i++)
		{
			printf("%d * %d = %d\n",num,i,num*i);
		}
		
	}
}*/


//6번 문제
/*void main()
{
	int num;
	int result=0,count=0;
	
	while(1)
	{
		printf("정수 입력 : ");
		scanf("%d",&num);
		result += num;
		//result = result + num;
		if(num == 0)
		{
			break;
		}
		count++;
	}
	printf("합계 : %d \t 평균 : %f\n",result,(float)result/(float)count);

}*/
//7번 문제
/*void main()
{
	int i;
	int even=0;
	int odd=0;
	int result=0;
	int num=0;
	for(i=1;i<=100;i++)
	{
		result += i;
		if(i%2 == 0)
		{
			even += i;
		}
		else
		{
			odd += i;
		}

		if(i%3 == 0)
		{
			num += i;
		}
	}
	printf("짝수의 합 : %d\n",even);
	printf("홀수의 합 : %d\n",odd);
	printf("3의 배수의 합 : %d\n",num);
	printf("1~100의 합 : %d\n",result);
}*/

//8번 문제
/*void main()
{
	int i;
	for(i=0;i<101; i += 10)
	{
		printf("화씨 %d도는 섭씨 %.1f 이다.\n",i,(float)5/(float)9 * (i-32));
	}
}*/

//9번 문제
/*void main()
{
	int num=0;
	while(1)
	{
		printf("정수 입력 : ");
		scanf("%d",&num);
		if(num <10 || num>=100)
		{
			break;
		}
	}
}*/

//10번 문제
/*void main()
{
	char ch;
	while(1)
	{
		printf("연산기호[+, -, *, /, q] : ");
		scanf("%c",&ch);
		fflush(stdin);
		if(ch == 'q')
		{
			break;
		}
		else if(ch != '+' && ch != '-' && ch != '/' && ch != '*')
		{
			printf("key error !! try again!!\n");
		}
	}
}*/

//11번 문제
/*void main()
{
	int num1=0,num2=0;
	char op;
	int result=0;
	char yn=' ';
	while(1)
	{
		printf("첫번째 정수 : ");
		scanf("%d",&num1);
		printf("두번째 정수 : ");
		scanf("%d",&num2);
		printf("연산 기호 : ");
		fflush(stdin);
		scanf("%c",&op);
		switch(op)
		{
			case '+': result = num1+num2; break;
			case '-': result = num1-num2; break;
			case '/': result = num1/num2; break;
			case '*': result = num1*num2; break;
		}
		printf("결과 값 : %d\n",result);
		
		printf("Continue<y/n>?");
		fflush(stdin);
		scanf("%c",&yn);
		if(yn == 'n' || yn == 'N')
		{
			break;
		}
		else if(yn != 'y' && yn != 'Y')
		{
			while(1)
			{
				printf("잘못 입력하셨습니다.\n");
				printf("Continue<y/n>?");
				scanf("%c",&yn);
				if(yn == 'n' || yn == 'N' || yn != 'y' || yn != 'Y')
				{
					break;
				}
			}
			if(yn == 'n' || yn == 'N')
			{
				break;
			}
		}
	}

}*/

//13번 문제
/*void main()
{
	int i;
	int num=0;
	int result=0;
	printf("1부터 합할 수 : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		result += i;
	}
	printf("결과값 : %d\n",result);
}*/

//14번 문제
/*void main()
{
	int count=0,num1=0,result=0,max=0;
	int i;
	printf("정수의 개수 : ");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		printf("%d번째 정수 :",i+1);
		scanf("%d",&num1);
		result += num1;
		if(max<num1)
		{
			max = num1;
		}
	}
	printf("최대값 : %d \t합 : %d \t 평균 : %.1f\n",max,result,(float)result/(float)count);
   //최대값= 9, 합= 25, 평균= 5.0
}*/

//16번 문제

/*void main()
{
	int start=0,end=0,i,result=0,temp=0;
	printf("시작 값 : ");
	scanf("%d",&start);
	printf("끝 값 : ");
	scanf("%d",&end);
	
	if(start>end)
	{
		temp = start;
		start = end;
		end = temp;
	}
	else if(start == end)
	{
		return;
	}

	for(i=start;i<=end;i++)
	{
		result += i;
	}

	printf("%d-%d까지의 합은 %d입니다.",start,end,result);
}*/

/*void main()
{
	int start=0,end=0,i,result=0,temp=0;
	printf("시작 값 : ");
	scanf("%d",&start);
	printf("끝 값 : ");
	scanf("%d",&end);
	

	if(start == end)
	{
		
	}
	else
	{
		if(start>end)
		{
			temp = start;
			start = end;
			end = temp;
		}
		for(i=start;i<=end;i++)
		{
			result += i;
		}

		printf("%d-%d까지의 합은 %d입니다.",start,end,result);
	}
}*/

/*void main()
{
	int start=0,end=0,i,result=0,temp=0;
	printf("시작 값 : ");
	scanf("%d",&start);
	printf("끝 값 : ");
	scanf("%d",&end);
	
	if(start != end)
	{
		if(start>end)
		{
			temp = start;
			start = end;
			end = temp;
		}
		for(i=start;i<=end;i++)
		{
			result += i;
		}
		printf("%d-%d까지의 합은 %d입니다.",start,end,result);
	}
}
*/
