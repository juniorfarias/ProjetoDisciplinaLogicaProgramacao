/*
** Autor: juniorfarias
** Data: 03/02/2021
** Objetivo: 
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {

	int sorteio[4] = {16, 23, 28, 45};
	int escolha[4], i, j, qtdAcertos = 0;

	for(i = 0;i < 4; i++){
		printf("Informe o %dº número da sorte: ",i+1);
		scanf("%d", &escolha[i]);
	}

	printf("Loading");
	for(i = 0; i < 5; i++){
		system("sleep 01"); // pausa de 1 segundo
   		printf(".");
		fflush(stdout);
	}

	for(i = 0;i < 4; i++){
		for(j = 0; j < 4; j++){
			if(escolha[i]==sorteio[j]){
				qtdAcertos += 1;
			}
		}
	}

	switch (qtdAcertos){
		case 1:
			printf("\nInfelizmente não foi dessa vez. Continue persistindo. :(");
			break;
		case 2:
			printf("\nQuase ganhou premiação, mas infelizmente não foi dessa vez. Continue persistindo. :(");
			break;
		case 3:
			printf("\nUhuuu. Você ganhou. Sua premiação foi de R$ 10.000. :)");
			break;
		case 4:
			printf("\nUhuuu. Você ganhou. Sua premiação foi de R$ 100.000. :)");
			break;
		default:
			printf("\nInfelizmente não foi dessa vez. Continue persistindo. :(");
	}

  	return 0;
}