#include<stdio.h>
#include"extern.h"
/*void main()
{
	//자동변수는 일반 변수를 사용하여도 auto 를 붙여주기 때문에
	//일반변수 또한 자동변수에 속한다.
	int a = 10;
	auto int b = 20;
	printf("%d %d\n",a,b);
}*/

/*void main()
{
	int a = 10;
	//가시영역이라고 불리운다.
	//해당하는 영역안에서만 변수가 살아있고
	//벗어나게 되면 해당하는 변수는 사라진다.
	{
		int b = 10;
		printf("%d\n",b);
	}
	printf("%d \n",a);
}*/


//static 변수
/*void static_test();
void main()
{
	int i=0;
	for(i=0;i<5;i++)
	{
		static_test();
	}
}
void static_test()
{
	int num = 0;
	static int static1 = 0;
	printf("num의 값 : %d \t num의 주소 : %d\n",++num,&num);
	printf("static1의 값 : %d \t static1의 주소 : %d\n",++static1,&static1);
}*/

//레지스터 변수
/*void main()
{
	register int num = 10;
	register int num1 = 20;
	printf("%d\n",num*num/num*num1);
}*/

//전역 변수

/*int b=1;
void main()
{
	printf("%d %d\n",a,b);
	foo();
}*/