/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
    struct person{
        char name[50];
        int salary;
        int age;
    } a,b;
    strcpy(a.name,"khusi singh");
    a.salary=20000;
    a.age=24;
    printf("%d\n",a.age);
    printf("%d\n",a.salary);
    printf("%s\n",a.name);
    printf("Enter name for next :");
    scanf("%[^\n]s",b.name);
    printf("%s",b.name);
    

    return 0;
}