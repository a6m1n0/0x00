/*
Write a C program that prints the size of various types on the computer it is compiled and run on.

* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return 0
* You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
*/

#include <stdio.h>

int main(){
    char ch;
    int intger;
    long intger_0;
    long long intger_1;
    float fl;
/*
The correct way to print size_t variables is use of “%zu”. 
In '%zu' format, (z) is a length modifier,  (u) stand for unsigned type.
*/
    printf("Size of a char: %zu byte(s)\n",sizeof(ch));
    printf("Size of an int: %d byte(s)\n",sizeof(intger));
    printf("Size of a long int: %d byte(s)\n",sizeof(intger_0));
    printf("Size of a long long int: %d byte(s)\n",sizeof(intger_1));
    printf("Size of a float: %d byte(s)\n",sizeof(fl));

    return 0;

}
