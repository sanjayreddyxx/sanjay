#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is bigger");
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			printf("b is bigger");
		}
	}
	if(c>b)
	{
		if(c>a)
		{
			printf("c is bigger");
		}
	}
	return 0;
}
