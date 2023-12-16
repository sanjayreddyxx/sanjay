#include<stdio.h>
int main()
{
	int num,sum=0 ,i;
	printf("enter the perfect number");
	scanf("%d",&num);
for(i=1;i<=num/2;i++)
{
	if(num%i==0)
	{
		sum+=i;
	}
}
if(sum==num)
printf("it is  a perfect number");
else 
printf("it is not a perfect number");
return 0;
	}
	
