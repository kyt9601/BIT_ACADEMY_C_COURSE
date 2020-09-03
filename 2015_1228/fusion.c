//1. 라이브러리 선언부
#include <stdio.h>
//2.함수선언부
void foo();
int goo();
//4. 메인함수
void main()
{
	int num=0;
	foo();
	//형태1
	num = goo();
	printf("%d\n",num);
	//형태2
	printf("%d\n",goo());
	//형태3
	printf("%d\n",10);
}
//리턴타입 함수명 ()<--- 매개 변수 구역
//{
//}
void foo()
{
	printf("foo함수 입니다.\n");
}
int goo()
{
	return 10;
}

