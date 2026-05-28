#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigoDaCarta[5];
  char nomeDaCidade[50];
  int populacao;
  float area;
  float pib;
  int nDePontosTuristicos;
  
  // Área para entrada de dados
  printf("Insira a letra do Estado: \n");
  scanf("%c", &estado);
  
  printf("Insira o código da carta: \n");
  scanf("%s", codigoDaCarta);
  
  printf("Insira o nome da cidade: \n");
  scanf("%s", nomeDaCidade);
  
  printf("Insira o número de habitantes: \n");
  scanf("%d", &populacao);
  
  printf("Insira a área da cidade em quilómetros quadrados: \n");
  scanf("%f", &area);
  
  printf("Insira o PIB: \n");
  scanf("%f", &pib);
  
  printf("Insira o numero de pontos turísticos: \n");
  scanf("%d", &nDePontosTuristicos);

  // Área para exibição dos dados da cidade
  printf("\n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigoDaCarta);
  printf("Nome da Cidade: %s\n", nomeDaCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", nDePontosTuristicos);
    
return 0;
} 
