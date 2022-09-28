// Calculator making
#include<stdio.h>
int main(){
    char op;
    double first, second;
    printf("Enter an opertor(+, -, *, /): \n");
    scanf("%c", &op);
    printf("Enter two operands: \n");
    scanf("%lf %lf", &first, &second);

    switch(op){
        case '+':
        printf("%lf + %lf = %lf", first, second, first + second);
        break;
        case '-':
        printf("%lf - %lf = %lf", first, second, first - second);
        break;
        case '*':
        printf("%lf * %lf = %lf", first, second, first * second);
        break;
        case '/':
        printf("%lf / %lf = %lf", first, second, first / second);
        break;
        default:
        printf("Operator Error\n");
    }
    return 0;
}
