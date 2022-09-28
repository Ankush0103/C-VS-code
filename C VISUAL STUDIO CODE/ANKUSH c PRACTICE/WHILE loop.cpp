#include<stdio.h>
int main(){
int a,s=0,i;
printf("Enter the number:");
scanf("%d",&a);
i=1;
while(i<=a){
s=s+i;
i++;
}
printf("The Sum of %d natural numbers=%d",a,s);
return 0;
}
