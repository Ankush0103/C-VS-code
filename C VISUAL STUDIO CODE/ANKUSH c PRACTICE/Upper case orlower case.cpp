#include<stdio.h>
int main()
{
	char ch;
	printf("Enter anr character: ");
	scanf("%c", &ch);
	
	if(ch >= 'A' && ch <= 'Z')
	{
		printf("'%c' is upper case alphabet\n", ch);
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		printf("'%c' is lower case alphabet\n", ch);
	}
	else
	{
		printf("'%c' is not an alphabet", ch);
	}
	return 0;
	
	
	
	
	
	
}
