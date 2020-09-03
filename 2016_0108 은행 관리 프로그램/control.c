#include"std.h"

save s;

void init()
{
	printf("**********************\n");
	printf("*     2016-01-08     *\n");
	printf("* 은행관리 프로그램  *\n");
	printf("*   프로그램 실행    *\n");
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
		printf("찾는 계좌번호는 존재하지 않습니다.\n");
	}
	else
	{
		if(PassToIdx(idx))
		{
			nam_idx = AccountToIdx();
			if(nam_idx == -1)
				printf("상대 계좌번호는 존재하지 않습니다.\n");
			else
			{
				printf("[ 이체할 금액 ] ");
				scanf("%d",&tran);
				if(s.data[idx]->money>=tran)
				{
					s.data[idx]->money -= tran;
					s.data[nam_idx]->money += tran;
					printf("[ 남은 금액 ] : %d\n",s.data[idx]->money);
				}
				else
					printf("금액이 부족합니다.\n");
			}
		}
		else
		{
			printf("비밀번호가 틀렸습니다.\n");
		}
	}
}
void my_minusmoney()
{
	int minus;
	int idx = AccountToIdx();
	if(idx == -1)
	{
		printf("찾는 계좌번호는 존재하지 않습니다.\n");
	}
	else
	{
		if(PassToIdx(idx))
		{
			printf("[ 출금할 금액 ] : ");
			scanf("%d",&minus);
			if(s.data[idx]->money >= minus)
			{
				s.data[idx]->money -= minus;
				printf("[ 잔액 ] : %d\n",s.data[idx]->money);
			}
			else
			{
				printf("금액이 부족합니다.\n");
			}
			
		}
		else
		{
			printf("비밀번호가 틀렸습니다.\n");
		}
	}
}
void my_addmoney()
{
	int add;
	int idx = AccountToIdx();
	if(idx == -1)
	{
		printf("찾는 계좌번호는 존재하지 않습니다.\n");
	}
	else
	{
		if(PassToIdx(idx))
		{
			printf("[ 입금할 금액 ] : ");
			scanf("%d",&add);
			s.data[idx]->money += add;
			printf("[ 잔액 ] : %d\n",s.data[idx]->money);
		}
		else
		{
			printf("비밀번호가 틀렸습니다.\n");
		}
	}
}
void my_account()
{
	int idx = AccountToIdx();
	if(idx == -1)
	{
		printf("찾는 계좌번호는 존재하지 않습니다.\n");
	}
	else
	{
		if(PassToIdx(idx))
		{
			printf("이름 : %s\n",s.data[idx]->name);
			printf("계좌번호 : %s\n",s.data[idx]->account);
			printf("금액 : %d\n",s.data[idx]->money);
		}
		else
		{
			printf("비밀번호가 틀렸습니다.\n");
		}
	}
}
int PassToIdx(int idx)
{
	char pass[5];
	int i;
	printf("[ 비밀번호 ] : ");
	//비밀번호 입력받는다.
	for(i=0;i<4;i++)
	{
		//이건 입력만 받는다
		pass[i] = getch();
		//이건 화면에 한글자 출력해준다.
		printf("*");
	}
	pass[4] = '\0';
	printf("\n");

	//실제 비밀번호와 같은지 확인한다.
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
	printf("[ 계좌번호 ] : ");
	//1. 그냥 내가 직접 - 표시를 넣어주는 방법
	//scanf("%s",account);
	//2. 자동으로 - 표시를 넣어주는 방법
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
	//계좌번호를 비교하여 찾는다.
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
	printf("계좌번호\t이름\t돈\n");
	for(i=0;i<s.count;i++)
	{
		printf("%s\t%s\t%d\n",s.data[i]->account,s.data[i]->name,s.data[i]->money);
	}
}
void insert()
{
	int i;
	bank *b = (bank*)malloc(sizeof(bank));
	//이름
	printf("[ 이름 ] : ");
	scanf("%s",b->name);
	//금액
	b->money = 10000;
	//비밀번호
	printf("[ 비밀번호 ] : ");
	for(i=0;i<4;i++)
	{
		fflush(stdin);
		//getch(); 한 문자를 입력받는 함수이다.
		b->pass[i] = getch();
		//scanf() 입력받고 화면에도 출력한뒤 해당 변수에게 값 전달
//		scanf("%c",&b->pass[i]);
		printf("*");
	}
	printf("\n");
	b->pass[4] = '\0';
	//계좌번호
	//문자0~9 48~57
	//랜덤함수 초기화
	srand(time(NULL));
	for(i=0;i<13;i++)
	{
		if(i==3 || i==6)
			b->account[i] = '-';
		else
			b->account[i] = (rand()%10)+48;
	}
	b->account[13] = '\0';
	printf("[ 계좌번호 ] : %s\n",b->account);

	if(save_insert(&s,b))
		printf("저장 성공\n");
	else
		printf("저장 실패 or 공간 부족\n");

}
void print()
{
	system("cls");
	printf("[1] 계좌 생성 \n"); 
	printf("[2] 고객 전체 출력\n");
	printf("[3] 내 계좌 출력\n");
	printf("[4] 계좌 입금\n");
	printf("[5] 계좌 출금\n");
	printf("[6] 계좌 이체\n");
	printf("[7] 종료\n");
	printf("입력:");
}
void Exit()
{
	system("cls");
	printf("**********************\n");
	printf("*     2016-01-08     *\n");
	printf("* 은행관리 프로그램  *\n");
	printf("*   프로그램 종료    *\n");
	printf("**********************\n");
}