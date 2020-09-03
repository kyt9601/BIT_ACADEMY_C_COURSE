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
	file_load();
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
			case 5: Delete();		break;
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
	//검색하는 함수를 호출한다.
	int idx = NameToIdx();
	//3. 검색을 했을때 존재한다라면 출력 한다.
	if(idx == -1)
	{
		printf("존재하지 않는 이름 입니다.\n");
	}
	else
	{
		stu_print(&s,idx);
	}
}

int NameToIdx()
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
			return i;
		}
	}
	return -1;
}

void modify()
{
	//수정할 이름이 존재하는지여부 검색
	int idx = NameToIdx();
	//3. 존재한다면 수정정보 입력 없다면 존재하지 않는다.
	if(idx == -1)
	{
		printf("존재하지 않는 이름입니다.\n");
	}
	else
	{
		stu_print(&s,idx);
		printf("[ 수 정 ]\n");
		printf("수정할 이름 : ");
		scanf("%s",s.data[idx]->name);
		//scanf("%s",(*(s.data[idx])).name);
		printf("수정할 나이 : ");
		scanf("%d",&s.data[idx]->age);
		printf("수정할 전화번호 : ");
		scanf("%d",&s.data[idx]->phone);
		printf("[ 수 정 후 ] \n");
		stu_print(&s,idx);
	}
}
void Delete()
{
	int idx = NameToIdx();
	if(idx == -1)
	{
		printf("삭제하려는 이름이 존재하지 않습니다.\n");
	}
	else
	{
		int i;
		free(s.data[idx]);
		for(i=idx;i<s.count;i++)
		{
			s.data[i] = s.data[i+1];
		}
		s.count--;
		printf("삭제 성공\n");
	}
}
//3.종료
void Exit()
{

	system("cls");
	printf("*********************\n");
	printf("    2016-01-06      \n");
	printf(" 학생관리 프로그램 종료\n");
	printf("*********************\n");
	file_save();
}


//-----일반 문자로 저장하는 방법-----------------
/*void file_save()
{
	//fopen(저장할 파일 경로+파일이름,사용하려는 용도)
	//리턴값은 해당하는 파일의 주소값을 리턴한다.
	int i;
	Stu *stu;
	FILE *f = fopen("test.txt","w");
	//fprintf(저장할 파일주소,저장할 출력타입,값이 들어있는 변수);
	fprintf(f,"%d\n",s.count);
	for(i=0;i<s.count;i++)
	{
		//fprintf(f,"%s %d %d\n",s.data[i]->name,s.data[i]->age,s.data[i]->phone);
		stu = s.data[i];	
		fprintf(f,"%s %d %d\n",stu->name,stu->age,stu->phone);
	}
	fclose(f);
}

void file_load()
{
	int size=0,i;
	FILE *f = fopen("test.txt","r");
	
	if(f == NULL)
	{
		printf("파일 불러오기 실패\n");
		return;
	}
	//fscanf(파일주소값을 가지고있는변수,입력타입,저장할변수);
	fscanf(f,"%d",&size);
	for(i=0;i<size;i++)
	{
		//데이터를 다시 절대공간을 만들어서 그안에 넣어놓는다.
		Stu *stu = (Stu*)malloc(sizeof(Stu));
		fscanf(f,"%s %d %d",stu->name,&stu->age,&stu->phone);
		save_insert(&s,stu);
	}

}*/

//-----바이너리로 저장하는 방법-----------------
void file_save()
{
	int i;
	FILE *f= fopen("test1.txt","wb");
//fwrite(저장할변수의주소,저장하는변수의크기,변수갯수,저장할파일주소); 
	fwrite(&s.count,sizeof(int),1,f);
	for(i=0;i<s.count;i++)
	{
		fwrite(s.data[i],sizeof(Stu),1,f);
	}
	fclose(f);

}

void file_load()
{
	int size=0,i;
	FILE *f = fopen("test1.txt","rb");
	if(f == NULL)
	{
		return;
	}
	fread(&size,sizeof(int),1,f);
	for(i=0;i<size;i++)
	{
		Stu *stu = (Stu*)malloc(sizeof(Stu));
		fread(stu,sizeof(Stu),1,f);
		save_insert(&s,stu);
	}
	fclose(f);
}