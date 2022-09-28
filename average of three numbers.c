#include<stdio.h>
int main(){
    //Average of Three numbers.
    int a, b, c, avg;
    printf("Enter First Number:\n", a);
    scanf("%d", &a);
    printf("Enter Second Number:\n", b);
    scanf("%d", &b);
    printf("Enter Third Number:\n", c);
    scanf("%d", &c);
    avg = (a + b+ c)/3;
    printf("The average of three numbers is %d", avg);
}