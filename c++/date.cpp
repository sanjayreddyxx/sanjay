#include<stdio.h>
struct date
{
	int date;
	int mon;
	int year;
}s;
int main()
{
	s.date=11;
	scanf("%d",&s.date);
	s.mon=11;
	scanf("%d",&s.mon);
	s.year=2006;
	scanf("%d",&s.year);
	return 0;
}
