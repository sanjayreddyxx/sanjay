#include<stdio.h>
int main()
{
	int n,sum=0,temp,r;
	printf("enter the amstrong number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp=sum)
	printf("it is amstrong number");
	else 
	printf("it is not an amstrong number");
	return 0;
}
