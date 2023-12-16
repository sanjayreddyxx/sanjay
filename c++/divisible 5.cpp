#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the numbers");
	scanf("%d",&n);
	for(i=1;i<=n  ;i++)
	if(i%5==0)
	printf("%4d",i);
	return 0;
}

