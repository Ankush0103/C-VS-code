#include<stdio.h>
int main(){
    float dep, sv, pv;
    int yos;

    printf("The purchase value of product is:\n");
    scanf("%f", &pv);
    printf("The salvage value of product is:\n");
    scanf("%f", &sv);
    printf("The years of service of product is:\n");
    scanf("%d", &yos);

    dep = (pv - sv)/yos;
    printf("Annual depreciation is %f\n", dep);
    return 0;
}