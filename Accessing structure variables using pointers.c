/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    }pokemon;
    
    
int main()
{
    pokemon pikachu;
    pikachu.hp=89;
    pikachu.speed=85;
    pikachu.attack=98;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");
    //int* x->address of integer value
    pokemon* x=&pikachu;
    printf("%p\n",&pikachu.hp); // Address of first member (also address of entire struct)
     printf("%p\n",&pikachu.speed);
     printf("%p\n",&pikachu.attack);
     printf("%p\n",&pikachu.tier);
     printf("%p\n",pikachu.name); //name is a char array, so this is the address of its first character
     printf("%p\n",x) // Address of struct (same as &pikachu)
    return 0;
}