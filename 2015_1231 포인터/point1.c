#include<stdio.h>

/*void main()
{
	int arr[3];
	int  *p = arr;
	int i;
	//�Ϲ� �迭�� �Է¹޴� ���
	for(i=0;i<3;i++)
	{
		printf("%d��° �Է�:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n",arr[i]);
	}
	//�迭�� �ƴ� �����͸� ������ �Է��� �޴� ���
	for(i=0;i<3;i++)
	{
		printf("%d��° �Է�:",i);
		scanf("%d",p+i);
	}
	for(i=0;i<3;i++)
	{
		//printf("%d\n",arr[i]);
		printf("%d\n",*(p+i));
	}
}*/
/*
void main()
{
	char string[]="Language!";  
	printf("%c\n",string[0]		);//L
	printf("%c\n",*string		);//L
	printf("%c\n",string[9]		);//'\0'
	//printf("%c\n",string[33]	);//�迭 ��ġ�� ���� ���� �ʴ´�.
	printf("%c\n",*(string +8)	);//!
	printf("%s\n",string		);//%s �� ���  
	printf("%c %d\n",string[9],string[9]		);//%d �� ���  
	printf("%d\n",&string[0]	);//%d �� ���  
}*/

/*
void main()
{
	int a = 10;
	int *p = &a;
	int **dp = &p;
	//int **dp1 = &a;  ���� ���̰� �����ϱ� ������ �Ұ����ϴ�.
	printf("a = %d\n",a);
	printf("&a = %d\n",&a);
	printf("p = %d\n",p);
	printf("&p = %d\n",&p);
	printf("dp = %d\n",dp);
	printf("*dp = %d\n",*dp);
	printf("**dp = %d\n",**dp);
}*/

/*void main()
{
	int a = 10;
	int b = 20;
	int *p = &a;
	int **dp = &p;
	//int **dp1 = &a;  ���� ���̰� �����ϱ� ������ �Ұ����ϴ�.
	printf("a = %d\n",a);
	printf("&a = %d\n",&a);
	printf("b = %d\n",b);
	printf("&b = %d\n",&b);
	printf("p = %d\n",p);
	printf("&p = %d\n",&p);
	printf("dp = %d\n",dp);
	printf("*dp = %d\n",*dp);
	printf("**dp = %d\n",**dp);
	printf("======= ���� �� =========\n");
	**dp = 30;
	printf("a = %d\n",a);
	*dp = &b;
	printf("**dp = %d\n",**dp);
}*/
/*
void main()
{
	int a = 10;
	int *p = &a;
	int **dp = &p;
	int ***tdp = &dp;
	printf("tdp = %d\n",tdp);
	printf("*tdp = %d\n",*tdp);
	printf("**tdp = %d\n",**tdp);
	printf("***tdp = %d\n",***tdp);

}*/
//���� ������ ��� ������Ÿ�Ե��� ���� ������ �ִ�.
/*void main()
{
	int a = 10;
	int * p = &a;
	void * v = p;
	printf("%d\n",*(int*)v);
	char a = 'a';
	char * p = &a;
	void * v = p;
	printf("%d\n",*(char*)v);
}*/


//�迭 ������
/*void main()
{
	int a[2][2];
	int (*p)[2] = a;
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("p[%d][%d] �Է� : ",i,j);
			scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("p[%d][%d] = %d\n",i,j,p[i][j]);
		}
	}
}*/

/*
//�迭����Ʈ�� ���� ������ �迭 ���� ������ ���߱� ������
//�ּҰ��� ��ġ�� ���̰� ���� �ȴ�.
void main()
{
	int a[2][2];
	int (*p)[3] = a;
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("&a[%d][%d] = %d\n",i,j,&a[i][j]);
			printf("&p[%d][%d] = %d\n",i,j,&p[i][j]);
		}
	}
}*/


/*void main()
{
	//�迭�� ������ �迭�������� ������ ���߱� �ʾ�
	//�ּҰ��� ��ġ�� Ʋ�� ���� ����
	int a[2][2];
	int (*p)[3] = a;
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("p[%d][%d] �Է� : ",i,j);
			scanf("%d",&p[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a[%d][%d] = %d\n",i,j,a[i][j]);
		}
	}
}*/
/*
void main()
{
	char *ptr[]={"red", "orange", "pink", "white",
					"blue", "brown", "black", "gray"};    
	printf("%c\n",**ptr);				//r
	printf("%s\n",ptr[1]);				//orange
	printf("%s\n",ptr[1]+3);			//nge
	printf("%c\n",*(*(ptr+1)+1));		//r
	printf("%c\n",(*(*(ptr+2)+1)));		//i
	printf("%c\n",*(ptr[3]+2) );		//i or ite
	printf("%s\n",(ptr[3]+2) );		//i or ite
}*/

void foo(int num);
void main()
{
	//����Ʈ�Լ��� ������� �ϴ� ���� �Ȱ��� ���·� �����.
	void (*sample)(int);
	sample = foo;
	sample(10);
}
void foo(int num)
{
	printf("%d\n",num);
}