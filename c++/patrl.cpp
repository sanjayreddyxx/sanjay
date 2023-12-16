#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int val=1;
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
	{
				printf("%2d",val);
				val=val*(i-j)/(j+1);
			}
		printf("\n");
	}
	return 0;
	
}
