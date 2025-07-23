/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    struct pokemon{ //user definrd datatype 
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu; // pikachu is considerd as pokemon
    pikachu.attack=90;
    pikachu.speed=73;
    pikachu.hp=120;
    pikachu.tier='A'; //S,A,B,C,D
    
    struct pokemon charizard;
    charizard.attack=40;
    charizard.speed=78; //giving the value of speed 
    charizard.hp=100;
    charizard.tier='B';
    printf("%c\n",pikachu.tier);
    
    struct pokemon mewtwo;
    printf("Enter mewtow hp :");
    scanf("%d",&mewtwo.hp); //taking user input 
    printf("The mewtwo hp is %d\n",mewtwo.hp); //printing user input
    printf("Enter mewtwo tier :");
    scanf(" %c",&mewtwo.tier); //taking user input
    printf("The mewtwo tier is %c",mewtwo.tier); //printing user input
   
    return 0;
}