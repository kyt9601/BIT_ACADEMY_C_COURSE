
void init();

void Exit();

void run();

void print();
//계좌 개설
void insert();
//전체 출력
void all_print();
//내 계좌출력
void my_account();
//계좌번호 검색
int AccountToIdx();
//비밀번호 검색
int PassToIdx(int idx);
//입금
void my_addmoney();
//출금
void my_minusmoney();
//계좌이체
void my_transfer();