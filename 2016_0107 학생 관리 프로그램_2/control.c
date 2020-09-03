#include"std.h"

save s;
//1.초기화
void init()
{
	printf("*******************\n");
	printf("    2016-01-06    \n");
	printf(" 학생관리 프로그램\n");
	printf("*******************\n");
	save_init(&s);
	system("pause");
}
//2.실행
void run()
{
	int num;
	while(1)
	{
		print();
		printf("선택 : ");
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
	printf("[1]학생정보 입력\n");
	printf("[2]학생정보 전체출력\n");
	printf("[3]학생정보 검색\n");
	printf("[4]학생정보 수정\n");
	printf("[5]학생정보 삭제\n");
	printf("[6]종료\n");
}
void insert()
{
	Stu *stu = (Stu*)malloc(sizeof(Stu));
	printf("이름 : ");
	scanf("%s",(*stu).name);
	printf("나이 : ");
	scanf("%d",&stu->age);
	printf("전화번호 : ");
	scanf("%d",&stu->phone);
	if(save_insert(&s,stu))
	{
		printf("저장 성공\n");
	}
	else
	{
		printf("저장 실패(데이터가 다 찼습니다.)\n");
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
	
	//3. 검색을 했을때 존재한다라면 출력 한다.
	if(i<s.count)
	{
		stu_print(&s,i);
	}
	else
	{
		printf("존재하지 않는 이름 입니다.\n");
	}	
}

void NameToIdx()
{
	//1.찾으려고하는 사람이름 받아야된다.
	char name[10];
	int i;
	printf("검색 이름 : ");
	scanf("%s",name);
	//2.받은이름을 가지고 검색을한다.
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
	//수정할 이름이 존재하는지여부 검색
	//1. 검색 이름
	//2. 입력받은 이름이 존재하는지 검색
	//3. 존재한다면 수정정보 입력 없다면 존재하지 않는다.
}

//3.종료
void Exit()
{
	system("cls");
	printf("*********************\n");
	printf("    2016-01-06      \n");
	printf(" 학생관리 프로그램 종료\n");
	printf("*********************\n");
}