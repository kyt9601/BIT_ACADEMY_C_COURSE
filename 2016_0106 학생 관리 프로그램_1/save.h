
struct Save
{
	//누적시킬 데이터를 가질 변수
	Stu *data[10];
	//데이터 갯수
	int count;
	//데이터 최대 갯수
	int max;
};

void save_insert();