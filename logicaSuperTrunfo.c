#include <stdio.h>
#include <string.h>

int main(){
    // ==================================== VARIAVEIS ====================================
    char estado_1, estado_2;
    char codigo_1[20];
    char codigo_2[20];
    char nome_cidade_1[50];
    char nome_cidade_2[50];
    int num_pontos_turisticos_1, num_pontos_turisticos_2;
    float area_1, area_2, pib_1, pib_2, densidadePopulacional_1, densidadePopulacional_2, pibPerCapita_1, pibPerCapita_2, inversoDensidadePopulacional_1,  inversoDensidadePopulacional_2;
    unsigned long int populacao_1, populacao_2;
    float superPoder_1, superPoder_2;

    // ================================= CADASTRO DAS CARTAS =============================

    printf("------------------------------------------\n");
    printf("                SUPER TRUNFO              \n");
    printf("------------------------------------------\n");

    printf("\n");

    printf("------------------------------------------\n");
    printf("          CADASTRE SUAS CARTAS:           \n");
    printf("                 CARTA 1                  \n");
    printf("------------------------------------------\n");

    printf("\n"); 

    printf("- Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    printf("DIGITE O ESTADO: \n");
    scanf("%c", &estado_1);

    printf("- Codigo da Carta: use a letra do estado seguida de um numero de 01 a 04. Exemplo: A01, B03. \n");
    printf("DIGITE O CODIGO DA CARTA: \n");
    scanf("%s", &codigo_1);

    getchar();

    printf("DIGITE O NOME DA CIDADE: \n");
    fgets(nome_cidade_1, 50, stdin);
    nome_cidade_1[strcspn(nome_cidade_1,"\n")] =0;

    printf("DIGITE A POPULACAO: \n");
    scanf("%lu", &populacao_1);

    printf("- ATENCAO: ao digitar a area, use ponto para separar os decimais. Exemplo: 1220.12\n");
    printf("DIGITE A AREA: \n");
    scanf("%f", &area_1); 

    printf("- ATENCAO: ao digitar o PIB, use ponto para separar os decimais. Exemplo: 347800.45\n");
    printf("DIGITE O PIB: \n");
    scanf("%f", &pib_1);

    printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &num_pontos_turisticos_1);

    // ========== CADASTRO DA SEGUNDA CARTA ==========

    printf("------------------------------------------\n");
    printf("          CADASTRE SUAS CARTAS:           \n");
    printf("                 CARTA 2                  \n");
    printf("------------------------------------------\n");

    printf("\n"); 

    printf("- Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    printf("DIGITE O ESTADO: \n");
    scanf(" %c", &estado_2);

    printf("- Codigo da Carta: use a letra do estado seguida de um numero de 01 a 04. Exemplo: A01, B03. \n");
    printf("DIGITE O CODIGO: \n");
    scanf("%s", &codigo_2);

    getchar();

    printf("DIGITE O NOME DA CIDADE: \n");
    fgets(nome_cidade_2, 50, stdin);
    nome_cidade_2[strcspn(nome_cidade_2,"\n")] = 0;

    printf("DIGITE A POPULACAO: \n");
    scanf("%lu", &populacao_2);

    printf("- ATENCAO: ao digitar a area, use ponto para separar os decimais. Exemplo: 1220.12\n");
    printf("DIGITE A AREA: \n");
    scanf("%f", &area_2); 

    printf("- ATENCAO: ao digitar o PIB, use ponto para separar os decimais. Exemplo: 347800.45\n");
    printf("DIGITE O PIB: \n");
    scanf("%f", &pib_2);

    printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &num_pontos_turisticos_2);

    densidadePopulacional_1 = (float)populacao_1/area_1;
    densidadePopulacional_2 = (float)populacao_2/area_2;

    pibPerCapita_1 = (float)pib_1/populacao_1;
    pibPerCapita_2 = (float)pib_2/populacao_2;
   
   inversoDensidadePopulacional_1 = area_1 / (float)densidadePopulacional_1;
   inversoDensidadePopulacional_2 = area_2 / (float)densidadePopulacional_2;

    superPoder_1 = (float)populacao_1 + area_1 + pib_1 + (float)num_pontos_turisticos_1 + pibPerCapita_1 + inversoDensidadePopulacional_1;
    superPoder_2 = (float)populacao_2 + area_2 + pib_2 + (float)num_pontos_turisticos_2 + pibPerCapita_2 + inversoDensidadePopulacional_2;

    printf("\n"); 

    // ==================================== SAÍDA DAS CARTAS CADASTRADAS ====================================
    printf("--------------------------------------------------------------\n");
    printf("                             CARTA 1                          \n");
    printf("--------------------------------------------------------------\n");
    printf("            ESTADO: %c\n", estado_1);
    printf("            CODIGO: %s\n", codigo_1);
    printf("            NOME DA CIDADE: %s\n", nome_cidade_1);
    printf("            POPULACAO: %lu\n", populacao_1);
    printf("            AREA: %.2f km ao quadrado\n", area_1);
    printf("            PIB: %.2f bilhoes de reais\n", pib_1);
    printf("            NUMERO DE PONTOS TURISTICOS: %d\n", num_pontos_turisticos_1);
    printf("            DENSIDADE POPULACIONAL: %.2f hab/km ao quadrado\n", densidadePopulacional_1);
    printf("            PIB per Capita: %.2f reais\n", pibPerCapita_1);
    printf("            SUPER PODER: %.2f \n", superPoder_1);
    printf("--------------------------------------------------------------\n"); 

    printf("\n"); 

    printf("--------------------------------------------------------------\n");
    printf("                             CARTA 2                          \n");
    printf("--------------------------------------------------------------\n");
    printf("            ESTADO: %c\n", estado_2);
    printf("            CODIGO: %s\n", codigo_2);
    printf("            NOME DA CIDADE: %s\n", nome_cidade_2);
    printf("            POPULACAO: %lu\n", populacao_2);
    printf("            AREA: %.2f km quadrado\n", area_2);
    printf("            PIB: %.2f  bilhoes de reais\n", pib_2);
    printf("            NUMERO DE PONTOS TURISTICOS: %d\n", num_pontos_turisticos_2);
    printf("            DENSIDADE POPULACIONAL: %.2f hab/km quadrado\n", densidadePopulacional_2);
    printf("            PIB per Capita: %.2f reais\n", pibPerCapita_2);
    printf("            SUPER PODER: %.2f \n", superPoder_2);
    printf("-------------------------------------------------------------\n");
    
    // Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
    // Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).

    printf("\n");
    printf("--------------------------------------------------------------\n");
    printf("                     COMPARACAO DE CARTAS                     \n");
    printf("--------------------------------------------------------------\n");
    if (populacao_1 > populacao_2) {
        printf("|                 POPULACAO: Carta 1 venceu (%d)              |\n", populacao_1 > populacao_2);
    } else {
        printf("|                 POPULACAO: Carta 2 venceu (%d)              |\n", populacao_1 > populacao_2);
    }
    if (area_1 > area_2) {
        printf("|                   AREA: Carta 1 venceu (%d)                 |\n", area_1 > area_2);
    } else {
        printf("|                   AREA: Carta 2 venceu (%d)                 |\n", area_1 > area_2);
    }
    if (pib_1 > pib_2) {
        printf("|                   PIB: Carta 1 venceu (%d)                  |\n", pib_1 > pib_2);
    } else {
        printf("|                   PIB: Carta 2 venceu (%d)                  |\n", pib_1 > pib_2);
    }
    if (num_pontos_turisticos_1 > num_pontos_turisticos_2) {
        printf("|      NUMERO DE PONTOS TURISTICOS: Carta 1 venceu (%d)       |\n", num_pontos_turisticos_1 > num_pontos_turisticos_2);
    } else { 
        printf("|      NUMERO DE PONTOS TURISTICOS: Carta 2 venceu (%d)       |\n", num_pontos_turisticos_1 > num_pontos_turisticos_2);
    }
    if (densidadePopulacional_1 < densidadePopulacional_2) {
        printf("|         DENSIDADE POPULACIONAL: Carta 1 venceu (1)         |\n");
    } else {
        printf("|         DENSIDADE POPULACIONAL: Carta 2 venceu (0)         |\n");
    }
    if (pibPerCapita_1 > pibPerCapita_2) {
        printf("|             PIB per Capita: Carta 1 venceu (%d)             |\n", pibPerCapita_1 > pibPerCapita_2);
    } else {
        printf("|             PIB per Capita: Carta 2 venceu (%d)             |\n", pibPerCapita_1 > pibPerCapita_2);
    }
    if (superPoder_1 > superPoder_2) {
        printf("|               SUPER PODER: Carta 1 venceu (%d)              |\n", superPoder_1 > superPoder_2);
    } else {
        printf("|               SUPER PODER: Carta 2 venceu (%d)              |\n", superPoder_1 > superPoder_2);
    }
    printf("--------------------------------------------------------------\n");

    
    return 0;
}