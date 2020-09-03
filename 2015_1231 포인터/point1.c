#include<stdio.h>

/*void main()
{
	int arr[3];
	int  *p = arr;
	int i;
	//일반 배열에 입력받는 방법
	for(i=0;i<3;i++)
	{
		printf("%d번째 입력:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<3;i++)
	{
		printf("%d\n",arr[i]);
	}
	//배열이 아닌 포인터를 가지고 입력을 받는 방법
	for(i=0;i<3;i++)
	{
		printf("%d번째 입력:",i);
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
	//printf("%c\n",string[33]	);//배열 위치가 존재 하지 않는다.
	printf("%c\n",*(string +8)	);//!
	printf("%s\n",string		);//%s 의 경우  
	printf("%c %d\n",string[9],string[9]		);//%d 의 경우  
	printf("%d\n",&string[0]	);//%d 의 경우  
}*/

/*
void main()
{
	int a = 10;
	int *p = &a;
	int **dp = &p;
	//int **dp1 = &a;  차수 차이가 존재하기 때문에 불가능하다.
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
	//int **dp1 = &a;  차수 차이가 존재하기 때문에 불가능하다.
	printf("a = %d\n",a);
	printf("&a = %d\n",&a);
	printf("b = %d\n",b);
	printf("&b = %d\n",&b);
	printf("p = %d\n",p);
	printf("&p = %d\n",&p);
	printf("dp = %d\n",dp);
	printf("*dp = %d\n",*dp);
	printf("**dp = %d\n",**dp);
	printf("======= 변경 후 =========\n");
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
//범용 포인터 모든 데이터타입들을 집어 넣을수 있다.
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


//배열 포인터
/*void main()
{
	int a[2][2];
	int (*p)[2] = a;
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("p[%d][%d] 입력 : ",i,j);
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
//배열포인트의 낱개 갯수와 배열 낱개 갯수를 맞추기 않으면
//주소값의 위치가 차이가 나게 된다.
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
	//배열의 갯수와 배열포인터의 갯수를 맞추기 않아
	//주소값의 위치가 틀려 나는 에러
	int a[2][2];
	int (*p)[3] = a;
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("p[%d][%d] 입력 : ",i,j);
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
	//포인트함수는 만드려고 하는 대상과 똑같은 형태로 만든다.
	void (*sample)(int);
	sample = foo;
	sample(10);
}
void foo(int num)
{
	printf("%d\n",num);
}