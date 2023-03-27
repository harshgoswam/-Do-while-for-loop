#include<stdio.h>
main()
{
	int a=1,n;
	printf("Enter a number to table=");
	scanf("%d",&n);
	
	for(a,n;a<=10;a++)
	{
		printf("%d * %d = %d\n",n,a,n*a);
	}
}
