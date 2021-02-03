/*
** Autor: juniorfarias
** Data: 03/02/2021
** Objetivo: Mostrar to total da pontuação de acordo com a entrada de dados. Alvo pequeno -> 2 pontos / Alvo grande -> 1 ponto
*/
#include <stdio.h>
int main(void) {
  
  int qtdAlvosPequenos, qtdAlvosGrandes, totalPontos;
  printf("=-----------Pontuação-----------=\n");
  printf("= Alvo Pequeno  -->   2 pontos  =\n");
  printf("= Alvo Grande   -->   1 ponto   =\n");
	printf("=-------------------------------=\n");
  printf("\nInforme a quantidade de alvos pequenos acertados: ");
  scanf("%d",&qtdAlvosPequenos);

  printf("Informe a quantidade de alvos grandes acertados: ");
  scanf("%d",&qtdAlvosGrandes);

  totalPontos = (qtdAlvosGrandes*1)+(qtdAlvosPequenos*2);
  printf("Sua pontuação foi: %d",totalPontos);

  return 0;
}