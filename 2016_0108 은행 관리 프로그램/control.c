#include"std.h"

save s;

void init()
{
	printf("**********************\n");
	printf("*     2016-01-08     *\n");
	printf("* ������� ���α׷�  *\n");
	printf("*   ���α׷� ����    *\n");
	printf("**********************\n");
	save_init(&s);
	system("pause");
}

void run()
{
	int num;
	while(1)
	{
		print();
		scanf("%d",&num);
		switch(num)
		{
		case 1: insert();			break;
		case 2: all_print();		break;
		case 3: my_account();		break;
		case 4: my_addmoney();		break;
		case 5: my_minusmoney();	break;
		case 6: my_transfer();		break;
		case 7: return;
		}
		system("pause");
	}
}

void my_transfer()
{
	int tran=0;
	int nam_idx=0;
	int idx = AccountToIdx();
	if(idx == -1)
	{
		printf("ã�� ���¹�ȣ�� �������� �ʽ��ϴ�.\n");
	}
	else
	{
		if(PassToIdx(idx))
		{
			nam_idx = AccountToIdx();
			if(nam_idx == -1)
				printf("��� ���¹�ȣ�� �������� �ʽ��ϴ�.\n");
			else
			{
				printf("[ ��ü�� �ݾ� ] ");
				scanf("%d",&tran);
				if(s.data[idx]->money>=tran)
				{
					s.data[idx]->money -= tran;
					s.data[nam_idx]->money += tran;
					printf("[ ���� �ݾ� ] : %d\n",s.data[idx]->money);
				}
				else
					printf("�ݾ��� �����մϴ�.\n");
			}
		}
		else
		{
			printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
		}
	}
}
void my_minusmoney()
{
	int minus;
	int idx = AccountToIdx();
	if(idx == -1)
	{
		printf("ã�� ���¹�ȣ�� �������� �ʽ��ϴ�.\n");
	}
	else
	{
		if(PassToIdx(idx))
		{
			printf("[ ����� �ݾ� ] : ");
			scanf("%d",&minus);
			if(s.data[idx]->money >= minus)
			{
				s.data[idx]->money -= minus;
				printf("[ �ܾ� ] : %d\n",s.data[idx]->money);
			}
			else
			{
				printf("�ݾ��� �����մϴ�.\n");
			}
			
		}
		else
		{
			printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
		}
	}
}
void my_addmoney()
{
	int add;
	int idx = AccountToIdx();
	if(idx == -1)
	{
		printf("ã�� ���¹�ȣ�� �������� �ʽ��ϴ�.\n");
	}
	else
	{
		if(PassToIdx(idx))
		{
			printf("[ �Ա��� �ݾ� ] : ");
			scanf("%d",&add);
			s.data[idx]->money += add;
			printf("[ �ܾ� ] : %d\n",s.data[idx]->money);
		}
		else
		{
			printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
		}
	}
}
void my_account()
{
	int idx = AccountToIdx();
	if(idx == -1)
	{
		printf("ã�� ���¹�ȣ�� �������� �ʽ��ϴ�.\n");
	}
	else
	{
		if(PassToIdx(idx))
		{
			printf("�̸� : %s\n",s.data[idx]->name);
			printf("���¹�ȣ : %s\n",s.data[idx]->account);
			printf("�ݾ� : %d\n",s.data[idx]->money);
		}
		else
		{
			printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
		}
	}
}
int PassToIdx(int idx)
{
	char pass[5];
	int i;
	printf("[ ��й�ȣ ] : ");
	//��й�ȣ �Է¹޴´�.
	for(i=0;i<4;i++)
	{
		//�̰� �Է¸� �޴´�
		pass[i] = getch();
		//�̰� ȭ�鿡 �ѱ��� ������ش�.
		printf("*");
	}
	pass[4] = '\0';
	printf("\n");

	//���� ��й�ȣ�� ������ Ȯ���Ѵ�.
	if(strcmp(s.data[idx]->pass,pass)==0)
	{
		return 1;
	}
	return 0;
}

int AccountToIdx()
{
	char account[14];
	int i;
	printf("[ ���¹�ȣ ] : ");
	//1. �׳� ���� ���� - ǥ�ø� �־��ִ� ���
	//scanf("%s",account);
	//2. �ڵ����� - ǥ�ø� �־��ִ� ���
	for(i=0;i<13;i++)
	{
		if(i==3 || i == 6)
		{
			account[i] = '-';
			printf("-");
		}
		else
		{
			fflush(stdin);
			account[i] = getch();
			printf("%c",account[i]);
		}
	}
	account[13]='\0';
	printf("\n");
	//���¹�ȣ�� ���Ͽ� ã�´�.
	for(i=0;i<s.count;i++)
	{
		if(strcmp(account,s.data[i]->account) == 0 )
			return i;
	}

	return -1;
}
void all_print()
{
	int i;
	printf("���¹�ȣ\t�̸�\t��\n");
	for(i=0;i<s.count;i++)
	{
		printf("%s\t%s\t%d\n",s.data[i]->account,s.data[i]->name,s.data[i]->money);
	}
}
void insert()
{
	int i;
	bank *b = (bank*)malloc(sizeof(bank));
	//�̸�
	printf("[ �̸� ] : ");
	scanf("%s",b->name);
	//�ݾ�
	b->money = 10000;
	//��й�ȣ
	printf("[ ��й�ȣ ] : ");
	for(i=0;i<4;i++)
	{
		fflush(stdin);
		//getch(); �� ���ڸ� �Է¹޴� �Լ��̴�.
		b->pass[i] = getch();
		//scanf() �Է¹ް� ȭ�鿡�� ����ѵ� �ش� �������� �� ����
//		scanf("%c",&b->pass[i]);
		printf("*");
	}
	printf("\n");
	b->pass[4] = '\0';
	//���¹�ȣ
	//����0~9 48~57
	//�����Լ� �ʱ�ȭ
	srand(time(NULL));
	for(i=0;i<13;i++)
	{
		if(i==3 || i==6)
			b->account[i] = '-';
		else
			b->account[i] = (rand()%10)+48;
	}
	b->account[13] = '\0';
	printf("[ ���¹�ȣ ] : %s\n",b->account);

	if(save_insert(&s,b))
		printf("���� ����\n");
	else
		printf("���� ���� or ���� ����\n");

}
void print()
{
	system("cls");
	printf("[1] ���� ���� \n"); 
	printf("[2] �� ��ü ���\n");
	printf("[3] �� ���� ���\n");
	printf("[4] ���� �Ա�\n");
	printf("[5] ���� ���\n");
	printf("[6] ���� ��ü\n");
	printf("[7] ����\n");
	printf("�Է�:");
}
void Exit()
{
	system("cls");
	printf("**********************\n");
	printf("*     2016-01-08     *\n");
	printf("* ������� ���α׷�  *\n");
	printf("*   ���α׷� ����    *\n");
	printf("**********************\n");
}