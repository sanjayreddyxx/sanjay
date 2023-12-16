#include<stdio.h>
struct student
{
	char name[100];
	int regno;
	int m1,m2,m3;
}s;
int main()
{
	float avg;
	int total;
	printf("enter the name");
	scanf("%s",&s.name);
	printf("enter regno");
	scanf("%d",&s.regno);
	printf("enter m1,m2,m3 marks");
	scanf("%d%d%d",&s.m1,&s.m2,&s.m3);
	total=s.m1+s.m2+s.m3;
	printf("%d",total);
	avg=total/3;
	printf("\n%f",avg);
}
