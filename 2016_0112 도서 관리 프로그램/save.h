struct Save
{
	//현재데이터를 누적시키는 아이
	book *data[MAX];
	//현재데이터 갯수
	int count;
	//최대 데이터 갯수
	int max;
};
void save_init(struct Save *save);
int save_insert(book *b,struct Save *s);