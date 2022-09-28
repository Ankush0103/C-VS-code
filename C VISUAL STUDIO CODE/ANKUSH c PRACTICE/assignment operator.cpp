#include<stdio.h>
int main()
{
	int a = 4;
	int b = 8;
	int z= b*a; /*z=b*a /n int z is correct(legal) but b*a= int z is not correct(illegal) because = is an assignment operator*/
	printf("The value of z is %d \n",z);
	printf("The value of a-b is %d \n",a-b);
	printf("The value of a/b is %d \n",a/b);
	printf("5 when divided by 2 leaves a remainder of %d \n",5%2);
	printf("-5 when divided by 2 leaves a remainder of %d \n",-5%2);/*sign of remainder will be same as numerator so %d is 1*/
	printf("5 when divided by -2 leaves a remainder of %d \n",5%2);
	printf("-5 when divided by -2 leaves a remainder of %d \n",-5%-2);/*sign of remainder will be same as numerator so %d is 1*/	 	
	return 0;
	
	
}
