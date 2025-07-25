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
    date a,b,c;
    a.day=19;
    a.month=06;
    a.year=2004;
    
    b.day=10;
    b.month=1;
    b.year=2005;
    
    c=a;
    bool flag=false;
    if(a.day==c.day) flag=true;
    if(a.month==c.month) flag=true;
    if(a.year==c.year) flag=true;
    if(flag==true) printf("The dates are same\n");
    else printf("The dates are different\n");
    
    flag=false; //yaha flag isliye reset kiye kyuki already true ho rha hai yha se if(a.year==c.year) flag=true;
    if(a.day==b.day) flag=true; //isliye output me the dates are same b ke liye bhi show kr rha tha 
    if(a.month==b.month) flag=true;// siliye flag ko reset kiye 
    if(a.year==b.year) flag=true;
    if(flag==true) printf("The dates are same ");
    else printf("The dates are different");
    return 0;
}