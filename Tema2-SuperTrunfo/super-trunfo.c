#include <stdio.h>

int main(){
    // === VARIÁVEIS ===
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int num_pturisticos1, num_pturisticos2;
    float den_populacional1, den_populacional2;
    float pib_pcapita1, pib_pcapita2;

    // === CADASTRO CARTA #1 ===
    printf("\n=== CADASTRO CARTA #1 ===\n");
    
    printf("ESTADO: ");
    scanf(" %c", &estado1);

    printf("CÓDIGO: ");
    scanf("%s", codigo1);

    printf("CIDADE: ");
    scanf("%s", cidade1);

    printf("POPULAÇÃO: ");
    scanf("%d", &populacao1);

    printf("ÁREA: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &num_pturisticos1);

    // === CADASTRO CARTA #2 ===
    printf("\n=== CADASTRO CARTA #2 ===\n");
    
    printf("ESTADO: ");
    scanf(" %c", &estado2);

    printf("CÓDIGO: ");
    scanf("%s", codigo2);

    printf("CIDADE: ");
    scanf("%s", cidade2);

    printf("POPULAÇÃO: ");
    scanf("%d", &populacao2);

    printf("ÁREA: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &num_pturisticos2);

    // === CALCULOS ===
    den_populacional1 = populacao1 / area1;
    den_populacional2 = populacao2 / area2;
    pib_pcapita1 = pib1 / populacao1;
    pib_pcapita2 = pib2 / populacao2;   

    // === PRINT CARTA #1 ===
    printf("\n=== CARTA #1 ===\n");
    printf("ESTADO: %c\n", estado1);
    printf("CÓDIGO: %s\n", codigo1);
    printf("CIDADE: %s\n", cidade1);
    printf("POPULAÇÃO: %d\n", populacao1);
    printf("ÁREA: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n", num_pturisticos1);
    printf("DENSIDADE POPULACIONAL: %.2f\n", den_populacional1);
    printf("PIB PER CAPITA: %.2f\n", pib_pcapita1);

    // === PRINT CARTA #2 ===
    printf("\n=== CARTA #2 ===\n");
    printf("ESTADO: %c\n", estado2);
    printf("CÓDIGO: %s\n", codigo2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÁREA: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PONTOS TURÍSTICOS: %d\n", num_pturisticos2);
    printf("DENSIDADE POPULACIONAL: %.2f\n", den_populacional2);
    printf("PIB PER CAPITA: %.2f\n", pib_pcapita2);

    return 0;
}