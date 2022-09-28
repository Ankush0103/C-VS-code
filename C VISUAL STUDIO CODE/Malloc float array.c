#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    // Size of operator in c
   // printf("The size of int on my pc is %d\n", sizeof(int));
   //printf("The size of float on my pc is %d\n", sizeof(float));
   // printf("The size of char on my pc is %d\n", sizeof(char));
   ptr =(float *) malloc(6 * sizeof(int));// Casting void pointer to float.
   for(int i=0; i<6; i++){
       printf("Enter the value of %d element:", i);
       scanf("%f", &ptr[i]);
   }

   for(int i=0; i<6; i++){
       printf("The value of %d element is: %f\n", i, ptr[i]);
   }   
   return 0;
}