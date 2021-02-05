/*
** Autor: juniorfarias
** Data: 03/02/2021
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

void limpaLinha() {
    scanf("%*[^\n]");
    scanf("%*c");
}

int main(void) {
	int segue, n1, n2;
	float result;
	char operacao;
	do{
		system("clear");
		printf("\nInforme a operação: ");
		
		scanf("%c", &operacao);
		if(operacao == 's'){
			segue = 1;
			break;
		} else {
			printf("\nInforme o primeiro número: ");
			scanf("%d", &n1);
			printf("\nInforme o segundo número: ");
			scanf("%d", &n2);
			switch (operacao){
				case '+':
					result = n1 + n2;
					printf("%d + %d = %0.f", n1, n2, result);
					break;
				case '-':
					result = n1 - n2;
					printf("%d - %d = %0.f", n1, n2, result);
					break;
				case '*':
					result = n1 * n2;
					printf("\n%d * %d = %0.f", n1, n2, result);
					break;
				case '/':
					if(n2 != 0){
						result = n1 / n2;
						printf("\n%d / %d = %f", n1, n2, result);
					} else{
						printf("\nNão é possível calcular um número dividido por zero\n");
						loading(3);
					}
					break;
				default:
					printf("Opção inválida!!!\n");
					loading(4);
			}
		}
		limpaLinha();
	}while(segue != 1);
  return 0;
}