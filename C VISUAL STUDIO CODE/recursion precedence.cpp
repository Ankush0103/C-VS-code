#include<stdio.h>

int main(){
    /*int a = 3;
    printf("%d %d %d", a, ++a, a++);
    return 0; result will be 5,5 & 3 because right to left passed by compiler a++=3, ++a =5 & a=5*/
    int a = 3;
    printf("%d %d %d", a++, ++a, a);
    return 0;
}