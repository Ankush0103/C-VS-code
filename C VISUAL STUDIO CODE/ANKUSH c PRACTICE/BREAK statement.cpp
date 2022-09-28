#include<stdio.h>
#include<math.h>
int main(){
int a,flag=0,i;
printf("Enter the number:");
scanf("%d",&a);
if(a==2);
else
for(i=2;i<=sqrt(a);i++)
if(!a%i){
flag=1;
break;
}
if(flag==1)
printf("%d is not prime",a);
else
printf("%d is prime",a);
return 0;
} //let us consider, the number is >1
