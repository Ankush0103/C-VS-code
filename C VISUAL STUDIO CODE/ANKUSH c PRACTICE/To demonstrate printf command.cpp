#include<stdio.h>
int main()
{
	//Declare and initialize varibles
	int num = 7;
	float amt=123.45;
	char code='A';
	double pi=3.14159;
	long int population_of_india = 10000000000;
	char msg[] = "Hi";

	//Print the number of variables
	printf("\n NUM=%d \n AMT=%f \n CODE=%c \n PI= %e \n POPULATION OF INDIA=%1d \n MESSAGE= %s",num, amt, code, pi, population_of_india, msg);
	return 0;
}
