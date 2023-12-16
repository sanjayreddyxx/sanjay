#include<stdio.h>
int main()
{
	int height;
	printf("enter the height");
	scanf("%d",&height);
	if(height<165)
	printf("drawf");
	else if((height>=150)&&(height<=165))
	printf("avg height");
	else if((height>=165)&&(height<=190))
	printf("taller");
	else
	printf("abdornal height");
	return 0;
}
