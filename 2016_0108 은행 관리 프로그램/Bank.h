typedef struct Bank bank;
struct Bank
{
	//계좌번호
	//214-02-245681
	char account[14];
	//이름
	char name[9];
	//비밀번호
	char pass[5];
	//금액
	int money;
};