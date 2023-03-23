#include<stdio.h>

main()
{
	int a=1,n,sum=0;
	printf("Enter value of N=");
	scanf("%d",&n);
	
	do
	{
	   printf("%d\n",a);
	   sum=sum+a;
	   a++;
	}

	while (a<=n);
	
	
		printf("sum of all elements are=""%d",sum);
	
	
}
