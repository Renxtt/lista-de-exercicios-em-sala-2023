#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include  <time.h>

main(void){
	setlocale(LC_ALL, "portuguese");
	int nub, num;
	
	//Se o primeiro for 5 ou o segundo for 10 exiba: 5 ou 10
	printf("Qual � o seu Primeiro N�mero?:");
	scanf("%d", &num);
	printf("Qual � o seu Segundo N�mero?:");
	scanf("%d", &nub);
	//Sen�o verifique se o segundo n�mero � maior que o primeiro:	
	if(num==5 || nub==10){
		printf("5 ou 10");
		//TODO
	}else if(nub>=num){
		printf("Primeiro � menor");
		//TODO
	}else if(nub<=num){
		printf("Primeiro � maior");
		//TODO
	}


	//Se sim exiba
	
	// Primeiro � menor
	
	return 0;
}
