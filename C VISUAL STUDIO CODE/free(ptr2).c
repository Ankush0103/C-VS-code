#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int *ptr2;
    // Size of operator in c
   // printf("The size of int on my pc is %d\n", sizeof(int));
   //printf("The size of float on my pc is %d\n", sizeof(float));
   // printf("The size of char on my pc is %d\n", sizeof(char));
   ptr =(int *) malloc(6 * sizeof(int));// Casting void pointer to int.
   for(int i=0; i<600; i++){
       ptr2 = (int *)malloc(6000000 *sizeof(int));
       printf("Enter the value of %d element:", i);
       scanf("%d", &ptr[i]);
       free(ptr2); // by free(ptr2) memory is not wasted and memory in task manager remains same.
       
   }

   for(int i=0; i<6; i++){
       printf("The value of %d element is: %d\n", i, ptr[i]);
   }   
   return 0;
}