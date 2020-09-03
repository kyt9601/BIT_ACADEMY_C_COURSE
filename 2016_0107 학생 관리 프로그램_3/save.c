#include"std.h"

void save_init(save *s)
{
	s->count = 0;
	(*s).max = MAX;
}
int save_insert(save *data,Stu *s)
{
	if(data->count>MAX)
	{
		return 0;
	}
	else
	{
		(*data).data[data->count] = s;
		data->count++;
	}
	return 1;
}