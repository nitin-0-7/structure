/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
typedef int* ponter;  //isse ekbar me hee int* ko pointer banakr baar baar use kr skte hai 

int main()
{ 
    int x=5,y=9;
    ponter a=&x,b=&y;  //int* x and int y
    printf("%d\n",*a);  //pointer ka value print karane ke liye * ka use krenge lekin isse pehle jiska value chahiye uska address kisi alag variable me dalna hoga 
    printf("%d\n",*b); //aur value dalne ke liye &ke sath jiska value dalna hai wo likhna padega jaise a=&x
    printf("%p\n",a);
    printf("%p\n",b);
    

    return 0;
}