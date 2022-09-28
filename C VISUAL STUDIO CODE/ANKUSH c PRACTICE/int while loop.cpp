#include<stdio.h>
int main()
{
	int i=5;
	printf("The value after i++ is %d\n", i++);/*Agar printf("The value after i++ is %d\n", ++i); then output 6 & 6 in our code output is 5 & 6 because i++ means print then increement & ++i means first increement then print*/
	printf("The value after i is %d\n", i);
	
	i+=10;
	printf("The value of i is %d\n", i);
	return 0;
	
	
	
	
	
}

