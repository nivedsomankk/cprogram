/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int array[10];
    for(int i=0;i<=10;i++){
        scanf("%d",&array[i]);
        
    }
for(int i=0;i<=10;i++){
    if(i%2==0){
        array[i]=0;
        
    }
    else{
        array[i]=1;
        
    }
}
for(int i=0;i<=10;i++){
    printf("%d",array[i]);
}
 printf("\n");
    return 0;
}
