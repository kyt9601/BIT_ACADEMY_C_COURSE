#include"std.h"


//1.초기화
void init()
{
	printf("*******************\n");
	printf("    2016-01-06    \n");
	printf(" 학생관리 프로그램\n");
	printf("*******************\n");
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
	scanf("%s",stu.name);
	printf("나이 : ");
	scanf("%d",&stu.age);
	printf("전화번호 : ");
	scanf("%d",&stu.phone);
	save_insert(stu);
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