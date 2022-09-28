#include<stdio.h>
int main()
{
	int num;
	printf("Enter your number\n");
	scanf("%d", &num);
	
	if (num>=90){
		printf("Your Grade is A \n");
	}
	else if(num>=80){
		printf("Your Grade is B\n");
	}
	else{
		printf("Your Grade is C");
	}
	return 0;

	
	
	
	
	
	
}
