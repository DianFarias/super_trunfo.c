#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca necessária para idiomas


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	
	//CARTA 1
	char estado1[1];
	char codigo1[2];
	char NomeCidade1[25];
	int populacao1;
	float area1;
	float pib1;
	int landmarks1;
	
	//CARTA 2
	char estado2[1];
	char codigo2[2];
	char NomeCidade2[25];
	int populacao2;
	float area2;
	float pib2;
	int landmarks2;
	
	//Leitura da Carta 1
	printf("Olá, usuário! Hoje jogaremos um jogo, onde você criará duas cartas de super trunfo.\n");
	printf("#########################################################################.\n");
	printf(" ~~ ~~ Carta 1 ~~ ~~\n");
	printf("Diga-me uma letra de 'A' a 'H'.\n");
	scanf("%s",&estado1);
	printf("Digite dois algarismos para ser o código da Carta 1.\n");
	scanf("%s", &codigo1);
	printf("Diga o nome de uma cidade.\n");
	scanf("%s", &NomeCidade1);
	printf("Diga a população dessa cidade.\n");
	scanf("%d", &populacao1);
	printf("Diga a área dessa cidade.\n");
	scanf("%f", &area1);
	printf("Diga o PIB dessa cidade.\n");
	scanf("%f", &pib1);
	printf("Quantos pontos turísticos há nessa cidade?\n");
	scanf("%d",&landmarks1);
	printf("#########################################################################.\n");
	
	//Leitura da Carta 2
	
	printf("Agora você dirá os dados da segunda carta.\n");
	printf("#########################################################################.\n");
	printf(" ~~ ~~ Carta 2 ~~ ~~\n");
	printf("Diga-me uma letra de 'A' a 'H'.\n");
	scanf("%s",&estado2);
	printf("Digite dois algarismos para ser o código da Carta 1.\n");
	scanf("%s", &codigo2);
	printf("Diga o nome de uma cidade.\n");
	scanf("%s", &NomeCidade2);
	printf("Diga a população dessa cidade.\n");
	scanf("%d", &populacao2);
	printf("Diga a área dessa cidade.");
	scanf("%f", &area2);
	printf("Diga o PIB dessa cidade.");
	scanf("%f", &pib2);
	printf("Quantos pontos turísticos há nessa cidade?");
	scanf("%d",&landmarks2);
	printf("#########################################################################.\n");
	
	
	//Apresentando as cartas
	
	printf("Agora veja as suas cartas!\n");
	printf(" ~~ ~~ Carta 1 ~~ ~~\n");
	printf("Estado: %s \n",estado1);
	printf("Código: %s %s \n", estado1, codigo1);
	printf("Nome da cidade: %s \n", NomeCidade1);
	printf("População: %d \n", populacao1);
	printf("Área: %.2f Km² \n", area1);
	printf("PIB: %.2f bilhões de reais \n",pib1);
	printf("Número de Pontos Turísticos: %d \n", landmarks1);	
	

	printf(" ~~ ~~ Carta 2 ~~ ~~\n");
	printf("Estado: %s \n",estado2);
	printf("Código: %s %s \n", estado2, codigo2);
	printf("Nome da cidade: %s \n", NomeCidade2);
	printf("População: %d \n", populacao2);
	printf("Área: %.2f Km² \n", area2);
	printf("PIB: %.2f bilhões de reais \n",pib2);
	printf("Número de Pontos Turísticos: %d \n", landmarks2);
	
	printf("#########################################################################.\n");
	printf("Fim de jogo! Obrigado por testar o meu código. \n");
	printf("Desenvolvido por Dian Carvalho.");
	
	
	
	
	
	
	
	
	return 0;
}
