#include"std.h"
struct Save save;
//1. 초기화
void init()
{
	printf("*********************\n");
	printf("* 도서 관리 프로그램*\n");
	printf("*    프로그램 시작  *\n");
	printf("*  2016 - 01 - 12   *\n");
	printf("*********************\n");
	save_init(&save);
	file_load(&save);
	system("pause");
}
//2. 실행
void run()
{
	int num;
	while(1)
	{
		system("cls");
		printf("[1].책등록\n");
		printf("[2].책 목록 출력\n");
		printf("[3].책 정보 수정\n");
		printf("[4].책 정보 검색\n");
		printf("[5].책 정보 삭제\n");
		printf("[6].책 대여\n");
		printf("[7].종료\n");
		printf("입력 : ");
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
			default:printf("잘못 입력하셨습니다.\n"); break;
		}
		system("pause");
	}

}
void book_insert()
{
	//struct Book b;
	//책번호 책이름 책저자 책등록날짜 대여여부
	book *b = (book*)malloc(sizeof(book));
	int i;
	//입력함수 호출
	scan(b,"\n[ 등 록 ]");
	//해당하는 날짜를 초기화 해준다.안해주면 1970년1월1일
	//정해져있는 값으로만 계속 출력이된다.
	srand(time(NULL));
	b->book_num = (rand()%9000)+1000;
	if(save_insert(b,&save))
		printf("저장 성공\n");
	else
		printf("저장 실패\n");
}
//입력받는 중복 부분을 함수로 묶는다.
void scan(book *b,char *str)
{
	int i;
	printf("%s\n",str);
	printf("책이름 : ");
	scanf("%s",b->book_name);
	printf("책 저자 : ");
	scanf("%s",b->name);
	printf("책 등록날짜 : ");
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
	printf("책번호\t책이름\t책저자\t책등록일\t대여여부\n");
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
	//1번 어떤것으로 위치를 찾을지 선택
	int num,idx,i;char yn;
	printf("[1]책이름 찾기\n");
	printf("[2]책저자 찾기\n");
	printf("[3]뒤로가기\n");
	printf("입력 : ");
	scanf("%d",&num);
	switch(num)
	{
	//선택되어진것을 가지고 위치를 찾는다.
	case 1: idx = BooknameToIdx();		break;
	case 2: idx = NameToIdx();		break;
	case 3: return;
	}
	if(idx == -1)
		printf("존재하지 않습니다.\n");
	else
	{
		if(a == 1)
			scan(save.data[idx],"\n[ 수 정 ]");
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
				printf("대여 하실수 없습니다.");
			else
			{
				printf("대여 하시겠습니까?");
				fflush(stdin);
				scanf("%c",&yn);
				if(yn == 'Y' || yn == 'y')
				{
					printf("대여가 완료 되었습니다.\n");
					save.data[idx]->ok = 'X';
				}
				else
					printf("대여를 취소 하셨습니다.\n");
			}		
		}
	}
}
int BooknameToIdx()
{
	char name[10];
	int i;
	printf("책이름 : ");
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
	printf("책저자 : ");
	scanf("%s",name);
	for(i=0;i<save.count;i++)
	{
		if(strcmp(save.data[i]->name,name)==0)
			return i;
	}
	return -1;
}

//3. 종료
void Exit()
{
	system("cls");
	printf("*********************\n");
	printf("* 도서 관리 프로그램*\n");
	printf("*    프로그램 종료  *\n");
	printf("*  2016 - 01 - 12   *\n");
	printf("*********************\n");
	file_save(&save);
}