#include"std.h"

save s;
//1.�ʱ�ȭ
void init()
{
	printf("*******************\n");
	printf("    2016-01-06    \n");
	printf(" �л����� ���α׷�\n");
	printf("*******************\n");
	save_init(&s);
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
			case 1: insert();		break;
			case 2: all_print();	break;
			case 3: search();		break;
			case 4: modify();		break;
			case 5: break;
			case 6: return;
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
	scanf("%s",(*stu).name);
	printf("���� : ");
	scanf("%d",&stu->age);
	printf("��ȭ��ȣ : ");
	scanf("%d",&stu->phone);
	if(save_insert(&s,stu))
	{
		printf("���� ����\n");
	}
	else
	{
		printf("���� ����(�����Ͱ� �� á���ϴ�.)\n");
	}
}

void all_print()
{
	int i;
	for(i=0;i<s.count;i++)
	{
		stu_print(&s,i);
	}
}

void search()
{
	
	//3. �˻��� ������ �����Ѵٶ�� ��� �Ѵ�.
	if(i<s.count)
	{
		stu_print(&s,i);
	}
	else
	{
		printf("�������� �ʴ� �̸� �Դϴ�.\n");
	}	
}

void NameToIdx()
{
	//1.ã�������ϴ� ����̸� �޾ƾߵȴ�.
	char name[10];
	int i;
	printf("�˻� �̸� : ");
	scanf("%s",name);
	//2.�����̸��� ������ �˻����Ѵ�.
	for(i=0;i<s.count;i++)
	{
		if(strcmp(name,s.data[i]->name)==0)
		{
			break;
		}
	}
}

void modify()
{
	//������ �̸��� �����ϴ������� �˻�
	//1. �˻� �̸�
	//2. �Է¹��� �̸��� �����ϴ��� �˻�
	//3. �����Ѵٸ� �������� �Է� ���ٸ� �������� �ʴ´�.
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