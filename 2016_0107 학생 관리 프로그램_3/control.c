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
	file_load();
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
			case 5: Delete();		break;
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
	//�˻��ϴ� �Լ��� ȣ���Ѵ�.
	int idx = NameToIdx();
	//3. �˻��� ������ �����Ѵٶ�� ��� �Ѵ�.
	if(idx == -1)
	{
		printf("�������� �ʴ� �̸� �Դϴ�.\n");
	}
	else
	{
		stu_print(&s,idx);
	}
}

int NameToIdx()
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
			return i;
		}
	}
	return -1;
}

void modify()
{
	//������ �̸��� �����ϴ������� �˻�
	int idx = NameToIdx();
	//3. �����Ѵٸ� �������� �Է� ���ٸ� �������� �ʴ´�.
	if(idx == -1)
	{
		printf("�������� �ʴ� �̸��Դϴ�.\n");
	}
	else
	{
		stu_print(&s,idx);
		printf("[ �� �� ]\n");
		printf("������ �̸� : ");
		scanf("%s",s.data[idx]->name);
		//scanf("%s",(*(s.data[idx])).name);
		printf("������ ���� : ");
		scanf("%d",&s.data[idx]->age);
		printf("������ ��ȭ��ȣ : ");
		scanf("%d",&s.data[idx]->phone);
		printf("[ �� �� �� ] \n");
		stu_print(&s,idx);
	}
}
void Delete()
{
	int idx = NameToIdx();
	if(idx == -1)
	{
		printf("�����Ϸ��� �̸��� �������� �ʽ��ϴ�.\n");
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
		printf("���� ����\n");
	}
}
//3.����
void Exit()
{

	system("cls");
	printf("*********************\n");
	printf("    2016-01-06      \n");
	printf(" �л����� ���α׷� ����\n");
	printf("*********************\n");
	file_save();
}


//-----�Ϲ� ���ڷ� �����ϴ� ���-----------------
/*void file_save()
{
	//fopen(������ ���� ���+�����̸�,����Ϸ��� �뵵)
	//���ϰ��� �ش��ϴ� ������ �ּҰ��� �����Ѵ�.
	int i;
	Stu *stu;
	FILE *f = fopen("test.txt","w");
	//fprintf(������ �����ּ�,������ ���Ÿ��,���� ����ִ� ����);
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
		printf("���� �ҷ����� ����\n");
		return;
	}
	//fscanf(�����ּҰ��� �������ִº���,�Է�Ÿ��,�����Һ���);
	fscanf(f,"%d",&size);
	for(i=0;i<size;i++)
	{
		//�����͸� �ٽ� ��������� ���� �׾ȿ� �־���´�.
		Stu *stu = (Stu*)malloc(sizeof(Stu));
		fscanf(f,"%s %d %d",stu->name,&stu->age,&stu->phone);
		save_insert(&s,stu);
	}

}*/

//-----���̳ʸ��� �����ϴ� ���-----------------
void file_save()
{
	int i;
	FILE *f= fopen("test1.txt","wb");
//fwrite(�����Һ������ּ�,�����ϴº�����ũ��,��������,�����������ּ�); 
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