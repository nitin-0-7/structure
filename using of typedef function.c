/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{ 
    typedef struct book{  // yaha typedef ka use krke struct book ke jagh sirf cw bhi likhne se kaam ho jayega
        char name[50];  // typedef kisi bada datatype ka name change krne ke liye use kiye jata hai
        int noOfpages;  // typedef oldname datatype newname datatype
        int price;
                       //aur iss jagah old datatype ka name struct book hai aur new datatype ka name cw hai
    }cw;
    cw a;
    cw b;
    strcpy(a.name,"Physics H.C Verma");
    printf("%s\n",a.name);
    printf("Enter no of pages  ");
    scanf("%d",&a.noOfpages);
    printf(" The no of pages %d",a.noOfpages);
    

    return 0;
}