#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("test.txt", "r"); //--> for reading the file
    //ptr = fopen("test.txt", "w");  //--> for writing to a file
    return 0; // "rb" --> reading in  binary
    // "wb" --> writing in binary
    // "a" --> open for append i.e. if the file do9es not exist it will be created.
    // We cannot read bbinary file by notepad++ because it wil be come with binary symbols.   
}