#include <stdio.h>

int main(){
    // === VARIÁVEIS ===
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int num_pturisticos1, num_pturisticos2;
    float den_populacional1, den_populacional2;
    float pib_pcapita1, pib_pcapita2;
    float super_poder1, super_poder2;
    float inv_den_populacional1, inv_den_populacional2;

    // === CADASTRO CARTA #1 ===
    printf("\n=== CADASTRO CARTA #1 ===\n");
    
    printf("ESTADO: ");
    scanf(" %c", &estado1);

    printf("CÓDIGO: ");
    scanf("%s", codigo1);

    printf("CIDADE: ");
    scanf("%s", cidade1);

    printf("POPULAÇÃO: ");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("ÁREA: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &num_pturisticos2);

    // === CALCULOS ===
    den_populacional1 = (float)populacao1 / area1;
    den_populacional2 = (float)populacao2 / area2;
    pib_pcapita1 = pib1 / (float)populacao1;
    pib_pcapita2 = pib2 / (float)populacao2;
    inv_den_populacional1 = 1.0 / den_populacional1;
    inv_den_populacional2 = 1.0 / den_populacional2;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)num_pturisticos1 + pib_pcapita1 + inv_den_populacional1;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)num_pturisticos2 + pib_pcapita2 + inv_den_populacional2;

    // === PRINT CARTA #1 ===
    printf("\n=== CARTA #1 ===\n");
    printf("ESTADO: %c\n", estado1);
    printf("CÓDIGO: %s\n", codigo1);
    printf("CIDADE: %s\n", cidade1);
    printf("POPULAÇÃO: %lu\n", populacao1);
    printf("ÁREA: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("PONTOS TURÍSTICOS: %d\n", num_pturisticos1);
    printf("DENSIDADE POPULACIONAL: %.2f\n", den_populacional1);
    printf("PIB PER CAPITA: %.2f\n", pib_pcapita1);
    printf("SUPER PODER: %.2f\n", super_poder1);

    // === PRINT CARTA #2 ===
    printf("\n=== CARTA #2 ===\n");
    printf("ESTADO: %c\n", estado2);
    printf("CÓDIGO: %s\n", codigo2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %lu\n", populacao2);
    printf("ÁREA: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("PONTOS TURÍSTICOS: %d\n", num_pturisticos2);
    printf("DENSIDADE POPULACIONAL: %.2f\n", den_populacional2);
    printf("PIB PER CAPITA: %.2f\n", pib_pcapita2);
    printf("SUPER PODER: %.2f\n", super_poder2);

    // === COMPARAÇÕES ===
    printf("\n=== RESULTADOS ===\n");
    printf("1 -> CARTA #1 GANHOU!\n");
    printf("0 -> CARTA #2 GANHOU!\n");

    printf("\n=== POPULAÇÃO ===\n");
    printf("CARTA #1 -> %lu / CARTA #2 -> %lu\n", populacao1, populacao2);
    printf("RESULTADO: %d\n", populacao1 > populacao2);

    printf("\n=== ÁREA ===\n");
    printf("CARTA #1 -> %.2f / CARTA #2 -> %.2f\n", area1, area2);
    printf("RESULTADO: %d\n", area1 > area2);

    printf("\n=== PIB ===\n");
    printf("CARTA #1 -> %.2f / CARTA #2 -> %.2f\n", pib1, pib2);
    printf("RESULTADO: %d\n", pib1 > pib2);

    printf("\n=== PONTOS TURÍSTICOS ===\n");
    printf("CARTA #1 -> %d / CARTA #2 -> %d\n", num_pturisticos1, num_pturisticos2);
    printf("RESULTADO: %d\n", num_pturisticos1 > num_pturisticos2);

    printf("\n=== PIB PER CAPITA ===\n");
    printf("CARTA #1 -> %.2f / CARTA #2 -> %.2f\n", pib_pcapita1, pib_pcapita2);
    printf("RESULTADO: %d\n", pib_pcapita1 > pib_pcapita2);

    printf("\n=== DENSIDADE POPULACIONAL ===\n");
    printf("CARTA #1 -> %.2f / CARTA #2 -> %.2f\n", den_populacional1, den_populacional2);
    printf("RESULTADO: %d\n", den_populacional1 < den_populacional2);

    printf("\n=== SUPER PODER ===\n");
    printf("CARTA #1 -> %.2f / CARTA #2 -> %.2f\n", super_poder1, super_poder2);
    printf("RESULTADO: %d\n", super_poder1 > super_poder2);

    return 0;
}