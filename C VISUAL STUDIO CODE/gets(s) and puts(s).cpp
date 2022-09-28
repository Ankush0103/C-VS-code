#include<stdio.h>
int main(){
    char s[34];
    printf("Enter your name: ");
    gets(s);// gets(s) is used to print other other word of string also i.e. 2nd word
    puts(s);// puts(s) is used to print other other word of string also i.e. 2nd word aand cursor to last point
    printf("Your name is %s", s);
    return 0;
}