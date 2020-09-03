#include "std.h"
void file_save(struct Save *s)
{
	//fopen(저장할 파일 경로+파일이름,사용하려는 용도)
	//리턴값은 해당하는 파일의 주소값을 리턴한다.
	int i;
	book *b;
	FILE *f = fopen("test.txt","w");
	//fprintf(저장할 파일주소,저장할 출력타입,값이 들어있는 변수);
	fprintf(f,"%d\n",s->count);
	for(i=0;i<s->count;i++)
	{
		//fprintf(f,"%s %d %d\n",s.data[i]->name,s.data[i]->age,s.data[i]->phone);
		b = s->data[i];	
		fprintf(f,"%d %s %s %c\n",b->book_num,b->book_name,b->name,b->ok);
	}
	fclose(f);
}

void file_load(struct Save *s)
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
		book *b = (book*)malloc(sizeof(book));
		fscanf(f,"%d %s %s \n",&b->book_num,b->book_name,b->name);
		save_insert(b,s);
	}

}