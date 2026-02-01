#include <stdio.h>
#include <locale.h>

// MOLDE DA CARTA
typedef struct {
    char estado[1];
    char codigo[2];
    char nome[30];
    int populacao;
    float area;
    int pturistico;	
    float pib;
    float densidade;
} Carta;

// PARTE LÓGICA
Carta calcular_dados(Carta c) {
    
	c.densidade = (float)c.populacao / c.area;
	return c;
    
}

// SAÍDA - IMPRIMIR CARTAS
void exibir_carta(Carta c) {
    printf("\n--- Dados da Cidade: %s ---\n", c.nome);
    printf("Código: %s%s\n", c.estado, c.codigo);
    printf("Nome da Cidade: %s \n", c.nome);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f \n", c.area);
    printf("PIB: %.2f bilhões de reais \n", c.pib);
    printf("Número de Pontos Turísticos: %d \n", c.pturistico); 	
    printf("Densidade: %.2f hab/km²\n", c.densidade);
    printf("---------------------------\n");
}

// CORPO PRINCIPAL DO CÓDIGO
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    Carta c1, c2; // CRIAÇÃO DE DUAS CARTAS DO MOLDE

    // ENTRADA DOS DADOS
    printf("Nome Cidade 1: ");   	 scanf("%s", c1.nome);
    printf("População: ");       	 scanf("%d", &c1.populacao);
    printf("Área: ");            	 scanf("%f", &c1.area);
    printf("PIB: ");            	 scanf("%f", &c1.pib);
    printf("Pontos Turísticos: "); 	 scanf("%d", &c1.pturistico);
    

    printf("\nNome Cidade 2: "); 	 scanf("%s", c2.nome);
    printf("População: ");      	 scanf("%d", &c2.populacao);
    printf("Área: ");           	 scanf("%f", &c2.area);
    printf("PIB: ");            	 scanf("%f", &c2.pib);
    printf("Pontos Turísticos: "); 	 scanf("%d", &c2.pturistico);

    // PARTE LÓGICA
    c1 = calcular_dados(c1);
    c2 = calcular_dados(c2);

    // EXIBIÇÃO DOS DADOS
    exibir_carta(c1);
    exibir_carta(c2);

    return 0;
}
