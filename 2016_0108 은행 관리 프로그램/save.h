typedef struct Save save;
struct Save
{
	//����������
	bank *data[10];
	//���� ������ ����
	int count;
	//�ִ� ����
	int max;
};
void save_init(save *s);
int save_insert(save *s,bank *b);


