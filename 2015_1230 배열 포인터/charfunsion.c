#include<stdio.h>
/*//문자열 비교하는 함수strcmp()
void main()
{
	char ch1[] = "aa";
	char ch2[] = "aa";
	int result = strcmp(ch1,ch2);
	printf("%d\n",result);
}*/
/*//문자열 길이구하는 함수strlen()
void main()
{
	char ch[] = "hello world~";
	int length = strlen(ch);
	printf("%d\n",length);
	printf("%d\n",strlen(ch));

	//char ch[10];
	//scanf("%s",ch);
	//if(strlen(ch)<=4)
	//{
	//	printf("너무 짧게 입력하셨습니다.\n");
	//}

}*/
/*//문자열 복사하는 함수strcpy()
void main()
{
	char ch1[] = "hellodddddddddddd";
	char ch2[] = "world";
	char ch3[10];
	strcpy(ch1,ch2);
	printf("%s\n",ch1);
	strncpy(ch3,ch2,2);
	ch3[2] = '\0';
	printf("%s\n",ch3);
}*/
/*//문자열 붙이기하는 함수strcat()
void main()
{
	char ch1[15] = "hello ";
	char ch2[15] = "world";
	char ch3[] = "~~!!";
	strcat(ch1,ch2);
	printf("%s\n",ch1);
	strncat(ch2,ch3,3);
	printf("%s\n",ch2);
}*/

/*//해당하는 문자의 위치를 알려주는 함수strchr()
//단 해당하는 단어의 위치의 주소값을 알려주기 때문에
//계산을 잘해야 된다.
void main()
{
	//char ch[] = "hello world~!!";
	//char *p = strchr(ch,'l');
	//int a = p - ch;
	//printf("%d\n",a+1);
	char ch[] = "hello world~!!";
	char *p = strrchr(ch,'l');
	int a = p - ch;
	printf("%d\n",a+1);
}*/

/*//문자열의 순서를 뒤집어 주는 함수 strrev()
void main()
{
	//char ch[] = "abcdefg";
	//strrev(ch);
	//printf("%s\n",ch);
	char ch[] = "abcdefg";
	char ch1[8];
	int i,j=6;
	for(i=0;i<7;i++,j--)
	{
		ch1[j] = ch[i];
	}
	ch1[7] = '\0';
	printf("%s\n",ch1);
	//한글    안녕하세요
}*/
/* 문자열에 있는 문자들을 모두 특정 문자로 변환시켜주는 함수strset()
void main()
{
	char ch[] = "abcd";
	char ch1[10];
	strcpy(ch1,ch);
	strset(ch,'*');
	printf("%s\n",ch);
}*/

/*//대문자 혹은 소문자로 변환시켜주는 함수strupr(),strlwr()
void main()
{
	char ch[] = "abcDefg";
	strupr(ch);
	printf("%s\n",ch);
	strlwr(ch);
	printf("%s\n",ch);
}*/