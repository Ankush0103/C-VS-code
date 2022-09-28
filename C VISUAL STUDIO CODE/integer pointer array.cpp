#include<stdio.h>
int main(){
    int i = 34;
    int *ptr = &i;//ptr stores address of another variable.
    printf("The value  of ptr is %u\n", ptr);
    //ptr++; output is 642216 and 642220 increement of 4 bytes as each integer array/pointer has 4 bytes size.
    //ptr--;// output is 642216 and 642212 decreement of 4 bytes as each integer array/pointer has 4 bytes size.
    //ptr = ptr + 1;//output is 642216 and 642220 increement of 4 bytes as each integer array/pointer has 4 bytes size.
    ptr = ptr + 2;//output is 642216 and 642224 increement of 8 bytes as each integer array/pointer has 4 bytes size we increase by 2 in code.
    printf("The value of ptr is %u\n", ptr);
    return 0; 
}