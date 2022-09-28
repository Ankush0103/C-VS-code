#include<stdio.h>
int main(){
    char str[] = {'A', 'n', 'k', 'u', 'r', '\0'};//if we dont give \0 then output will not be clear. 
   //char str[] = "Ankur";
   char *ptr = str;
   while( *ptr != '\0' ){
       printf("%c", *ptr);
       ptr++;
   }
    return 0; 
}