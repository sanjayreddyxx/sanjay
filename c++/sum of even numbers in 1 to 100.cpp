#include<stdio.h>
int main()
{
	int n,even_sum=0,i;
	printf("enter the number");
	scanf("%d",&n);
	printf("%d",n);
	for(i=0;i<=100;i++)
		if(i%2==0)
		printf("%d",i);
		even_sum=even_sum+i;
	printf("%d%d",even_sum,n);
	return 0;
	}
