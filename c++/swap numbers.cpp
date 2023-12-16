#include<stdio.h>
int main ()
{
	int temp,a,b;
	printf("enter the number");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d",a);
	printf("b=%d",b);
	return 0;
}














