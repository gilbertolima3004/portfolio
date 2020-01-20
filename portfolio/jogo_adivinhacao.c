#include <stdio.h>
#include <stdlib.h>
#include <locale.h>// Essa biblioteca faz com que aceite acentos nas Strings.
#include <time.h>//Essa biblioteca chama a FUNÇÃO dos segundos [(time(0)] desde 1/02/1970, para resolver o problema do "RAND" E "SRAND".



int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");	
		
printf("                     _\n");
printf("      ,---.          U\n");
printf("     ;     \\        ;		BEM VINDO AO MEU JOGO DE ADIVINHAÇÃO!\n");
printf(" .==\"/==.  `-.___.-'	VOCÊ SERÁ DESAFIADO A ADIVINHAR UM NÚMERO ENTRE 1 E 100!\n");
printf("((+) .  .:)				BOA SORTE, JOGADOR(A)!\n");
printf("|`.-(o)-.'|\n");
printf("\\/  \\_/  \\/\n");
printf("\n\n");
		
		int segundos = time(0);//Essa função "time(0)" chama os segundos desde o dia 1/02/1970.

		/*Para resolver o problema da máquina não gerar números "realmente" randômicos, foi necessário chamar 					*/esssa função para que os números randômicos sempre mudem após o programa ser compilado.
		
		srand(segundos);
		
		int numerogrande = rand();//Função para gerar números "randômicos".
		
		int numsec = numerogrande % 100;
		/*Cálculo matemático para tirar o resto da variável "numerogrande", para
		que o número secreto seja sempre entre 1 e 99.
		*/
	
		int chute; 
		int tentativas = 1;
		int nivel;
		int numerodetentativas;
		int acertou = 0;
		double pontos = 1000;
		int verificarnumero = 1;
		
		while(verificarnumero == 1){
			printf("\nQual nível de dificuldade deseja jogar?\n");
			printf("(1) Fácil (2) Médio (3) Difícil\n\n");
			printf("No nível 1, você terá 20 tentativas.\n");
			printf("No nível 2, você terá 12 tentativas.\n");
			printf("No nível 3, você terá 6 tentativas.\n");
			printf("Escolha: ");
			scanf("%d", &nivel);
		
		
			switch(nivel){
				case 1: numerodetentativas = 20;
				verificarnumero = 0;
				break;

				case 2: numerodetentativas = 12;
				verificarnumero = 0;
				break;

				case 3: numerodetentativas = 6;
				verificarnumero = 0;
				break;

				default: printf("\n\nESCOLHA NÚMEROS ENTRE 1 A 3, POR FAVOR!\n\n");
			}
		}
		
			for(int i = 1; i <= numerodetentativas; i++){
				printf("\nTentativa %d\n", tentativas);
				printf("\nQual é o seu chute? ");
				scanf("%d", &chute);
				printf("\nSeu chute foi: %d\n", chute);
				
				
				if(chute < 0){
					printf("Você não pode chutar números negativos!\n");
					continue;
					 /*Essa função faz com que o "FOR" pare a execução deste bloco
					 e vá direto para o "INCREMENTO".	
					*/
				}
				
				acertou = (chute == numsec);
				int maior = chute > numsec;
				
				if(acertou){
					break;
				} else if (maior){	
					printf("\nSeu chute foi maior que o número secreto!\n");
					} else {
						printf("\nSeu chute foi menor que o número secreto!\n");			
					}
					tentativas++;
				}
			
				if(acertou){
					printf("Fim de Jogo!\n"); 
					printf("\nVocê acertou o jogo em %d tentativas!\n", tentativas);
				} else {
					printf("Você perdeu! Tente novamente!");
				}
return 0;
}
