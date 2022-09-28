#include<stdio.h>
int main(){
    float var = 34.5678;
    int tempCheck, roundNum, tempNum;
    tempNum = var*10;
    tempCheck = tempNum%10;
    if(tempCheck >= 5){
        roundNum = var;
        roundNum++;
    }
    else{
        roundNum = var;
    }
    printf("Number after rounding off to nearest integer is %d\n", roundNum);
    // Rounding to two decimal places.
    printf("The number upto 2 decimal places is %0.2f", var);
    return 0;
}