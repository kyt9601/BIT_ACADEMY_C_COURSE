//1. ���̺귯�� �����
#include <stdio.h>
//2.�Լ������
void foo();
int goo();
//4. �����Լ�
void main()
{
	int num=0;
	foo();
	//����1
	num = goo();
	printf("%d\n",num);
	//����2
	printf("%d\n",goo());
	//����3
	printf("%d\n",10);
}
//����Ÿ�� �Լ��� ()<--- �Ű� ���� ����
//{
//}
void foo()
{
	printf("foo�Լ� �Դϴ�.\n");
}
int goo()
{
	return 10;
}

