#include<stdio.h>
/*
void main()
{
	int a[3] = {1,2,3};
	int *p = a;
	printf("%d\n",a);
	printf("%d\n",&a[0]);
	printf("%d\n",&*a);
	printf("%d\n",p);
	printf("%d\n",p+0);
	printf("%d\n",&p[0]);
}*/
/*
void main()
{
	int a;
	int *p = &a;
	int **dp = &p;

	printf("&a = %d\n",&a	);
	printf("p  = %d\n",p	);
	printf("&p = %d\n",&p	);
	printf("dp = %d\n",dp	);

}*/
/*
void main()
{
	int a = 10;
	int *p = &a;
	void * v = p;
	void **dv = &p;
	printf("%d\n",v);
	printf("%d\n",&a);
	printf("%d\n",p);
	printf("%d\n",*p);
	printf("%d\n",a);
	printf("%d\n",*(int*)v);
	printf("%d\n",**(int**)dv);

}*/

/*void main()
{
	int a[2][3] = {{2,4,1},{1,6,7}};
	int *p[2] = {a[0],a[1]};
	int *p1 = a[0];
	int *p2 = a[1];
	//==================================
	int a1[3] = {2,4,1};
	int a2[3] = {1,6,7};
	int *p_1 = a1;
	int *p_2 = a2;
}*/

/*void main()
{
	int a[2][3] = {{2,4,1},{1,6,7}};
	int (*p_arr)[3] = a;
	int i,j;

	for(i=0;i<2;i++){     
		for(j=0;j<3;j++){         
		//scanf("%d",&p_arr[i][j]);
		scanf("%d",*(p_arr+i)+j);
		}
	}
	for(i=0;i<2;i++){     
		 for(j=0;j<3;j++){         
		 printf("a[%d][%d] = %d\n",i,j,*(*(p_arr+i)+j));
		 }
	 }  
	// [?]  *(+?)
}*/
