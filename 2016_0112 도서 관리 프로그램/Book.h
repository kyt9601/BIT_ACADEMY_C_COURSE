//책번호 책이름 책저자 책등록날짜 대여여부
typedef struct Book book;
struct Book
{
	int book_num;
	char book_name[20];
	char name[10];
	char book_time[11];
	char ok;
};