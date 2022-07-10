#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int manwaterfish(char you, char comp){
	if(you== comp){
		return 0;
	}
	if(you=='w' && comp=='w'){
		return -1;
	}
	else if(you=='f' && comp=='f'){
		return 1;
	}
	if(you=='w' && comp=='m'){
		return -1;
	}
	else if(you=='m' && comp=='w'){
		return 1;
	}
	if(you=='w' && comp=='m'){
		return -1;
	}
	else if(you=='m' && comp=='f'){
		return 1;
	}
}

int main(){
	char you, comp;
	srand(time(0));
	int number = rand()%100 * 1;
	
	if(number<33){
		comp = 'm';
	}
	else if(number>33 && number<66){
		comp='m';
	}
	else{
		comp='f';
	}
	
	printf("enter 'm' for man, 'w' for water and 'f' for fish\n");
	scanf("%c", &you);
	int result = manwaterfish(you,comp);
	if(result ==0){
		printf("game draw\n");
	}
	else if(result==1){
		printf("you win!\n");
	}
	else{
		printf("you lose!\n");
	}
	printf("you chose %c and computer chose %c. ",you,comp);
	return 0;
	}
	

