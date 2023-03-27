#include<stdio.h>
 main()
{

    int n,a=1,sum=0;
    printf("Enter Number :");
    scanf("%d", &n);
    
    do
    
    {
    	sum+=a;
    	a++;
	}while(a<=n);
	printf("Sum = %d\n",sum);


}
