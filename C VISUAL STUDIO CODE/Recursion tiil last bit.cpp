#include<stdio.h>
int factorial(int x);// This program will comntinue tiil the last bit.

int main(){
    int a=5;
    printf("The value of factorial %d is %d\n", a, factorial(a));
    return 0;
}

int factorial(int x){
    printf("Calling factorial %d\n", x);
    //if(x==1 || x==0){
    //   return 1; 
    //}
    if(0){

    }
    else{
        return x*factorial(x-1);
    }
}