#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigocidade;
    char nome [50];
    float populacao;
    float area;
    float PIB;
    int numerodepontosturisticos;

    printf("Entre com o codigo da cidade\n");
    scanf(" %d", &codigocidade);
    printf("Codigo da cidade: %d\n", codigocidade);

    printf("Digite o seu nome\n");
    scanf(" %s", &nome);
    printf("Digite seu nome: %s\n", nome);

    printf("Digite a populacao\n");
    scanf(" %.2f", &populacao);
    printf("Populacao: %.2f\n", populacao);
    
    printf("Digite a area\n");
    scanf(" %f", &area);
    printf("Area: %f\n", area);

    printf("Digite o PIB\n");
    scanf(" %f", &PIB);
    printf("PIB: %f\n", PIB);

    printf("Digite o numero de pontos turisticos\n");
    scanf(" %d", &numerodepontosturisticos);
    printf("Numero de pontos turisticos: %d\n", numerodepontosturisticos);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
