/*
** Autor: juniorfarias
** Data: 03/02/2021
** Objetivo: 
*/
#include <stdio.h>
int main(void) {
	int parcelaInicial = 0, i = 1, parcelaMes;
	printf("Informe o valor da parcela inicial: ");
	scanf("%d", &parcelaInicial);
	parcelaMes = parcelaInicial;
	while(parcelaMes > 0){
		printf("Mês %d: R$%d\n", i, parcelaMes);
		i++;
		parcelaMes -= 10;
	}
  return 0;
}