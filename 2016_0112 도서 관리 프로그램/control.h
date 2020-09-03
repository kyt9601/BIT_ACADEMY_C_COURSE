//1.초기화
void init();
//2. 실행
void run();
//3. 종료
void Exit();
//책등록
void book_insert();
//책목록 출력
void book_allprint();
//책목록 수정
void book_modify();
//책이름으로 찾기
int BooknameToIdx();
//책저자로 찾기
int NameToIdx();
//입력받는 똑같은 부분을 하나로 합친 함수
void scan(book *b);
//책 검색
void book_search();
