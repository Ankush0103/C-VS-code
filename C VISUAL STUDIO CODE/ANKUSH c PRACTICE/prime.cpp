#include<stdio.h>
int main(){
/*This not best method to solve prime number*/
int n=5, i, prime;
for(i=2;i<=n;i++){
    if(n%i==0){
        prime=0;
        break;
    }
}
if(prime==0 && n!=2){
    printf("This is not a prime number");
}
else{
    printf("This is a prime number");
}
    return 0;
}
