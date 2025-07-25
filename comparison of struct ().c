/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    typedef struct date{
        int day;
        int month;
        int year;
    } date;
    date a,b;
    a.day=19;
    a.month=06;
    a.year=2004;
    
    b.day=10;
    b.month=01;
    b.year=2004;
    
    bool flag=true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false;
    if(a.year!=b.year) flag=false;
    
if(flag==false) printf("The dates are diffrent ");
else printf("The dates are same ");
    return 0;
}