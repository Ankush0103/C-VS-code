#include<stdio.h>
#include<math.h>
int main(){
int a,i;
printf("Enter the number:");
scanf("%d",&a);
for(i=0;i<=a;i++){
if(i%2)
continue;
printf("%d\n",i);
}
return 0;
}
