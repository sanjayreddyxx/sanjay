#include<stdio.h>
int main()
{
	int i,j,n,m;
	printf("enter the number");
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==0||i==n-1||j==0||j==m-1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
