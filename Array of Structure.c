/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>

int main()
{ 
   typedef struct pokemon{
       int hp;
       int speed;
       int attack;
       char tier;
       char name[15];
        
    }pokemon;
    pokemon arr[3];    
    arr[0].hp=80;
    arr[0].speed=239;
    arr[0].attack=342;
    arr[0].tier='A';
    strcpy(arr[0].name,"Pikachu");
    
    arr[1].hp=120;
    arr[1].speed=300;
    arr[1].attack=450;
    arr[1].tier='S';
    strcpy(arr[1].name,"Mewtwo");
    
    arr[2].hp=90;
    arr[2].speed=212;
    arr[2].attack=142;
    arr[2].tier='B';
    strcpy(arr[2].name,"Charizard");
    
    for(int i=0;i<3;i++){
     printf(" Name :%s\n",arr[i].name);
     printf(" HP :%d\n",arr[i].hp);
     printf(" Attack :%d\n",arr[i].attack);
     printf(" Tier :%c\n",arr[i].tier);
     printf(" Speed :%d\n",arr[i].speed);
    }
    
    
    

    return 0;
}