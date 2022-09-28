#include<stdio.h>/*program to print addrees of variable and to get its value*/
int main(){
    int a=6;
    int*ptr;
    ptr= &a;
    printf("The address of variable a is %u\n", &a);//address of a also written as ptr
    printf("The value of variable a is %d\n", *ptr);//value of address of a also *(&a)
    return 0;
}