#include <stdio.h>

/*struct student{
	char *name;
	int age;
	int phone;};

void main()
{
	struct student stu;
	stu.age = 10;
	stu.name = "정현석";
	stu.phone = 42087769;
	printf("이름 : %s\n",stu.name);
	printf("나이 : %d\n",stu.age);
	printf("전화번호 : %d\n",stu.phone);
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
	s.name = "정현석";
	s.phone = 42087769;
	printf("이름 : %s\n",s.name);
	printf("나이 : %d\n",s.age);
	printf("전화번호 : %d\n",s.phone);
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
	s.name = "정현석";
	s.phone = 42087769;
	printf("이름 : %s\n",p->name);
	printf("나이 : %d\n",(*p).age);
	printf("전화번호 : %d\n",p->phone);
	//p->name
	//->키워드는 1차 이상 이였을 경우 내가 가지고 있는 상대방
	//주소값에 접근하겠다 하는 역참조 의미의 키워드가 된다.
	//(*p).age
	//(*p)의 의미는 해당하는 주소로 접근하기 위해 차수를 0차로 
	//먼저 내린뒤에 일반 구조체접근 하는 방법인 .을찍어 접근한다.
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
		printf("이름을 입력하세요 : ");
		scanf("%s",s[i].name);
		printf("나이를 입력하세요 : ");
		scanf("%d",&s[i].age);
		printf("전화번호를 입력하세요 : ");
		scanf("%d",&s[i].phone);
	}
	for(i=0;i<3;i++)
	{
		printf("이름 : %s\n",s[i].name);
		printf("나이 : %d\n",s[i].age);
		printf("전화번호 : %d\n",s[i].phone);
		printf("=============================\n");
	}
}*/


//첫번째 포인터를 이용하여 주소값 이동을 통하여 입력
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
		printf("이름을 입력하세요 : ");
		scanf("%s",(p+i)->name);
		printf("나이를 입력하세요 : ");
		scanf("%d",&(*(p+i)).age);
		printf("전화번호를 입력하세요 : ");
		scanf("%d",&(p+i)->phone);
	}
	
	for(i=0;i<3;i++)
	{
		printf("이름 : %s\n",s[i].name);
		printf("나이 : %d\n",s[i].age);
		printf("전화번호 : %d\n",s[i].phone);
		printf("=============================\n");
	}
}*/

//두번째 포인터를 이용하여 주소값 이동을 통하여 입력
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
		printf("이름을 입력하세요 : ");
		scanf("%s",p[i].name);
		printf("나이를 입력하세요 : ");
		scanf("%d",&p[i].age);
		printf("전화번호를 입력하세요 : ");
		scanf("%d",&p[i].phone);
	}
	
	for(i=0;i<3;i++)
	{
		printf("이름 : %s\n",s[i].name);
		printf("나이 : %d\n",s[i].age);
		printf("전화번호 : %d\n",s[i].phone);
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
	//구조체 초기화는 데이터 순서에 따라 구조체의 변수 순서대로 
	//삽입이 된다. 또한 배열과 같이 전부 채워주기 않아도
	//나머지 변수들은 디폴트로 null 혹은 0 으로 초기화가 된다.
	stu s={"정현석",42087769};
	printf("이름 : %s\n",s.name);
	printf("나이 : %d\n",s.age);
	printf("전화번호 : %d\n",s.phone);
}*/

//다중 구조체

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