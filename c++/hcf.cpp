#include<stdio.h>
int main ()
{
	int n1,n2,i,min,hcf;
printf("enter the number");
scanf("%d%d",&n1,&n2);
	 min=(n1,n2)?n1:n2;
 hcf=1;
	for(i=1;i<=min;i++)
	{
		if(n1%i==0&&n2%i==0)
	 hcf=i;
}
printf("%d and%d %d",n1,n2,hcf);
return 0;
}
