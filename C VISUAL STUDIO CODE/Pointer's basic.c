#include<stdio.h>
int main(){
    printf("Lets learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to p is %p\n", &ptra);
    printf("The value of pointer to p is %d\n", *ptra);
    printf("The address of some garbage is %p\n", ptr2);
    printf("The value of a is %d\n", a);
    return 0;
}