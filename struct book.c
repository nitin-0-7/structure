/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    struct{
        char name[50];  //here we make a book a,b,c which has name,noofpages,price
        float price;
        int noOfpages;
    } a,b,c;
    a.noOfpages=100;
    a.price=411.5;
    strcpy(a.name,"Secret Seven"); //we use strcpy because we cant directly print the name of book we copy the name of book using strcpy and then print
    printf("%d\n",a.noOfpages);
    printf("%f\n",a.price);  
    printf("%s\n",a.name);
    
    b.noOfpages=1400;
    b.price=4119.5;
    strcpy(b.name,"Quantum physics");
    printf("%d\n",b.noOfpages);
    printf("%f\n",b.price);
    printf("%s\n",b.name);
    
    
    
    return 0;
}