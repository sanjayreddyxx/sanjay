#include<stdio.h>
int main()
{
	int num1,num2,r,n,d,gcd,lcm;
	printf("enter the numbers");
	scanf("%d%d",&num1,&num2);
	n=(num1>num2)?num1:num2;
	d=(num1<num2)?num1:num2;
	r=n%d;
	while(r!=0)
	{
		n=d;
		d=r;
		r=n%d;
	}
	gcd=d;
	lcm=num1*num2/gcd;
	printf("\n%d and %d %d",num1,num2,gcd);
	printf("\n%d and %d %d",num1,num2,lcm);
	return 0;
	}
