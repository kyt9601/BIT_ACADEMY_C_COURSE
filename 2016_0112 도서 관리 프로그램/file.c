#include "std.h"
void file_save(struct Save *s)
{
	//fopen(������ ���� ���+�����̸�,����Ϸ��� �뵵)
	//���ϰ��� �ش��ϴ� ������ �ּҰ��� �����Ѵ�.
	int i;
	book *b;
	FILE *f = fopen("test.txt","w");
	//fprintf(������ �����ּ�,������ ���Ÿ��,���� ����ִ� ����);
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
		printf("���� �ҷ����� ����\n");
		return;
	}
	//fscanf(�����ּҰ��� �������ִº���,�Է�Ÿ��,�����Һ���);
	fscanf(f,"%d",&size);
	for(i=0;i<size;i++)
	{
		//�����͸� �ٽ� ��������� ���� �׾ȿ� �־���´�.
		book *b = (book*)malloc(sizeof(book));
		fscanf(f,"%d %s %s \n",&b->book_num,b->book_name,b->name);
		save_insert(b,s);
	}

}