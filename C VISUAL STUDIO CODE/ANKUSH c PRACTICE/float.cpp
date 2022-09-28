#include<stdio.h>
int main()
{
	float a=1.1; /*If float b instructon comes first than float a then compiler will show error since a was not defined first*/
	float b=a+8.9;
	printf("The value of b is %f\n",b);
	return 0;
	
	
	
	
}
