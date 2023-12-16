#include<stdio.h>
int main()
{
	int i,j,n,k;
	printf("enter the number");
	scanf("%d",&n);
	for(i=n;i>=0;i--)
	{
		for(j=0;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k=0;k<=n;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
