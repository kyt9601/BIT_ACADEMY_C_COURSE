typedef struct Student Stu;
struct Student
{
	char name[10];
	int age;
	int phone;
};

void stu_print(void *s1,int i);