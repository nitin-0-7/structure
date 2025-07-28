/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
typedef struct person{
    int age;
    int weight;
    char name[20];
    char address[20];
    char sex;
    
}person;
void change(person* p){
    //(*p).age=45; //grimy way (*p)=p->
    p->age=29; //clean way 
    (*p).weight=87;
    (*p).sex='F';
    strcpy((*p).name,"Feeroza khan");
    strcpy((*p).address,"Lahore");
}

int main()
{
    person p;
    strcpy(p.name,"Rohan singh");
    p.age=76;
    p.weight=70;
    strcpy(p.address,"Gujrat");
    p.sex='M';
    printf("%s\n",p.name);
    printf("%d\n",p.weight);
    printf("%c\n",p.sex);
    printf("%s\n",p.address);
    printf("%d\n",p.age);
    
    change(&p);
    printf("%s\n",p.name);
    printf("%d\n",p.weight);
    printf("%c\n",p.sex);
    printf("%s\n",p.address);
    printf("%d\n",p.age);
    
    return 0;
}