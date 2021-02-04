/*
** Autor: juniorfarias
** Data: 03/02/2021
** Objetivo: Manual de Informações Básicas
*/
#include <stdio.h>
#include <stdlib.h>

#define HORAAULA 2.70;

void loading(int time);
void limpaLinha();

int main(void) {
	int execute, horasEstudadas, diasFalta, horasDisciplina, n1, n2;
	float valorMensalidade, percentFaltas = 0.0, media;
	char segue, opcao;
	do{
		system("clear");
		execute = 0;
		printf("Manual de Informações Básicas\n");
		printf("Digite a letra (a) para exibe informações de endereço e telefone da faculdade.\n");
		printf("Digite a letra (b) para saber o valor da sua mensalidade.\n");
		printf("Digite a letra (c) para saber se foi reprovado por faltas.\n");
		printf("Digite a letra (d) para saber se foi aprovado (Média de notas)\n");
		scanf("%c", &opcao);
		limpaLinha();
		
		switch (opcao){
			case 'a':
				printf("CAMPUS IMPERADOR: Av. do Imperador 1330 - Centro - Fortaleza - CE - Brasil. Telefone: 85 4006-7600\n");
				break;
			case 'b':
				printf("Informe a quantidade de horas estudadas por semana: ");
				scanf("%d", &horasEstudadas);
				loading(3);
				valorMensalidade = (horasEstudadas*4) * HORAAULA;
				printf("O valor da sua mensalidade é de R$ %0.2f\n", valorMensalidade);
				break;
			case 'c':
				printf("Informe a quantidade de dias que você faltou: \n");
				scanf("%d", &diasFalta);
				printf("Informe a quantidade de horas da disciplina: \n");
				scanf("%d", &horasDisciplina);
				percentFaltas = ((diasFalta*2*100)/horasDisciplina);
				loading(3);
				if(percentFaltas <= 25){
					printf("\nVocê foi aprovado com %0.2f de presenças", 100 - percentFaltas);
				} else {
					printf("\nVocê foi reprovado com %0.2f de presenças, pois não atingiu a porcentagem esperada.", 100 - percentFaltas);
				}
				break;
			case 'd':
				printf("Informe a primeira nota: \n");
				scanf("%d", &n1);
				printf("Informe a segunda nota: \n");
				scanf("%d", &n2);
				media = (n1 + n2)/2;
				loading(3);
				if(media >= 5){
					printf("\nVocê foi aprovado com média de %0.2f.", media);
				} else {
					printf("\nVocê foi reprovado com média %0.2f. Para ser aprovado, a média precisa ser maior ou igual a 5,0.", media);
				}
				break;
			default:
				printf("Opção inválida!!!\n");
		}

		printf("\n\nDeseja escolher alguma outra opção? Digite ( s ) para sim ");
		
		scanf("%s", &segue);
		limpaLinha();
		if(segue=='s'){
			execute = 1;
			system("clear");
			fflush(stdout);
		}
	}while(execute==1);

  return 0;
}

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