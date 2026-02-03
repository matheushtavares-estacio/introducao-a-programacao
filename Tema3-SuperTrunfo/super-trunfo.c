#include <stdio.h>

int main(){
    // === VARIÁVEIS ===
    char pais1[30], pais2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int num_pturisticos1, num_pturisticos2;
    float den_populacional1, den_populacional2;
    float inv_den_populacional1, inv_den_populacional2;
    int opcao1, opcao2;
    float result_opcao1_carta1 = 0, result_opcao1_carta2 = 0, result_opcao2_carta1 = 0, result_opcao2_carta2 = 0;
    float soma_carta1 = 0, soma_carta2 = 0;

    // === CADASTRO CARTA #1 ===
    printf("\n=== CADASTRO CARTA #1 ===\n");

    printf("PAÍS: ");
    scanf("%s", pais1);

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

    printf("PAÍS: ");
    scanf("%s", pais2);

    printf("POPULAÇÃO: ");
    scanf("%d", &populacao2);

    printf("ÁREA: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &num_pturisticos2);

    // === CALCULOS ===
    den_populacional1 = (float)populacao1 / area1;
    den_populacional2 = (float)populacao2 / area2;
    inv_den_populacional1 = 1.0 / den_populacional1;
    inv_den_populacional2 = 1.0 / den_populacional2;

    // === MENU INTERATIVO 1 ===
    printf("\n=== COMPARAR - ATRIBUTO 1 ===\n");
    printf("QUAL DOS ATRIBUTOS VOCÊ DESEJA COMPARAR?\n");
    printf("[ 1 ] POPULAÇÃO;\n");
    printf("[ 2 ] ÁREA;\n");
    printf("[ 3 ] PIB;\n");
    printf("[ 4 ] NÚMERO DE PONTOS TURÍSTICOS;\n");
    printf("[ 5 ] DENSIDADE DEMOGRÁFICA;\n");
    scanf("%d", &opcao1);

    // === PRIMEIRA COMPARAÇÃO ===
    switch (opcao1)
    {
    case 1:
        printf("POPULAÇÃO (%s): %d\n", pais1, populacao1);
        printf("POPULAÇÃO (%s): %d\n", pais2, populacao2);
        if (populacao1 == populacao2){
            printf("EMPATE!\n");
        }
        else{
            populacao1 > populacao2 ? printf("%s GANHOU!\n", pais1) : printf("%s GANHOU!\n", pais2);
        }
            result_opcao1_carta1 = (float)populacao1;
            result_opcao1_carta2 = (float)populacao2;
        break;

        case 2:
        printf("ÁREA (%s): %.2f\n", pais1, area1);
        printf("ÁREA (%s): %.2f\n", pais2, area2);
        if (area1 == area2){
            printf("EMPATE!\n");
        }
        else{
            area1 > area2 ? printf("%s GANHOU!\n", pais1) : printf("%s GANHOU!\n", pais2);
        }
            result_opcao1_carta1 = area1;
            result_opcao1_carta2 = area2;
        break;

        case 3:
        printf("PIB (%s): %.2f\n", pais1, pib1);
        printf("PIB (%s): %.2f\n", pais2, pib2);
        if (pib1 == pib2){
            printf("EMPATE!\n");
        }
        else{
            pib1 > pib2 ? printf("%s GANHOU!\n", pais1) : printf("%s GANHOU!\n", pais2);
        }
            result_opcao1_carta1 = pib1;
            result_opcao1_carta2 = pib2;
        break;
    
        case 4:
        printf("PONTOS TURÍSTICOS (%s): %d\n", pais1, num_pturisticos1);
        printf("PONTOS TURÍSTICOS (%s): %d\n", pais2, num_pturisticos2);
        if (num_pturisticos1 == num_pturisticos2){
            printf("EMPATE!\n");
        }
        else{
            num_pturisticos1 > num_pturisticos2 ? printf("%s GANHOU!\n", pais1) : printf("%s GANHOU!\n", pais2);
        }
            result_opcao1_carta1 = (float)num_pturisticos1;
            result_opcao1_carta2 = (float)num_pturisticos2;
        break;

        case 5:
        printf("DENSIDADE DEMOGRÁFICA (%s): %.2f\n", pais1, den_populacional1);
        printf("DENSIDADE DEMOGRÁFICA (%s): %.2f\n", pais2, den_populacional2);
        if (den_populacional1 == den_populacional2){
            printf("EMPATE!\n");
        }
        else{
            den_populacional1 < den_populacional2 ? printf("%s GANHOU!\n", pais1) : printf("%s GANHOU!\n", pais2);
        }
            result_opcao1_carta1 = inv_den_populacional1;
            result_opcao1_carta2 = inv_den_populacional2;
        break;

    default:
        printf("OPÇÃO INVÁLIDA!");
        break;
    }

    // === MENU INTERATIVO 2 ===
    printf("\n=== COMPARAR - ATRIBUTO 2 ===\n");
    printf("QUAL DOS ATRIBUTOS VOCÊ DESEJA COMPARAR?\n");
    printf("[ 1 ] POPULAÇÃO;\n");
    printf("[ 2 ] ÁREA;\n");
    printf("[ 3 ] PIB;\n");
    printf("[ 4 ] NÚMERO DE PONTOS TURÍSTICOS;\n");
    printf("[ 5 ] DENSIDADE DEMOGRÁFICA;\n");
    scanf("%d", &opcao2);

    // === SEGUNDA COMPARAÇÃO ===
    if (opcao1 == opcao2){
        printf("ESTA COMPARAÇÃO JÁ FOI REALIZADA.");
    }
    
    else{switch (opcao2){

    case 1:
        printf("POPULAÇÃO (%s): %d\n", pais1, populacao1);
        printf("POPULAÇÃO (%s): %d\n", pais2, populacao2);
        if (populacao1 == populacao2){
            printf("EMPATE!\n");
        }
        else{
            populacao1 > populacao2 ? printf("%s GANHOU!\n", pais1) : printf("%s GANHOU!\n", pais2);
        }
            result_opcao2_carta1 = (float)populacao1;
            result_opcao2_carta2 = (float)populacao2;
        break;

        case 2:
        printf("ÁREA (%s): %.2f\n", pais1, area1);
        printf("ÁREA (%s): %.2f\n", pais2, area2);
        if (area1 == area2){
            printf("EMPATE!\n");
        }
        else{
            area1 > area2 ? printf("%s GANHOU!\n", pais1) : printf("%s GANHOU!\n", pais2);
        }
            result_opcao2_carta1 = area1;
            result_opcao2_carta2 = area2;
        break;

        case 3:
        printf("PIB (%s): %.2f\n", pais1, pib1);
        printf("PIB (%s): %.2f\n", pais2, pib2);
        if (pib1 == pib2){
            printf("EMPATE!\n");
        }
        else{
            pib1 > pib2 ? printf("%s GANHOU!\n", pais1) : printf("%s GANHOU!\n", pais2);
        }
            result_opcao2_carta1 = pib1;
            result_opcao2_carta2 = pib2;
        break;
    
        case 4:
        printf("PONTOS TURÍSTICOS (%s): %d\n", pais1, num_pturisticos1);
        printf("PONTOS TURÍSTICOS (%s): %d\n", pais2, num_pturisticos2);
        if (num_pturisticos1 == num_pturisticos2){
            printf("EMPATE!\n");
        }
        else{
            num_pturisticos1 > num_pturisticos2 ? printf("%s GANHOU!\n", pais1) : printf("%s GANHOU!\n", pais2);
        }
            result_opcao2_carta1 = (float)num_pturisticos1;
            result_opcao2_carta2 = (float)num_pturisticos2;
        break;

        case 5:
        printf("DENSIDADE DEMOGRÁFICA (%s): %.2f\n", pais1, den_populacional1);
        printf("DENSIDADE DEMOGRÁFICA (%s): %.2f\n", pais2, den_populacional2);
        if (den_populacional1 == den_populacional2){
            printf("EMPATE!\n");
        }
        else{
            den_populacional1 < den_populacional2 ? printf("%s GANHOU!\n", pais1) : printf("%s GANHOU!\n", pais2);
        }
            result_opcao2_carta1 = inv_den_populacional1;
            result_opcao2_carta2 = inv_den_populacional2;
        break;

    default:
        printf("OPÇÃO INVÁLIDA!");
        break;
    }}

    // === RESULTADO ===
    soma_carta1 = result_opcao1_carta1 + result_opcao2_carta1;
    soma_carta2 = result_opcao1_carta2 + result_opcao2_carta2;

    printf("\n=== RESULTADO ===\n");
    printf("%s: %.2f\n", pais1, soma_carta1);
    printf("%s: %.2f\n", pais2, soma_carta2);

    if (soma_carta1 == soma_carta2)
    printf("\nEMPATE!!!!\n");

    else{
        soma_carta1 > soma_carta2 ? printf("%s VENCEU!!!\n", pais1) : printf("%s VENCEU!!!\n", pais2); 
    }

    printf("\nPROGRAMA ENCERRADO!\n");
    return 0;
}