#include<stdio.h>
#include<conio.h>
int main(){
    int n=7 , i=1, f=1; 
    

    while(i<=n){
    f = f*i;
        i++;
    }
    printf("The value of factorial %d is %d", n , f);
    
    return 0;


}