#include<stdio.h>
int main(){
int a,b;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
if(a>b){
printf("first number is larger.\n");
}
else if(a==b){
printf("Both are equal.\n");
}
else
{
printf("second number is larger");
}
return 0;
}
