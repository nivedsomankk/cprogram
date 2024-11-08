/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i;
    printf("enter size of an array");
    scanf("%d",&n);
    int array[100];
printf("enter the elements");
for(i=0;i<n;i++){
    scanf("%d",&array[i]);
}
for(i=n-1;i>=0;i--){
    printf("%d",array[i]);
    
}

    return 0;
}
