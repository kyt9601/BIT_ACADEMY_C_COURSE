#include "std.h"

void stu_print(void *s1,int i)
{
	save *s = (save*)s1;
	printf("   �̸�  : %s\n",(*s).data[i]->name);
	printf("   ����  : %d\n",(*s).data[i]->age);
	printf("��ȭ��ȣ : %d\n",(*((*s).data[i])).phone);
}