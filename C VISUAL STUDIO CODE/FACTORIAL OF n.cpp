#include<stdio.h>
#include<conio.h>
int main(){
    int n, i=1, f=1;
    printf("Enter the number:\n");
    scanf("%d", &n);

    while(i<=n){
        f=f*i;
        i++;
    }
    printf("The value of factorial %d is %d\n", n, f);
    
    return 0;


}