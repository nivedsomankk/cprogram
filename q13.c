/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int price;
    printf("enter the price");
    scanf("%d",&price);
    if(price>=100){
        printf("the discount is 10 ");
    }else if(price>=50 && price<=100){
        printf("the discount is 5 ");
    }else{
        printf("the discount is 0 ");
        
    
    }
        
    
    
    

    return 0;
}