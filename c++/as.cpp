#include<stdio.h>
int main()
{
	int f=1,i,n;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%d",f);
	return 0;
}
