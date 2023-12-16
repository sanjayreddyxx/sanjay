#include<stdio.h>
int main()
{
int temp,n,sum=0,r;
printf("enter the amstrong number");
scanf("%d",&n);
temp=n;
while(n>0)
{
	r=n%10;
	sum=sum+(r*r*r);
	n=n/10;
}
if(temp==sum)
printf("it is a amstrong number");
else 
printf("it is not amstrong number");
return 0;
}
