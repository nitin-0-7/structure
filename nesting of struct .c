/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	typedef struct pokemon {
		char name[20];
		int hp;
		int attack ;    //simple struct banaya
		int speed;
		char tier;
	} pokemon;
	pokemon arr[3];
	strcpy(arr[0].name,"Pikachu");
	arr[0].hp=80;
	arr[0].attack=120;
	arr[0].speed=90;
	arr[0].tier='A';
	strcpy(arr[1].name,"shyduck");
	arr[1].hp=50;
	arr[1].attack=80;
	arr[1].speed=60;
	arr[1].tier='B';
	typedef struct legendarypokemon {  //simple struct ke andar ek aur struct chalaya kyuki hme firse pura na likhna pde sirf ability likhne se kaam chal gaya lekin usse pehle pokemon normal likhna jaruritha agar nhi likhte to pehla struct ka data ko dusra struct ka data me cobine nhi kr pate
		pokemon normal;       //yaha pokemon jo ki typedef se hua hai agar typedef nhi lagate to pura struct pokemon se initialise krna padta 
		char ability[10];
	} legendarypokemon;
	legendarypokemon brr[3];
	strcpy(brr[0].normal.name,"Mewtwo");
	strcpy(brr[0].ability,"pressure");
	brr[0].normal.hp=300;
	brr[0].normal.attack=340;
	brr[0].normal.speed=590;
	brr[0].normal.tier='S';
	strcpy(brr[1].normal.name,"Megaraichu");
	strcpy(brr[1].ability,"pressure");
	brr[1].normal.hp=313;
	brr[1].normal.attack=310;
	brr[1].normal.speed=510;
	brr[1].normal.tier='A';
	typedef struct godpokemon{
	    legendarypokemon legend;
	    char specialattack[10];
	}godpokemon;
	godpokemon crr[2]; //yaha 2nd struct ke andar 3rd struct bhi hai joki specialattack store kr rha hai aur 2nd strut ability to hme jb ability use krna padega to hum legend ka use krenge kyuki legend ek aisa struct hai jo ability name ka attribute hol kr rha hai  
	strcpy(crr[0].legend.normal.name,"Arceus");
	crr[0].legend.normal.hp=600;
	crr[0].legend.normal.speed=700;
	crr[0].legend.normal.attack=900;
	strcpy(crr[0].specialattack,"Versatile in Battle");
	strcpy(crr[0].legend.ability,"Multitype");
	crr[0].legend.normal.tier='S';
	strcpy(crr[1].legend.normal.name,"Groudon");
	crr[1].legend.normal.hp=550;
	strcpy(crr[1].specialattack,"Fire Blast");
	crr[1].legend.normal.speed=650;
	crr[1].legend.normal.attack=700;
	strcpy(crr[1].legend.ability,"God of Land");
	crr[1].legend.normal.tier='S';
	for(int i=0; i<2; i++) {
		printf("Name :%s\n",arr[i].name);
		printf("Hp :%d\n",arr[i].hp);
		printf("Attack :%d\n",arr[i].attack);
		printf("Speed :%d\n",arr[i].speed);
		printf("Tier :%c\n",arr[i].tier);
		printf("\n");
	}
	
	for(int i=0; i<2; i++) {
		printf("Name :%s\n",brr[i].normal.name);
		printf("Ability :%s\n",brr[i].ability);
		printf("Hp :%d\n",brr[i].normal.hp);
		printf("Attack :%d\n",brr[i].normal.attack);
		printf("Speed :%d\n",brr[i].normal.speed);
		printf("Tier :%c\n",brr[i].normal.tier);
		printf("\n");
	}
	for(int i=0;i<2;i++){
	    printf("Name :%s\n",crr[i].legend.normal.name);
	    printf("HP :%d\n",crr[i].legend.normal.hp);
	    printf("Attack :%d\n",crr[i].legend.normal.attack);
	    printf("Ability :%s\n",crr[i].legend.ability);
	    printf("Speed :%d\n",crr[i].legend.normal.speed);
	    printf("Tier :%c\n",crr[i].legend.normal.tier);
	    printf("special Attack :%s\n",crr[i].specialattack);
	    printf("\n");
	}
	return 0;
}