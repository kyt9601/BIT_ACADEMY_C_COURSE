#include<stdio.h>
/*//���ڿ� ���ϴ� �Լ�strcmp()
void main()
{
	char ch1[] = "aa";
	char ch2[] = "aa";
	int result = strcmp(ch1,ch2);
	printf("%d\n",result);
}*/
/*//���ڿ� ���̱��ϴ� �Լ�strlen()
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
	//	printf("�ʹ� ª�� �Է��ϼ̽��ϴ�.\n");
	//}

}*/
/*//���ڿ� �����ϴ� �Լ�strcpy()
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
/*//���ڿ� ���̱��ϴ� �Լ�strcat()
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

/*//�ش��ϴ� ������ ��ġ�� �˷��ִ� �Լ�strchr()
//�� �ش��ϴ� �ܾ��� ��ġ�� �ּҰ��� �˷��ֱ� ������
//����� ���ؾ� �ȴ�.
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

/*//���ڿ��� ������ ������ �ִ� �Լ� strrev()
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
	//�ѱ�    �ȳ��ϼ���
}*/
/* ���ڿ��� �ִ� ���ڵ��� ��� Ư�� ���ڷ� ��ȯ�����ִ� �Լ�strset()
void main()
{
	char ch[] = "abcd";
	char ch1[10];
	strcpy(ch1,ch);
	strset(ch,'*');
	printf("%s\n",ch);
}*/

/*//�빮�� Ȥ�� �ҹ��ڷ� ��ȯ�����ִ� �Լ�strupr(),strlwr()
void main()
{
	char ch[] = "abcDefg";
	strupr(ch);
	printf("%s\n",ch);
	strlwr(ch);
	printf("%s\n",ch);
}*/