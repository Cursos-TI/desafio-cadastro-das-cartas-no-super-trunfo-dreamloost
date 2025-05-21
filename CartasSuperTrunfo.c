#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){
	
	//Definindo linguagem
	
	setlocale(LC_ALL, "Portuguese");
	
	//Definindo constantes
	
	char estado1[4], estado2[4], nome_cidade1[50], nome_cidade2[50], cod_carta1[5], cod_carta2[5];
	int populacao1, populacao2, p_turisticos1, p_turisticos2;
	float area1, area2, pib1, pib2;
	
	// Inserção dos dados da primeira carta
		
	//Inserção do Estado
	
	printf("\nInsira o Estado da primeira carta:\n");
	scanf(" %3s", &estado1);
				
	//Inserção do código
		
	printf("\nInsira o Código da primeira carta:\n");
	scanf(" %2s", &cod_carta1);
	
	//Inserção da cidade
	 
	printf("\nInsira o nome da primeira carta:\n");
	scanf(" %[^\n]", nome_cidade1);
    getchar();

	//Inserção da população
	
	printf("\nInsira a população da primeira carta:\n");
	scanf(" %d", &populacao1);
	
	//Inserção da área
		
	printf("\nInsira a área da primeira carta:\n");
	scanf(" %f", &area1);
					
	//Inserção do PIB
	
	printf("\nInsira o PIB da primeira carta:\n");
	scanf(" %f", &pib1);
			
	//Inserção dos Pontos Turísticos

	printf("\nInsira o número de pontos turísticos da primeira carta:\n");
	scanf(" %d", &p_turisticos1);
	
	// Inserção dos dados da Segunda carta
	
	//Inserção do Estado
	
	printf("\nInsira o Estado da segunda carta:\n");
	scanf(" %3s", &estado2);
	
	//Inserção do código
	
	printf("\nInsira o Código da segunda carta:\n");
	scanf(" %2s", &cod_carta2);
	
	//Inserção da cidade
	
	printf("\nInsira o nome da segunda carta:\n");
	scanf(" %[^\n]", nome_cidade2);
    getchar();
	
	//Inserção da população
	
	printf("\nInsira a população da segunda carta:\n");
	scanf(" %d", &populacao2);
	
	//Inserção da área
	
	printf("\nInsira a área da segunda carta:\n");
	scanf(" %f", &area2);
	
	//Inserção do PIB
	
	printf("\nInsira o PIB da segunda carta:\n");
	scanf(" %f", &pib2);
	
	//Inserção dos Pontos Turísticos
	
	printf("\nInsira o número de pontos turísticos da segunda carta:\n");
	scanf(" %d", &p_turisticos2);
	
	//Dados da primeira carta
	
	printf("\nCarta 1:\n");
	printf("\nEstado: %s\n", estado1);
	printf("\nCódigo: %s%s\n", estado1, cod_carta1);
	printf("\nNome da cidade: %s\n", nome_cidade1);
	printf("\nPopulação: %d\n", populacao1);
	printf("\nÁrea: %.2f km²\n", area1);
	printf("\nPIB: %.2f bilhões de reais\n", pib1);
	printf("\nNúmero de Pontos Turísticos: %d\n", p_turisticos1);
	
	//Dados da segunda carta
	
	printf("\nCarta 2:\n");
	printf("\nEstado: %s\n", estado2);
	printf("\nCódigo: %s%s\n", estado2, cod_carta2);
	printf("\nNome da cidade: %s\n", nome_cidade2);
	printf("\nPopulação: %d\n", populacao2);
	printf("\nÁrea: %.2f km²\n", area2);
	printf("\nPIB: %.2f bilhões de reais\n", pib2);
	printf("\nNúmero de Pontos Turísticos: %d\n", p_turisticos2);
	
	return 0;
}
