#include<stdio.h>

main()
{
	int a=1,n;
	printf("Enter value of N=");
	scanf("%d",&n);
	do
	{
		printf("%d\n",n);
		n--;
	}
	while (a<=n);
}
