#include<stdio.h>
/*
void main()
{
	int num=0;
	//scanf("%d",&num);
	printf("%d\n",&num);
}*/
/*//7������
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

/*//10�� ����
void main()
{
	char ch=' ';
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c",&ch);
	printf("���� %c�� %d ��° �Դϴ�.\n",ch,ch-96);
}*/


//���ǹ�

//void main()
//{
	//1. int�� ���� x�� 10���� ũ�� 20���� ���� �� true�� ���ǽ�
	/*int x = 20;
	if(10<x && x<20)
	{
		printf("true\n");
	}*/
	// 2. char�� ���� ch�� �����̳� ���� �ƴ� �� true�� ���ǽ�
	/*char ch = '\t';
	if(ch != ' ' && ch != '\t')
	{
		printf("true\n");
	}*/
	// 3. char�� ���� ch�� ��x' �Ǵ� ��X'�� �� true�� ���ǽ�
	/*char ch = 'A';
	if(ch == 'x' || ch == 'X')
	{
		printf("true\n");
	}*/
	// 4. char�� ���� ch�� ����(��0��~��9��)�� �� true�� ���ǽ�
	/*char ch = '0';
	if(48<=ch && ch<=57)
	{
		printf("true\n");
	}
	if('0'<=ch && ch<='9')
	{
		printf("true\n");
	}*/
	// 5. char�� ���� ch�� ������(�빮�� �Ǵ� �ҹ���)�� �� true�� ���ǽ�
	/*char ch = '0';
	if(('a'<=ch && ch <= 'z' ) || ( 'A'<=ch && ch <= 'Z' ))
	{
		printf("true\n");
	}*/
//}

//[ ��� ]

//1������
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
//2�� ����
/*void main()
{
	int num=0;
	scanf("%d",&num);
	if(num <12 && num >=0)
	{
		printf("���� %d�� �Դϴ�.\n",num)
	}
	else if(num>=12 && num <=23)
	{
		printf("���� %d�� �Դϴ�.\n",num-12);
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
}*/

//3������
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
		printf("�߸� �Է� �ϼ̽��ϴ�.");
	}
}*/

//5�� ����
/*void main()
{
	int num=0;
	int num1=0,num2=0;
	int result=0;
	printf("My Calculator\n");
    printf("=========================\n");
    printf("1. ���ϱ�\n");
    printf("2. ��  ��\n");
    printf("3. ���ϱ�\n ");
    printf("4. ������\n ");
	printf("�����ϼ��� : ");
	scanf("%d",&num);
	
	printf("ù��° �� : ");
	scanf("%d",&num1);
	printf("�ι�° �� : ");
	scanf("%d",&num2);
	
	switch(num)
	{
	case 1: printf("�μ��� ���� �� : "); result=num1+num2; break;
	case 2: printf("�μ��� �� �� : ");result=num1-num2; break;
	case 3: printf("�μ��� ���� �� : ");result=num1*num2; break;
	case 4: printf("�μ��� ���� �� : ");result=num1/num2; break;
	default: printf("�߸� �Է��ϼ̽��ϴ�.");
	}
	printf("%d\n",result);
}*/

//[ �ݺ��� ]

//1�� ����
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

//2�� ����

/*void main()
{
	int i;
	int num=0;
	int num1=0;
	printf("�ݺ� Ƚ���� �Է��ϼ��� : ");
	scanf("%d",&num);
	printf("������ ��ȣ�� �Է��ϼ��� : ");
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

//3.�� ����

/*void main()
{
	char ch=' ';
	while(1)
	{
		printf("���� : ");
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
		printf("���� : ");
		scanf("%c",&ch);
		fflush(stdin);
	}
}*/

//4�� ����
/*void main()
{
	int i;
	for(i=1;i<11;i++)
	{
		printf("%d * %d = %d\n",5,i,5*i);
	}
}*/

//5�� ����
/*void main()
{
	int i;
	int num;
	while(1)
	{
		printf("�ܼ��� �Է��ϼ��� : ");
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


//6�� ����
/*void main()
{
	int num;
	int result=0,count=0;
	
	while(1)
	{
		printf("���� �Է� : ");
		scanf("%d",&num);
		result += num;
		//result = result + num;
		if(num == 0)
		{
			break;
		}
		count++;
	}
	printf("�հ� : %d \t ��� : %f\n",result,(float)result/(float)count);

}*/
//7�� ����
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
	printf("¦���� �� : %d\n",even);
	printf("Ȧ���� �� : %d\n",odd);
	printf("3�� ����� �� : %d\n",num);
	printf("1~100�� �� : %d\n",result);
}*/

//8�� ����
/*void main()
{
	int i;
	for(i=0;i<101; i += 10)
	{
		printf("ȭ�� %d���� ���� %.1f �̴�.\n",i,(float)5/(float)9 * (i-32));
	}
}*/

//9�� ����
/*void main()
{
	int num=0;
	while(1)
	{
		printf("���� �Է� : ");
		scanf("%d",&num);
		if(num <10 || num>=100)
		{
			break;
		}
	}
}*/

//10�� ����
/*void main()
{
	char ch;
	while(1)
	{
		printf("�����ȣ[+, -, *, /, q] : ");
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

//11�� ����
/*void main()
{
	int num1=0,num2=0;
	char op;
	int result=0;
	char yn=' ';
	while(1)
	{
		printf("ù��° ���� : ");
		scanf("%d",&num1);
		printf("�ι�° ���� : ");
		scanf("%d",&num2);
		printf("���� ��ȣ : ");
		fflush(stdin);
		scanf("%c",&op);
		switch(op)
		{
			case '+': result = num1+num2; break;
			case '-': result = num1-num2; break;
			case '/': result = num1/num2; break;
			case '*': result = num1*num2; break;
		}
		printf("��� �� : %d\n",result);
		
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
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
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

//13�� ����
/*void main()
{
	int i;
	int num=0;
	int result=0;
	printf("1���� ���� �� : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		result += i;
	}
	printf("����� : %d\n",result);
}*/

//14�� ����
/*void main()
{
	int count=0,num1=0,result=0,max=0;
	int i;
	printf("������ ���� : ");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		printf("%d��° ���� :",i+1);
		scanf("%d",&num1);
		result += num1;
		if(max<num1)
		{
			max = num1;
		}
	}
	printf("�ִ밪 : %d \t�� : %d \t ��� : %.1f\n",max,result,(float)result/(float)count);
   //�ִ밪= 9, ��= 25, ���= 5.0
}*/

//16�� ����

/*void main()
{
	int start=0,end=0,i,result=0,temp=0;
	printf("���� �� : ");
	scanf("%d",&start);
	printf("�� �� : ");
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

	printf("%d-%d������ ���� %d�Դϴ�.",start,end,result);
}*/

/*void main()
{
	int start=0,end=0,i,result=0,temp=0;
	printf("���� �� : ");
	scanf("%d",&start);
	printf("�� �� : ");
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

		printf("%d-%d������ ���� %d�Դϴ�.",start,end,result);
	}
}*/

/*void main()
{
	int start=0,end=0,i,result=0,temp=0;
	printf("���� �� : ");
	scanf("%d",&start);
	printf("�� �� : ");
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
		printf("%d-%d������ ���� %d�Դϴ�.",start,end,result);
	}
}
*/
