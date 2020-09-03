#include"std.h"
struct Save save;
//1. �ʱ�ȭ
void init()
{
	printf("*********************\n");
	printf("* ���� ���� ���α׷�*\n");
	printf("*    ���α׷� ����  *\n");
	printf("*  2016 - 01 - 12   *\n");
	printf("*********************\n");
	save_init(&save);
	file_load(&save);
	system("pause");
}
//2. ����
void run()
{
	int num;
	while(1)
	{
		system("cls");
		printf("[1].å���\n");
		printf("[2].å ��� ���\n");
		printf("[3].å ���� ����\n");
		printf("[4].å ���� �˻�\n");
		printf("[5].å ���� ����\n");
		printf("[6].å �뿩\n");
		printf("[7].����\n");
		printf("�Է� : ");
		scanf("%d",&num);
		switch(num)
		{
			case 1: book_insert();		break;
			case 2: book_allprint();	break;
			case 3: book_modify(1);		break;
			case 4: book_modify(2);		break;
			case 5: book_modify(3);		break;
			case 6: book_modify(4);		break;
			case 7: return;
			default:printf("�߸� �Է��ϼ̽��ϴ�.\n"); break;
		}
		system("pause");
	}

}
void book_insert()
{
	//struct Book b;
	//å��ȣ å�̸� å���� å��ϳ�¥ �뿩����
	book *b = (book*)malloc(sizeof(book));
	int i;
	//�Է��Լ� ȣ��
	scan(b,"\n[ �� �� ]");
	//�ش��ϴ� ��¥�� �ʱ�ȭ ���ش�.�����ָ� 1970��1��1��
	//�������ִ� �����θ� ��� ����̵ȴ�.
	srand(time(NULL));
	b->book_num = (rand()%9000)+1000;
	if(save_insert(b,&save))
		printf("���� ����\n");
	else
		printf("���� ����\n");
}
//�Է¹޴� �ߺ� �κ��� �Լ��� ���´�.
void scan(book *b,char *str)
{
	int i;
	printf("%s\n",str);
	printf("å�̸� : ");
	scanf("%s",b->book_name);
	printf("å ���� : ");
	scanf("%s",b->name);
	printf("å ��ϳ�¥ : ");
	for(i=0;i<10;i++)
	{
		if(i==4 || i == 7)
		{
			b->book_time[i] = '-';
		}
		else
			b->book_time[i] = getch();
		printf("%c",b->book_time[i]);
	}
	printf("\n");
	b->book_time[10] = '\0';
	b->ok = 'O';
}
void book_allprint()
{
	int i;
	printf("å��ȣ\tå�̸�\tå����\tå�����\t�뿩����\n");
	for(i=0;i<save.count;i++)
	{
		printf("%d\t%s\t%s\t%s\t%c\n",save.data[i]->book_num,save.data[i]->book_name,save.data[i]->name,save.data[i]->book_time,save.data[i]->ok);
		/*
		book * b = save.data[i];
		printf("%d\t%s\t%s\t%s\t%c\n",b->book_num,b->book_name,b->name,b->book_time,b->ok);
		*/
	}
}
void book_modify(int a)
{
	//1�� ������� ��ġ�� ã���� ����
	int num,idx,i;char yn;
	printf("[1]å�̸� ã��\n");
	printf("[2]å���� ã��\n");
	printf("[3]�ڷΰ���\n");
	printf("�Է� : ");
	scanf("%d",&num);
	switch(num)
	{
	//���õǾ������� ������ ��ġ�� ã�´�.
	case 1: idx = BooknameToIdx();		break;
	case 2: idx = NameToIdx();		break;
	case 3: return;
	}
	if(idx == -1)
		printf("�������� �ʽ��ϴ�.\n");
	else
	{
		if(a == 1)
			scan(save.data[idx],"\n[ �� �� ]");
		else if(a == 2)
			printf("%d\t%s\t%s\t%s\t%c\n",save.data[idx]->book_num,save.data[idx]->book_name,save.data[idx]->name,save.data[idx]->book_time,save.data[idx]->ok);
		else if(a == 3)
		{
			free(save.data[idx]);
			for(i=idx;i<save.count;i++)
				save.data[i] = save.data[i+1];
			save.count--;
		}
		else if(a == 4)
		{
			printf("%d\t%s\t%s\t%s\t%c\n",save.data[idx]->book_num,save.data[idx]->book_name,save.data[idx]->name,save.data[idx]->book_time,save.data[idx]->ok);
			if(save.data[idx]->ok == 'X')
				printf("�뿩 �ϽǼ� �����ϴ�.");
			else
			{
				printf("�뿩 �Ͻðڽ��ϱ�?");
				fflush(stdin);
				scanf("%c",&yn);
				if(yn == 'Y' || yn == 'y')
				{
					printf("�뿩�� �Ϸ� �Ǿ����ϴ�.\n");
					save.data[idx]->ok = 'X';
				}
				else
					printf("�뿩�� ��� �ϼ̽��ϴ�.\n");
			}		
		}
	}
}
int BooknameToIdx()
{
	char name[10];
	int i;
	printf("å�̸� : ");
	scanf("%s",name);
	for(i=0;i<save.count;i++)
	{
		if(strcmp(save.data[i]->book_name,name)==0)
			return i;
	}
	return -1;
}
int NameToIdx()
{
	int i;
	char name[10];
	printf("å���� : ");
	scanf("%s",name);
	for(i=0;i<save.count;i++)
	{
		if(strcmp(save.data[i]->name,name)==0)
			return i;
	}
	return -1;
}

//3. ����
void Exit()
{
	system("cls");
	printf("*********************\n");
	printf("* ���� ���� ���α׷�*\n");
	printf("*    ���α׷� ����  *\n");
	printf("*  2016 - 01 - 12   *\n");
	printf("*********************\n");
	file_save(&save);
}