#include <stdio.h>

/*struct student{
	char *name;
	int age;
	int phone;};

void main()
{
	struct student stu;
	stu.age = 10;
	stu.name = "������";
	stu.phone = 42087769;
	printf("�̸� : %s\n",stu.name);
	printf("���� : %d\n",stu.age);
	printf("��ȭ��ȣ : %d\n",stu.phone);
}*/

/*typedef struct student stu;
struct student{
	char *name;
	int age;
	int phone;
};
void main()
{
	stu s;
	s.age = 10;
	s.name = "������";
	s.phone = 42087769;
	printf("�̸� : %s\n",s.name);
	printf("���� : %d\n",s.age);
	printf("��ȭ��ȣ : %d\n",s.phone);
	printf("%d\n",sizeof(s));
}*/


/*typedef struct student stu;
struct student{
	char *name;
	int age;
	int phone;
};
void main()
{
	stu s;
	stu *p = &s;
	s.age = 10;
	s.name = "������";
	s.phone = 42087769;
	printf("�̸� : %s\n",p->name);
	printf("���� : %d\n",(*p).age);
	printf("��ȭ��ȣ : %d\n",p->phone);
	//p->name
	//->Ű����� 1�� �̻� �̿��� ��� ���� ������ �ִ� ����
	//�ּҰ��� �����ϰڴ� �ϴ� ������ �ǹ��� Ű���尡 �ȴ�.
	//(*p).age
	//(*p)�� �ǹ̴� �ش��ϴ� �ּҷ� �����ϱ� ���� ������ 0���� 
	//���� �����ڿ� �Ϲ� ����ü���� �ϴ� ����� .����� �����Ѵ�.
}*/


/*typedef struct student stu;
struct student{
	char name[10];
	int age;
	int phone;
};
void main()
{
	stu s[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s",s[i].name);
		printf("���̸� �Է��ϼ��� : ");
		scanf("%d",&s[i].age);
		printf("��ȭ��ȣ�� �Է��ϼ��� : ");
		scanf("%d",&s[i].phone);
	}
	for(i=0;i<3;i++)
	{
		printf("�̸� : %s\n",s[i].name);
		printf("���� : %d\n",s[i].age);
		printf("��ȭ��ȣ : %d\n",s[i].phone);
		printf("=============================\n");
	}
}*/


//ù��° �����͸� �̿��Ͽ� �ּҰ� �̵��� ���Ͽ� �Է�
/*typedef struct student stu;
struct student{
	char name[10];
	int age;
	int phone;
};
void main()
{
	stu s[3];
	stu *p = s;
	int i;
	for(i=0;i<3;i++)
	{
		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s",(p+i)->name);
		printf("���̸� �Է��ϼ��� : ");
		scanf("%d",&(*(p+i)).age);
		printf("��ȭ��ȣ�� �Է��ϼ��� : ");
		scanf("%d",&(p+i)->phone);
	}
	
	for(i=0;i<3;i++)
	{
		printf("�̸� : %s\n",s[i].name);
		printf("���� : %d\n",s[i].age);
		printf("��ȭ��ȣ : %d\n",s[i].phone);
		printf("=============================\n");
	}
}*/

//�ι�° �����͸� �̿��Ͽ� �ּҰ� �̵��� ���Ͽ� �Է�
/*typedef struct student stu;
struct student{
	char name[10];
	int age;
	int phone;
};
void main()
{
	stu s[3];
	stu *p = s;
	int i;
	for(i=0;i<3;i++)
	{
		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s",p[i].name);
		printf("���̸� �Է��ϼ��� : ");
		scanf("%d",&p[i].age);
		printf("��ȭ��ȣ�� �Է��ϼ��� : ");
		scanf("%d",&p[i].phone);
	}
	
	for(i=0;i<3;i++)
	{
		printf("�̸� : %s\n",s[i].name);
		printf("���� : %d\n",s[i].age);
		printf("��ȭ��ȣ : %d\n",s[i].phone);
		printf("=============================\n");
	}
}*/

/*typedef struct student stu;
struct student{
	char name[10];
	int age;
	int phone;
};
void main()
{
	//����ü �ʱ�ȭ�� ������ ������ ���� ����ü�� ���� ������� 
	//������ �ȴ�. ���� �迭�� ���� ���� ä���ֱ� �ʾƵ�
	//������ �������� ����Ʈ�� null Ȥ�� 0 ���� �ʱ�ȭ�� �ȴ�.
	stu s={"������",42087769};
	printf("�̸� : %s\n",s.name);
	printf("���� : %d\n",s.age);
	printf("��ȭ��ȣ : %d\n",s.phone);
}*/

//���� ����ü

struct A{
	int a;
	int b1[10];
};
struct B{
	int a;
	struct A a1;
};
void main()
{
	struct A a;
	struct B b;
	a.a=10;
	b.a = 20;
	b.a1.a = 30;
	printf("%d\n",a.a);
	printf("%d\n",b.a);
	printf("%d\n",b.a1.b1[0]);
}