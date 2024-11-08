/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int mark;
  printf("enter your mark");
  scanf("%d",&mark);
  if(mark>=90&&mark>=100){
      printf("you got A grade");
      
       }else if (mark>=80&&mark<=89){
           printf("you got B grade");
           
       }else if (mark>=70&&mark<=79){
           printf("you got C grade");
          } else if (mark>=60&&mark<=69){
               printf("you got D grade");
               
           }else{
               printf("you got F grade");
           }
          
  
  

    return 0;
}
