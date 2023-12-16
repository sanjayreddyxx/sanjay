#include<stdio.h>
int main()
{
	int sum=0,n,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		sum+=i;
	}
	if(sum==n)
	printf("it is aperfect number");
	else
	printf("it is not a perfect number");
	return 0;
}
