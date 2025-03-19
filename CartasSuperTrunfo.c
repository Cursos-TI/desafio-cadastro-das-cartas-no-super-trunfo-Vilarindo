#include <stdio.h>

// Trabalho SAVA - LUIZ VILARINDO
// Cadastrar duas cartas - Regras: Não posso usar (for, while) ou condicionais (if, else).

int main() {

    printf("Super Trunfo - Novato\n");

    // Definindo as variáveis
    int cod_cidade1, populacao1, pontos_turisticos1, cod_cidade2, populacao2, pontos_turisticos2;
    char nome1[50], nome2[50];
    float area1, pib1, area2, pib2;
    
    // Cadastro das Cartas:
    // Solicitando ao usuário as informações de cada carta

    printf("Vamos cadastrar a primeira carta\n");
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome1);    

    printf("Digite o código da cidade(apenas número): \n");
    scanf("%d", &cod_cidade1);

    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib1);

    //que falta faz um loop, não é?

    printf("\n");
    printf("Vamos cadastrar a segunda carta\n");
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome2);    

    printf("Digite o código da cidade(apenas número): \n");
    scanf("%d", &cod_cidade2);

    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib2);

    // Exibição das cartas
    printf("\n");
    printf("Informações da carta 1\n");
    printf("Cidade: %s \nCódigo da Cidade: %d \nPopulação: %d \nPontos Turísitcos: %d \nÁrea: %.2f \nPIB: %.2f \n", nome1, cod_cidade1, populacao1, pontos_turisticos1, area1, pib1);
    
    printf("\n");
    printf("Informações da carta 2\n");
    printf("Cidade: %s \nCódigo da Cidade: %d \nPopulação: %d \nPontos Turísitcos: %d \nÁrea: %.2f \nPIB: %.2f \n", nome2, cod_cidade2, populacao2, pontos_turisticos2, area2, pib2);

    return 0;
}
