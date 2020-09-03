#include "std.h"

void stu_print(void *s1,int i)
{
	save *s = (save*)s1;
	printf("   이름  : %s\n",(*s).data[i]->name);
	printf("   나이  : %d\n",(*s).data[i]->age);
	printf("전화번호 : %d\n",(*((*s).data[i])).phone);
}