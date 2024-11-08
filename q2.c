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
    char str[100];
    int count = 0;
    printf("Enter a string");
    scanf("%s",str);
    int length = strlen(str);
    for(int i=0;i<length;i++){
        char ch = str[i];
        if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'||
        ch=='O'|| ch=='U'){
            count++;
        }
    }
    printf("number of vowels: %d\n",count);

    return 0;
}
