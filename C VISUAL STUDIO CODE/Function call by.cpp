#include<stdio.h>
int sum (int x, int y);
int main(){
    int x=4, y=7;
    printf("the value of 4+7 is %d\n", sum(x,y));
    printf("the value of x and y after function call is %d and %d\n", x, y);
    return 0;
}
int sum (int x, int y){
    int c;
    c= x+y;
    y=3434; /*The value of a and b remains same i.e. 4 and 7 because call by value is already copied in previous code and it cannot be changed without the use of pointer*/
    x=23432;
    return c;
}