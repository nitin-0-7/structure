/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h> 
typedef struct student{
        char name[20];
        int roll;
        char dpt[20];  
        char course[10];
        int session;
    } student;
    void check_same_department(student s1,student s2){
        if(strcmp(s1.dpt,s2.dpt)==0){
            printf("Both student are from same department %s",s1.dpt);
            
        }
        else{
            printf("Student are from different department %s and %s\n",s1.dpt,s2.dpt);
        }
    }
int main()
{
    
    student s1={"Anjali kumari",10,"B.tech","CSE",2023};
    student s2={"Nitin kumar",21,"M.tech","CSE",2023};
check_same_department(s1,s2);
    return 0;
}