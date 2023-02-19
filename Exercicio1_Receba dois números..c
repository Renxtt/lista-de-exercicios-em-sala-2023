#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include  <time.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	int nub, num;
	
	//Se o primeiro for 5 ou o segundo for 10 exiba: 5 ou 10
	printf("Qual é o seu Primeiro Número?:");
	scanf("%d", &num);
	printf("Qual é o seu Segundo Número?:");
	scanf("%d", &nub);
	//Senão verifique se o segundo número é maior que o primeiro:	
	if(num==5 || nub==10){
		printf("5 ou 10");
		//TODO
	}else if(nub>=num){
		printf("Primeiro é menor");
		//TODO
	}else if(nub<=num){
		printf("Primeiro é maior");
		//TODO
	}


	//Se sim exiba
	
	// Primeiro é menor
	
	return 0;
}
