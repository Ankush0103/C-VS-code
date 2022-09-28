#include<stdio.h>
int main()
{

int a,s=0,i;
printf("Enter the number:");
scanf("%d",&a);
i=1;
do{
s=s+i;
i++;
} while(i<=a);
printf("The Sum of %d natural numbers=%d",a,s);
return 0;
}
