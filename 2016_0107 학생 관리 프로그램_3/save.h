typedef struct Save save;
struct Save
{
	//������ų �����͸� ���� ����ü����
	Stu *data[MAX];
	//���� ������ ����
	int count;
	//������ �ִ� ����
	int max;
};

void save_init(save *s);
int save_insert(save *data,Stu *s);