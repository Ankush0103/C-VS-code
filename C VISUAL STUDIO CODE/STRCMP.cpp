#include<stdio.h>
#include<string.h>
int main(){
    char st1[45] = "Hel";
    char *st2 = "He";
    int val = strcmp(st1, st2);//strcmp compares two strings. It return 0 if strings are equal and -1 if there is mismatch.ascii value not greater than second string then positive value
    printf("Now the val is %d", val);
    return 0;
}