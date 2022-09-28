#include<stdio.h>
int main(){
    char s[34];
    printf("enter your name: ");
    scanf("%s", s);// s is already a array so  we donnt write &s
    printf("Your name is %s", s);// scanf automatically adds the null character.
    return 0;
}