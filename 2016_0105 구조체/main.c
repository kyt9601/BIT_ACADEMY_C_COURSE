#include<stdio.h>
#include"extern.h"
/*void main()
{
	//�ڵ������� �Ϲ� ������ ����Ͽ��� auto �� �ٿ��ֱ� ������
	//�Ϲݺ��� ���� �ڵ������� ���Ѵ�.
	int a = 10;
	auto int b = 20;
	printf("%d %d\n",a,b);
}*/

/*void main()
{
	int a = 10;
	//���ÿ����̶�� �Ҹ����.
	//�ش��ϴ� �����ȿ����� ������ ����ְ�
	//����� �Ǹ� �ش��ϴ� ������ �������.
	{
		int b = 10;
		printf("%d\n",b);
	}
	printf("%d \n",a);
}*/


//static ����
/*void static_test();
void main()
{
	int i=0;
	for(i=0;i<5;i++)
	{
		static_test();
	}
}
void static_test()
{
	int num = 0;
	static int static1 = 0;
	printf("num�� �� : %d \t num�� �ּ� : %d\n",++num,&num);
	printf("static1�� �� : %d \t static1�� �ּ� : %d\n",++static1,&static1);
}*/

//�������� ����
/*void main()
{
	register int num = 10;
	register int num1 = 20;
	printf("%d\n",num*num/num*num1);
}*/

//���� ����

/*int b=1;
void main()
{
	printf("%d %d\n",a,b);
	foo();
}*/