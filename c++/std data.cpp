#include<stdio.h>
struct student
{
	char name[50];
	int regno;
	int m1,m2,m3;
}s;
int main()
{
	int total;
	float avg;
	printf("enter the name");
	scanf("%s",&s.name);
	printf("enter regno");
	scanf("%d",&s.regno);
	printf("enter the m1,m2,m3 marks");
	scanf("%d%d%d",&s.m1,&s.m2,&s.m3);
total=s.m1+s.m2+s.m3;
printf("total marks is  %d",total);
avg=total/3;
printf("\n avg marks is %f",avg);
}

