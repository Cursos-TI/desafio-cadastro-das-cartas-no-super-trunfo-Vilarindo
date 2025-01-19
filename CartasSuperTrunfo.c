#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int cod_cidade, populacao, pontos_turisticos;
    char nome[50];
    float area, pib;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);    

    printf("Digite o código da cidade: \n");
    scanf("%d", &cod_cidade);

    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Informações da carta:");
    printf("Cidade: %s \nCódigo da Cidade: %d \nPopulação: %d \nPontos Turísitcos: %d \nÁrea: %f \nPIB: %f \n", nome, cod_cidade, populacao, pontos_turisticos, area, pib);


    return 0;
}
