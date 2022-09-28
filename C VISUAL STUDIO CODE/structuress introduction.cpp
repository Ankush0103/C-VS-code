#include<stdio.h>// structures are used to pack things under same structure and not use other arraays and pointers
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};//semi colon is important
int main(){
    int a = 34;
    char b = 'g';
    float d = 234.3543;
    //employee e1;
    //e1.salary = 34.454; // wont work without employee structures

    struct employee e1;
    e1. code = 100;// . is member operator and it means set employee e1 code 100
    e1.salary = 34.454;
    //e1. name = "Harry"; //wont work
    strcpy(e1.name, "Ankur");

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}