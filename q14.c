/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int temp;
    printf("enter the temperature");
    scanf("%d",&temp);
        
        if(temp<=15){
        printf("the temperature is cold");
    }else if(temp>=15 && temp<=25){
        printf("the temperature is warm");
    }else{
        printf("the temperature is hot");
}
    return 0;
}
