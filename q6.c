/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mathsmark,sciencemark;
    printf("enter the marks\n");

    scanf("%d%d",&mathsmark,&sciencemark);
    if(sciencemark>=50 && mathsmark>=50){
        printf("pass the exame");
       }else{
          printf("fail the exam");
          
       }
       
           
     
    

    return 0;
}
