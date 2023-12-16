#include<stdio.h>
int main()
{
	int rev=0,temp,n,r;
	printf("enter the number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(temp==rev)
	printf("it is palindrome");
	else
	printf("it not not palindrome");
	return 0;
}
