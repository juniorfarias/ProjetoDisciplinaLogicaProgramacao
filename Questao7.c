/*
** Autor: juniorfarias
** Data: 04/02/2021
** Objetivo: 
*/
#include <stdio.h>
#include <stdlib.h>

void loading(int time){
	printf("Loading");
	int i;
	for(i = 0; i < time; i++){
		system("sleep 01"); // pausa de 1 segundo
   	printf(".");
		fflush(stdout);
	}
}

int main(void) {
	int diasTreino[30], i, j, total15Dias = 0, dias40Min = 0;
	for(i = 0; i < 30; i++){
		printf("\nInforme quanto minutos vctreino no dia %d: ", i + 1);
		scanf("%d", &diasTreino[i]); 
	}
	loading(3);

	for(i = 0; i < 30; i++){
		if(diasTreino[i]>=40){
			dias40Min++;
		}
		if(i>=14 && i < 30){
			total15Dias += diasTreino[i];
		}
	}

	printf("Você treinou %d minutos nos últimos 15 dias.\n",total15Dias);
	printf("Você treinou %d dias por mais de 40 minutos.\n",dias40Min);

  return 0;
}