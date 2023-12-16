#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number of rows");
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
			val=val*(i-j)/(j+1);
			printf("%4d",val);
		}
	printf("\n");
}
return 0;
}
