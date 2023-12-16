#include<stdio.h>
#include<string.h>
int main()
{
	char str[]={"abbba"};
	int l=0;
	int h=strlen(str)-1;
	while(h>l)
	{
		if(str[l++]!=str[h--])	
		{
		printf("%s it is not palindrom",str);
		return 0;
	}
}
	printf("%s it is palindrome",str);
	return 0;
}
