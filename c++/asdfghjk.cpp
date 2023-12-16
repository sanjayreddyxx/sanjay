#include<stdio.h>
int main()
{
	int i,n,even_sum=0;
	printf("enter the number");
	scanf("%d",&n);
	printf("%d",n);
	for(i=1;i<=100;i++)
		if(i%2==0)
		printf("%d",i);
		even_sum=even_sum+i;
			printf("%d%d",n,even_sum);
	return 0;
}
