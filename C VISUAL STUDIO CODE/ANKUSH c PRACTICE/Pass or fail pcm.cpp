#include<stdio.h>
int main()
{
	int Physics, Chemistry, Maths;
	int total;
	printf("Enter Physics Marks\n");
	scanf("%d", &Physics);
	
	printf("Enter Chemistry Marks\n");
	scanf("%d", &Chemistry);
	
	printf("Enter Maths Marks\n");
	scanf("%d", &Maths);
	total= (Physics+ Chemistry + Maths)/3;
	if((total<40) || Physics<33 || Chemistry<33 || Maths<33){
		printf("Your total prcentage is %d and you are fail", total);
	}
	else{
		printf("Your total percentage is %d and you are pass",total);
	}
	return 0;
	
	
}
