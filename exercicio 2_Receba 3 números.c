#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include  <time.h>
#include <string.h>


int main(void){
	setlocale(LC_ALL, "portuguese");
	int one,two,free;
	char texto[40];
	srand(time(NULL));
	free=rand() % 10+1;
	one=rand() % 10+1;
	two=rand() % 10+1;
	//printf("coloque o seu numero:");
	//scanf("%d", &one);
	//printf("coloque o seu numero:");
	//scanf("%d", &two);
	//printf("coloque o seu numero:");
	//scanf("%d", &free);	
	if(one==two&&two==free){
		printf("%50s","Todos os números são iguais");
		printf("\n%d", one);
		printf("\n%d", two);
		printf("\n%d", free);
		//TODO
	}else{
		printf("%50s","Todos os números são diferentes");
		printf("\n%d", one);
		printf("\n%d", two);
		printf("\n%d", free);
		if(one<two&&two<free){
			printf("\n%d,%d,%d", one, two, free);
			//TODO
		}else if(two<one&&one<free){
			printf("\n%d,%d,%d", two, one, free);
			//TODO
		}else if(free<two&&two<one){
			printf("\n%d,%d,%d", free, two, one);
			//TODO
		}else if(two<free&&free<one){
			printf("\n%d,%d,%d", two, free, one);	
			//TODO
		}else if(one<free&&free<two){
			printf("\n%d,%d,%d", one, free, two);	
			//TODO
		}else if(free<one&&one<two){
			printf("\n%d,%d,%d", free, one, two);	
			//TODO
		}
		
		//printf("\n%d", one);
		//printf("\n%d", two);
		//printf("\n%d", free);
		printf("\ndeseja fazer de novo?:");
		gets(texto);
	}
	
	
	
	
	while(strcmp(texto,"Sim")==0){
		free=rand() % 10+1;
		one=rand() % 10+1;
		two=rand() % 10+1;
		if(one==two&&two==free){
				printf("%50s","Todos os números são iguais");
				printf("\n%d", one);
				printf("\n%d", two);
				printf("\n%d", free);
				//TODO
		}else{
			printf("%50s","Todos os números são diferentes");
			//printf("\n%d", one);
			//printf("\n%d", two);
			//printf("\n%d", free);
			if(one<two&&two<free){
				printf("\n%d,%d,%d", one, two, free);
				//TODO
			}else if(two<one&&one<free){
				printf("\n%d,%d,%d", two, one, free);
				//TODO
			}else if(free<two&&two<one){
				printf("\n%d,%d,%d", free, two, one);
				//TODO
			}else if(two<free&&free<one){
				printf("\n%d,%d,%d", two, free, one);	
				//TODO
			}else if(one<free&&free<two){
				printf("\n%d,%d,%d", one, free, two);	
				//TODO
			}else if(free<one&&one<two){
				printf("\n%d,%d,%d", free, one, two);	
				//TODO
		}
		}
		
		printf("\ndeseja fazer de novo?:");
		gets(texto);
			
				//printf("\n%d", one);
				//printf("\n%d", two);
				//printf("\n%d", free);
	}
	return 0;

}
		



	
