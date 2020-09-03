typedef struct Save save;
struct Save
{
	//누적데이터
	bank *data[10];
	//현재 데이터 갯수
	int count;
	//최대 갯수
	int max;
};
void save_init(save *s);
int save_insert(save *s,bank *b);


