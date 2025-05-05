#include <stdio.h>

int main() {

    char estado[30];
    char codigo[10];
    char cidade[255];
    int populacao;
    float area_km2;
    float PIB;
    int ponto_turistico;

    printf("Super Trunfo!\n");
    printf("Indique os dados da carta!\n");

    printf("Estado:  \n");
    scanf("%s", estado);

    printf("Código: \n");
    scanf("%s", codigo);

    printf("Cidade: \n");
    scanf("%s", cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área em km2: \n");
    scanf("%f", &area_km2);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &ponto_turistico);

    printf("\n--- Dados da Carta ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %.2f\n", area_km2);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", ponto_turistico);

    return 0;
}