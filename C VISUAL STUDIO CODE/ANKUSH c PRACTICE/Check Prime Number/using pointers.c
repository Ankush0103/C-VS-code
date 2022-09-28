// C program to check whether number is prime by pointers.
#include<stdio.h>
int is_prime_number(int *p){
    int i;
    for(i = 2; i <= *p/2; i++){
       if(*p%i == 0){
           break;
       } 
    }
    if(i > *p/2){
        printf("%d is prime number\n", *p);
    }
    else{
        printf("%d is not a prime number\n", *p);
        }
    }
    int main(){
        int n, i;
        printf("Enter the number: \n");
        scanf("%d", &n);
        int *p = &n;
        is_prime_number(p);
        return 0;
    }
