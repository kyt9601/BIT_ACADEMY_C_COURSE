#include"std.h"

void save_init(struct Save *save)
{
	save->count = 0;
	save->max = MAX;
}
int save_insert(book *b,struct Save *s)
{
	if(s->count >= MAX)
	{
		return 0;
	}
	s->data[s->count] = b;
	s->count++;
	//s->data[s->count++] = b;
	return 1;
}