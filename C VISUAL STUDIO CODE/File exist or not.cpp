#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr = fopen("tes4t.txt", "r");
    if(ptr == NULL){
        printf("This file does not exist\n");
    }
    else{
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);
    }

    return 0;
}