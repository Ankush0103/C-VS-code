#include<stdio.h>
int main(){
    char *ptr = "Ankur Bhai";//char ptr = "Ankur bhai" then invalid because not *
    ptr = "Ankit Bhai";
    printf("%s", ptr);
    return 0;
}