typedef struct Save save;
struct Save
{
	//누적시킬 데이터를 가질 구조체변수
	Stu *data[MAX];
	//현재 데이터 갯수
	int count;
	//데이터 최대 갯수
	int max;
};

void save_init(save *s);
int save_insert(save *data,Stu *s);