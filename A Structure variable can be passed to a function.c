/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
 typedef struct pokemon{
        char name[10];
        int speed;
        int attack;
        char tier;
        int hp;
    }pokemon;
    
    // "pokemon" ab ek custom datatype ban gaya hai, jaise int ya char

    void fun(pokemon p){ //here pokemon is a datatype like int,char cause of typedef()
    printf("Name :%s\n",p.name);
    printf("Hp :%d\n",p.hp);
    printf("Speed :%d\n",p.speed);
    printf("attack :%d\n",p.attack);
    printf("tier :%c\n",p.tier);
    
    return ;
}

int main()
{
   pokemon pikachu; // yahan "pikachu" ek variable hai jo "pokemon" type ka hai
   pikachu.hp=90;
   pikachu.speed=890;
   pikachu.attack=56;
   pikachu.tier='A';
   strcpy(pikachu.name,"Pikachu");
   fun(pikachu); //aur yaha hum function ko call kiye
    return 0;
}