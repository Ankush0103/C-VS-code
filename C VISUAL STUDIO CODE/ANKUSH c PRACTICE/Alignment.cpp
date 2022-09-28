#include<stdio.h>
int main(){
char str[]="Hello World";
printf("%s\n",str);
printf("%20s\n",str);
printf("%.5s\n",str);
printf("%20.5s\n",str);
printf("%-20.5s\n",str);
return 0;
}
