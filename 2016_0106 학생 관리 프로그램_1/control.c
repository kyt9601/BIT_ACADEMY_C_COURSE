#include"std.h"


//1.�ʱ�ȭ
void init()
{
	printf("*******************\n");
	printf("    2016-01-06    \n");
	printf(" �л����� ���α׷�\n");
	printf("*******************\n");
	system("pause");
}
//2.����
void run()
{
	int num;
	while(1)
	{
		print();
		printf("���� : ");
		scanf("%d",&num);
		switch(num)
		{
			case 1: insert(); break;
			case 2: break;
			case 3: break;
			case 4: break;
			case 5: break;
			case 6: break;
		}
		system("pause");
	}
}
void print()
{
	system("cls");
	printf("[1]�л����� �Է�\n");
	printf("[2]�л����� ��ü���\n");
	printf("[3]�л����� �˻�\n");
	printf("[4]�л����� ����\n");
	printf("[5]�л����� ����\n");
	printf("[6]����\n");
}
void insert()
{
	Stu *stu = (Stu*)malloc(sizeof(Stu));
	printf("�̸� : ");
	scanf("%s",stu.name);
	printf("���� : ");
	scanf("%d",&stu.age);
	printf("��ȭ��ȣ : ");
	scanf("%d",&stu.phone);
	save_insert(stu);
}
//3.����
void Exit()
{
	system("cls");
	printf("*********************\n");
	printf("    2016-01-06      \n");
	printf(" �л����� ���α׷� ����\n");
	printf("*********************\n");
}