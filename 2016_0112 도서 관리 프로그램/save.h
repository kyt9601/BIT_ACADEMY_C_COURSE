struct Save
{
	//���絥���͸� ������Ű�� ����
	book *data[MAX];
	//���絥���� ����
	int count;
	//�ִ� ������ ����
	int max;
};
void save_init(struct Save *save);
int save_insert(book *b,struct Save *s);