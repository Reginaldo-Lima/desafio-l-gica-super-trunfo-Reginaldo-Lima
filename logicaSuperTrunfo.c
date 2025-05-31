#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível de desafio Mestre
// 31/05/2025 por Reginaldo Moura
// Implementação de lógica complexa para comparção de mais de um atributos

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;                      //Estado da carta
    char codigo1[4], codigo2[4];                //código da cidade
    char nome1[50], nome2[50];                  //nome da cidade
    unsigned long int populacao1, populacao2;   //população da cidade
    int pontosTuristicos1, pontosTuristicos2;   //quatidade de pontos turísticos
    float pib1, pib2;                           //PIB da cidade em Bilhoes de reais
    float area1, area2;                         //area de cidade em km2
    float densidadePop1, densidadePop2;         //Densidade Populacional (população / área)
    float pibPerCap1, pibPerCap2;               //PIB per Capita (PIB / população)
    float superPoder1, superPoder2;             //Soma de todos os atributos
    int opcao1, opcao2;                         //Opção de atributo que o usuário escolheu no MENU
    int vence1 = 0, vence2 = 0;                 //Variável de controle qua armazena a qauntidade de vitórias

    //ENTRADA DE DADOS
    // Cadastro das Cartas:
    printf("Bem vindo ao Super Trunfo Paises\n\n");

    //Primeira carta
    printf("Vamos comecar com os dados da primeira carta:\n");

    printf("Informe o estado da primeira carta (um caractere de A ate H):\n");
    scanf(" %c", &estado1);

    printf("informe o codigo da primeira carta (composto pela letra do estado e um numero de 01 a 04): \n");
    scanf(" %s", codigo1);

    printf("Informe o nome da primeira cidade (uma unica palavra ou sem espacos em branco): \n");
    scanf(" %s", nome1);

    printf("Informe a populacao da primeira cidade:\n");
    scanf("%lu", &populacao1);

    printf("Informe a area da primeira cidade (em km2): \n");
    scanf("%f", &area1);
    
    printf("informe o PIB da primeira cidade (em bilhoes de reais): \n");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontosTuristicos1);

    //Segunda carta
    printf("\nAgora vamos comecar com os dados da segunda carta:\n");

    printf("Informe o estado da segunda carta (um caractere de A ate H):\n");
    scanf(" %c", &estado2);

    printf("informe o codigo da segunda carta (composto pela letra do estado e um numero de 01 a 04): \n");
    scanf(" %s", codigo2);

    printf("Informe o nome da segunda cidade (uma unica palavra ou sem espacos em branco): \n");
    scanf(" %s", nome2);

    printf("Informe a populacao da segunda cidade:\n");
    scanf("%lu", &populacao2);

    printf("Informe a area da segunda cidade (em km2): \n");
    scanf("%f", &area2);
    
    printf("informe o PIB da segunda cidade (em bilhoes de reais): \n");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontosTuristicos2);

    //PROCESSAMENTO DE DADOS
    //Cáculo da Densidade Populacional
    densidadePop1 = (float) populacao1 / area1;
    densidadePop2 = (float) populacao2 / area2;

    //Cálculo do PIB per Capita
    pibPerCap1 =  (pib1 * 1000000000) / (float)populacao1; //transformação do PIB em reais
    pibPerCap2 =  (pib2 * 1000000000) / (float)populacao2; //transformação do PIB em reais

    //Cálculo do super poder
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + (1.0 / densidadePop1) + pibPerCap1;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + (1.0 / densidadePop2) + pibPerCap2;

    // Comparação de Cartas:
    printf("\nCOMPARACAO DAS CARTAS:\n");

    //MENU 1
    printf("Escolha um dos atributos para a primeira comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha o atributo: ");
    scanf("%d", &opcao1);

    //Comparação do primeiro atributo
    switch (opcao1){
    case 1:
        //população
        printf("\nAtributo: Populacao\n");
        printf("Carta 1 - %s (%c): %u\n", nome1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %u\n", nome2, estado2, populacao2);

        if (populacao1 > populacao2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            vence1++;
        } else if (populacao2 > populacao1){
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            vence2++;
        } else {
            printf("Resultado: Empate.");
        }
        break;
    case 2:
        //area
        printf("\nAtributo: Area\n");
        printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, area1);
        printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, area2);

        if (area1 > area2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            vence1++;
        } else if (area2 > area1){
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            vence2++;
        } else {
            printf("Resultado: Empate.");
        }
        break;
    case 3:
        //PIB
        printf("\nAtributo: PIB\n");
        printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, pib2);

        if (pib1 > pib2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            vence1++;
        } else if (pib2 > pib1){
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            vence2++;
        } else {
            printf("Resultado: Empate.");
        }
        break;
    case 4:
        //pontos turísticos
        printf("\nAtributo: Pontos Turisticos\n");
        printf("Carta 1 - %s (%c): %d\n", nome1, estado1, pontosTuristicos1);
        printf("Carta 2 - %s (%c): %d\n", nome2, estado2, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            vence1++;
        } else if (pontosTuristicos2 > pontosTuristicos1){
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            vence2++;
        } else {
            printf("Resultado: Empate.");
        }
        break;
    case 5:
        //densidade populacional
        printf("\nAtributo: Densidade Populacional\n");
        printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, densidadePop1);
        printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, densidadePop2);

        if (densidadePop1 < densidadePop2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            vence1++;
        } else if (densidadePop2 < densidadePop1){
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            vence2++;
        } else {
            printf("Resultado: Empate.");
        }
        break;
    case 6:
        //PIB per Capta
        printf("\nAtributo: PIB per Capita\n");
        printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, pibPerCap1);
        printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, pibPerCap2);

        if (pibPerCap1 > pibPerCap2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            vence1++;
        } else if (pibPerCap2 > pibPerCap1){
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            vence2++;
        } else {
            printf("Resultado: Empate.");
        }
        break;
    case 7:
        //superpoder
        printf("\nAtributo: Super Poder\n");
        printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, superPoder1);
        printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, superPoder2);

        if (superPoder1 > superPoder2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            vence1++;
        } else if (superPoder2 > superPoder1){
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            vence2++;
        } else {
            printf("Resultado: Empate.");
        }
        break;
    default:
        printf("Opcao invalida. Tente novamente.\n");
        break;
    }

    //MENU 2
    printf("\nEscolha um dos atributos para a segunda comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha o atributo: ");
    scanf("%d", &opcao2);

    //Testa se o usuário não escolheu o mesmo atributo
    if (opcao1 == opcao2){
        printf("Voce escolheu o mesmo atributo. Tente novamente.\n");
    } else {
        // Compara o segundo atributo
        switch (opcao2){
        case 1:
            //população
            printf("\nAtributo: Populacao\n");
            printf("Carta 1 - %s (%c): %u\n", nome1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %u\n", nome2, estado2, populacao2);

            if (populacao1 > populacao2){
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                vence1++;
            } else if (populacao2 > populacao1){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                vence2++;
            } else {
                printf("Resultado: Empate.");
            }
            break;
        case 2:
            //area
            printf("\nAtributo: Area\n");
            printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, area2);

            if (area1 > area2){
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                vence1++;
            } else if (area2 > area1){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                vence2++;
            } else {
                printf("Resultado: Empate.");
            }
            break;
        case 3:
            //PIB
            printf("\nAtributo: PIB\n");
            printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, pib1);
            printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, pib2);

            if (pib1 > pib2){
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                vence1++;
            } else if (pib2 > pib1){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                vence2++;
            } else {
                printf("Resultado: Empate.");
            }
            break;
        case 4:
            //pontos turísticos
            printf("\nAtributo: Pontos Turisticos\n");
            printf("Carta 1 - %s (%c): %d\n", nome1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%c): %d\n", nome2, estado2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2){
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                vence1++;
            } else if (pontosTuristicos2 > pontosTuristicos1){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                vence2++;
            } else {
                printf("Resultado: Empate.");
            }
            break;
        case 5:
            //densidade populacional
            printf("\nAtributo: Densidade Populacional\n");
            printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, densidadePop1);
            printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, densidadePop2);

            if (densidadePop1 < densidadePop2){
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                vence1++;
            } else if (densidadePop2 < densidadePop1){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                vence2++;
            } else {
                printf("Resultado: Empate.");
            }
            break;
        case 6:
            //PIB per Capta
            printf("\nAtributo: PIB per Capita\n");
            printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, pibPerCap1);
            printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, pibPerCap2);

            if (pibPerCap1 > pibPerCap2){
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                vence1++;
            } else if (pibPerCap2 > pibPerCap1){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                vence2++;
            } else {
                printf("Resultado: Empate.");
            }
            break;
        case 7:
            //superpoder
            printf("\nAtributo: Super Poder\n");
            printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, superPoder1);
            printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, superPoder2);

            if (superPoder1 > superPoder2){
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
                vence1++;
            } else if (superPoder2 > superPoder1){
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
                vence2++;
            } else {
                printf("Resultado: Empate.");
            }
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
            break;
        }
    }

    // define qual carta ganhou no final
    printf("\nE quem ganhou foi:\n");

    if (vence1 > vence2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (vence2 > vence1){
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate.");
    }

    return 0;
}
