#include<stdio.h>
int main(){
    char c = 34;
    char *ptr = &c;
    printf("The value of ptr is %u\n", ptr);
    //ptr = ptr + 1;// increement of 1 happens because character size is 1 byte so its increases pointer by 1 byte.
    ptr = ptr - 1;//  decreement of 1 happens because character size is 1 byte so its increases pointer by 1 byte.
    printf("The value of ptr is %u\n", ptr);
    return 0;
}