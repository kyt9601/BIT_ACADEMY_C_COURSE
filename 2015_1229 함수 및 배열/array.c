#include<stdio.h>

/*void main()
{
	int num[5];//1차 배열
	num[0]= 10;
	num[1]= 1;
	num[2]= 2;
	num[3]= 3;
	num[4]= 4;
	printf("%d\n",num[0]);
	//[]첨차를 사용했기때문에 -1      1차 - 1차 = 0차
	printf("%d\n",num);
	//아무것도 사용하지 않았기 때문에 1차 그대로 이다.
	printf("&num[0] = %d\n",&num[0]);
	//[]첨차를 사용했기때문에 -1      1차 - 1차 = 0차
	//그런뒤에 &연산자를 사용했기 때문에 +1      0차 + 1차 = 1차
	printf("&num[1] = %d\n",&num[1]);
	printf("&num[2] = %d\n",&num[2]);
	printf("&num[3] = %d\n",&num[3]);
	printf("&num[4] = %d\n",&num[4]);
}*/

/*void main()
{
	int num[5] = {0,0,0,0,0};
	int i;

	for(i=0;i<5;i++)
	{
		printf("&num[%d] = %d\n",i,&num[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("num+%d = %d\n",i,num+i);
	}
	for(i=0;i<6;i++)
	{
		printf("&num[%d] = %d\n",i,&num[i]);
	}
	for(i=0;i<6;i++)
	{
		num[i] = i;
	}
}*/

/*void main()
{
	int num[10]={0,1,2,3,4,5};
	int i;
	for(i=0;i<10;i++)
	{
		printf("num[%d] = %d\n",i,num[i]);
	}
}*/
/*void main()
{
	int num[5]={0},i;
	num[0] = 10;
	for(i=0;i<5;i++)
	{
		printf("num[%d] = %d\n",i,num[i]);
	}
}*/

/*void main()
{
	char name[6] = "hello";
	char name1[6] = {'h','e','l','l','o'};
	char name2[6] = {'h','e','l','l','o','\0'};
	
	printf("name  = %s\n",name );
	printf("name1 = %s\n",name1);
	printf("name2 = %s\n",name2);

	printf("name [0] = %c\n",name[0] );
	printf("name1[1] = %c\n",name1[1]);
	printf("name2[2] = %c\n",name2[2]);
	
}*/
/*
void main()
{
	char name[10] = "대한민국";
	printf("%c%c\n",name[0],name[1]);
}*/


void main()
{
	char name[] = "hello world welcome";

	printf("(name+12)[0] = %c\n",(name+12)[0] );//(welcome)w
	printf("name[12]     = %c\n",name[12]     );//(welcome)w
	printf("name[2]      = %c\n",name[2]      );//(hel)l
	printf("name[15] = %d\n",name[15]);//c(숫자)
	printf("name = %d\n",name);//h 주소값
	printf("&name[0] = %d\n",&name[0]);//h 주소값
	printf("name+4 = %d\n",name+4);//(hello)o 주소값
	printf("&name[4] = %d\n",&name[4]);//(hello)o 주소값
	printf("name[12]+2 = %c\n",name[12]+2);//(welcome)w -> y 로 바꿔서 띄우기
	printf("%s\n",name+8);//rld welcome 글자 띄우기
}