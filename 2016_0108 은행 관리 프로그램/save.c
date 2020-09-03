#include "std.h"
void save_init(save *s)
{
	s->count = 0;
	s->max = 10;
}
int save_insert(save *s,bank *b)
{
	if(s->count>9)
	{
		return 0;
	}
	s->data[s->count] = b;
	s->count++;
	return 1;
}