#include<stdio.h>
int main()
{
	int i,num,even_sum=0;
	printf("enter the number");
	scanf("%d",&num);
	printf("%d",num);
	for(i=1;i<=num;i++)
	
		if(i%2==0)
		{
		
		printf("%d",i);
		even_sum=even_sum+i;
	}
	
	printf("%d%d",&num,&even_sum);
	return 0;
}
