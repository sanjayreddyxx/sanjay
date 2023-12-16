#include<stdio.h>
int main()
{
	int sum=0,n,r;
	printf("enter the number");
	scanf("%d",&n);
		while(n)
		{
		r=n%10;
		sum=sum+(r+1);
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}
