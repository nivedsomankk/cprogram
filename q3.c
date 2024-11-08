/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    printf("Enter a string");
    fgets(str1, sizeof(str1), stdin);
    int l = strlen(str1);
    for(int i=l-1;i>=0;i--){
        printf("%c",str1[i]);
    }
    
    return 0;
}
