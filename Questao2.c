/*
** Autor: juniorfarias
** Data: 03/02/2021
** Objetivo: Mostrar o valor a ser gasto com combustível em uma viagem com base nos valores de litro de gasolina, consumo médio do veículo e distância a ser percorrida
*/
#include <stdio.h>
int main(void) {

	float valorGasolina, consumoMedio, distancia;
	float valorGasto;

	printf("Informe o valor da gasolina em R$: ");
	scanf("%f", &valorGasolina);
	printf("Informe o consumo médio do seu veículo em km/l: ");
	scanf("%f", &consumoMedio);
	printf("Informe a distância a ser percorrida em km: ");
	scanf("%f", &distancia);

	valorGasto = (distancia /consumoMedio) * valorGasolina;

	printf("O valor a ser gasto será R$ %f",valorGasto); 

  return 0;
}