#include<stdio.h>
int main()
{
	int num;
	printf("Enter your number\n");
	scanf("%d", &num);
	
	if(num>=5){
		printf("Your number is greater than equal to 5\n");
	}
	else{
		printf("Your number is less than 5");
	}
	return 0;
}
