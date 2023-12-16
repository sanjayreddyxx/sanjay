#include<stdio.h>
int main()
{
	int num1,num2,n,d,r,lcm,gcd;
	printf("enter the number");
	scanf("%d%d",&num1,&num2);
	while(r!=0)
	{
		n=d;
		d=r;
		r=n%d;
	}
gcd=d;
lcm=num1*num2/gcd;
printf("\ngcd of %d and%d=%d",num1,num2,gcd);
printf("\nlcm of %d and %d=%d",num1,num2,lcm);
return 0;
}
