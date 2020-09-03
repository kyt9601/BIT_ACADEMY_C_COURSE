#include<stdio.h>

/*void main()
{
	int num1[5]={1,2,3,4,5};
	int num2[2][5]={ {1,2,3,4,5},{6,7,8,9,10} };
	//주머니 영역표시를 하게 되면 비어있는 자리에 맞게
	//0으로 초기화가 된다.
	int num3[2][5]={ {1,2,3,4},{6,7} };
	//주머니영역을 표시하지 않으면 순서대로 값이 들어가게된다.
	int num4[2][5]={ 1,2,3,4,5,6 };
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("num3[%d][%d] = %d\n",i,j,num4[i][j]);
			//printf("&num2[%d][%d] = %d\n",i,j,&num2[i][j]);
		}
	}
}*/

/*void main()
{
	int a[5] = {1,2,3,4,5}; 
	int num2[2][5]={ {1,2,3,4,5},{6,7,8,9,10} };
	printf("num2[0]			%d\n",&num2[0][0]		);
	printf("num2[1]			%d\n",num2[1]		);
	printf("num2[0]+1		%d\n",num2[0]+1		);
	printf("num2+1			%d\n",num2+1		);
	printf("(num2+1)[3]		%d\n",(num2+1)[3]	);
	printf("num2[0][3]		%d\n",num2[0][3]	);
	printf("num2[0][1]		%d\n",num2[0][1]	);
	printf("num2[1][2]+2	%d\n",num2[1][2]+2	);
	printf("(num2[0]+1)[2]	%d\n",(num2[0]+1)[2]);
}*/

/*void main()
{
	int a[2][3];  
	printf("%d %d %d\n", &a[0][0], &a[0][1], &a[0][2]);  
	printf("%d %d %d\n", &a[1][0], &a[1][1], &a[1][2]);  
	printf("%d\n", sizeof(a));  
	printf("%d\n", sizeof(&a[0]) );  
	printf("%d\n", sizeof(a[0]) );  
	printf("%d\n", sizeof(&a[0][0]) ) ;
	printf("%d\n", a+1);  
	printf("%d\n", &a[0]+1 );  
	printf("%d\n", a[0]+1 );  
	printf("%d\n", &a[0][0]+1 ); 
}*/

/*void main()
{	
	int a[2]={1,2}
	int num[2][2]={{1,2},{3,4}};
	int num1[2][2][2]={
						  {
							 {1,2},{3,4}
						  },
						  {
							  {5,6},{7,8}
						  }
					  };
	int num2[2][2][2]={{1,2,3,4},{5,6,7,8}};
	int num3[2][2][2]={1,2,3,4,5,6,7,8};
}*/