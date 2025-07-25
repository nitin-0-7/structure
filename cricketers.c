/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct cricketer{
        char name[20];
        int age;
        int avgruns;
        int ntm;
        //2 cricketers
    } cricketer;
    cricketer arr[2];
    for(int i=0;i<2;i++){
        printf("Enter cricketer name :");
        scanf(" %[^\n]",arr[i].name);
        printf("Enter cricketer age :");
        scanf("%d",&arr[i].age);
        printf("Enter cricketer avgruns :");
        scanf("%d",&arr[i].avgruns);
        printf("Enter cricketer no Of test matches :");
        scanf(" %d",&arr[i].ntm);
        
    }
    for(int i=0;i<2;i++){
        printf(" The cicketer name is %s\n",arr[i].name);
        printf("The cicketer %s age is %d\n",arr[i].name,arr[i].age);
        printf("The cicketer %s avgruns is %d\n",arr[i].name,arr[i].avgruns);
        printf("The cicketer %s played %d no Of test matches\n",arr[i].name,arr[i].ntm);
        printf("\n");
    }
        

    return 0;
}