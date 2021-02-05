/*
** Autor: juniorfarias
** Data: 04/02/2021
** Objetivo: 
*/
#include <stdio.h>
int main(void) {
	float compras[10][2];
	int i, quantidade;
	
	for(i = 0; i < 10;i++){
		printf("\nInsira o preço unitário do %dº produto: ", i+1);
		scanf("%f", &compras[i][0]);
		printf("\nInsira a quantidade comprada do %dº produto: ", i+1);
		scanf("%d", &quantidade);
		compras[i][1] = quantidade;
	}
	printf("\n");
	printf("\nFoi comprado %.0f do produto: ", compras[9][1]);
	printf("\nO preço unitário do 5º do produto foi R$ %.2f ", compras[4][0]);
	for(i = 0; i< 10; i++){
		if(compras[i][0] >= 10){
			printf("\nO produto %d teve um custo unitário maior que 10.", i+1);
		}
	}
	printf("\n");
	for(i = 0; i< 10; i++){
		float custo = compras[i][0] * compras[i][1];
		printf("\nValor total do produto %d foi %.2f", i, custo);
	}

  return 0;
}