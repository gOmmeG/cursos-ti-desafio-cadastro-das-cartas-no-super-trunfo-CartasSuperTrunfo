#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char codigo1[4], codigo2[4], codigo3[4], codigo4[4], nome1 [20], nome2 [20], nome3 [20], nome4[20];
    int populacao1, populacao2, populacao3, populacao4, pontosturisticos1, pontosturisticos2, pontosturisticos3, pontosturisticos4;
    float area1, area2, area3, area4, pib1, pib2, pib3, pib4; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cidade 1

    printf("Bem-vindo ao SUPER TRUNFO PAISES\n\ Insira o CODIGO da primeira CIDADE:\n");
    scanf("%3s", codigo1);

    printf("Insira o NOME da CIDADE:\n");
    scanf("%20s", nome1);

    printf("Insira a POPULACAO da CIDADE:\n");
    scanf("%d", &populacao1);

    printf("Insira a AREA da CIDADE em KM²:\n");
    scanf("%f", &area1);

    printf("Insira o PIB da CIDADE:\n");
    scanf("%f", &pib1);

    printf("Insira o NUMERO de PONTOS TURISTICOS:\n");
    scanf("%d", &pontosturisticos1);

    printf("Cidade 1\n");
    printf("CODIGO: %s\n", codigo1);
    printf("CIDADE: %s\n", nome1);
    printf("POPULACAO: %d\n", populacao1);
    printf("AREA: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("PONTOS TURISTICOS: %d\n", pontosturisticos1);

    //CIDADE 2

    printf("Insira o CODIGO da SEGUNDA CIDADE:\n");
    scanf("%3s", codigo2);

    printf("Insira o NOME da SEGUNDA CIDADE:\n");
    scanf("%20s", nome2);

    printf("Insira a POPULACAO da SEGUNDA CIDADE:\n");
    scanf("%d", &populacao2);

    printf("Insira a AREA da SEGUNDA CIDADE em KM²:\n");
    scanf("%f", &area2);

    printf("Insira o PIB da SEGUNDA CIDADE:\n");
    scanf("%f", &pib2);

    printf("Insira o NUMERO de PONTOS TURISTICOS da SEGUNDA CIDADE:\n");
    scanf("%d", &pontosturisticos2);
    


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}