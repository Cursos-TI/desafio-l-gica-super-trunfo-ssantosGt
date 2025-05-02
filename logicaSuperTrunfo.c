#include <stdio.h>

int main() {
    // Carta 1
    char Estado[20]; 
    char Codigocarta[20];
    char nomecidade[20];
    int populacao;
    float areaemKm;
    double Pib;
    int NpontosT;
    float densidadepop1;
    float superPoder;
    float valorpercapta;
    float densidade_invertida;

    // Carta 2
    char Estado2[20]; 
    char Codigocarta2[20];
    char nomecidade2[20];
    int populacao2;
    float areaemKm2;
    double Pib2; 
    int NpontosT2;
    float densidadepop2;
    float superPoder2;
    float valorpercapta1;
    float densidade_invertida2;

    // Início
    printf("Bem-Vindo Ao Jogo Super Trunfo !!!\n");
    printf("Insira Informações para uma Cidade \n");

    printf("Uma letra de A a H para Cidade: ");
    scanf(" %s", Estado);

    printf("Um número de 01 a 04: ");
    scanf(" %s", Codigocarta);

    printf("Nome da cidade: ");
    scanf(" %s", nomecidade);

    printf("Número de habitantes: ");
    scanf("%i", &populacao);

    printf("Número de área em Km²: ");
    scanf("%f", &areaemKm);  

    printf("Digite o PIB: ");
    scanf("%lf", &Pib);

    printf("Números de Pontos Turísticos: ");
    scanf("%i", &NpontosT);

    // cálculos carta 1
    densidade_invertida = areaemKm / populacao;
    valorpercapta = Pib / populacao;
    densidadepop1 = populacao / areaemKm;
    superPoder = populacao + areaemKm + Pib + valorpercapta + densidade_invertida;
    printf("- Super-Poder: %.2f\n", superPoder);

    // Segunda carta
    printf("\nSegunda Carta !!!\n");
    printf("Insira Informações \n");

    printf("- Uma letra de A a H para Carta: ");
    scanf(" %s", Estado2);

    printf("- Um número de 01 a 04: ");
    scanf(" %s", Codigocarta2);

    printf("- Nome da cidade: ");
    scanf(" %s", nomecidade2);

    printf("- Número de habitantes: ");
    scanf("%i", &populacao2);

    printf("- Número de área em Km²: ");
    scanf("%f", &areaemKm2);  

    printf("- Digite o PIB: ");
    scanf("%lf", &Pib2);

    printf("- Números de Pontos Turísticos: ");
    scanf("%i", &NpontosT2);

    // cálculos carta 2
    densidade_invertida2 = areaemKm2 / populacao2;
    valorpercapta1 = Pib2 / populacao2;
    densidadepop2 = populacao2 / areaemKm2;
    superPoder2 = populacao2 + areaemKm2 + Pib2 + valorpercapta1 + densidade_invertida2;
    printf("- Super-Poder: %.2f\n", superPoder2);

    int escolha, segundaescolha;

    // PRIMEIRO MENU
    printf("****Escolha o Atributo para comparação****\n");
    printf("1 - Nome Da Cidade\n");
    printf("2 - População\n");
    printf("3 - Área Em Km²\n");
    printf("4 - Pib\n");
    printf("5 - Pontos Turisticos\n");
    printf("6 - Densidade Demográfica\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("A Cidade 1 Se Chama %s\n", nomecidade);
            printf("A Cidade 2 Se Chama %s\n", nomecidade2);
            break;
        case 2:
            printf("A População da carta 1 é: %d\n", populacao);
            printf("A População da carta 2 é: %d\n", populacao2);
            if (populacao > populacao2)
                printf("A Carta 1 venceu a comparação\n");
            else
                printf("A Carta 2 venceu a comparação\n");
            break;
        case 3:
            printf("%s Possui %.2f Km²\n", nomecidade, areaemKm);
            printf("%s Possui %.2f Km²\n", nomecidade2, areaemKm2);
            if (areaemKm > areaemKm2)
                printf("A Carta 1 venceu a comparação\n");
            else if (areaemKm == areaemKm2)
                printf("O jogo empatou!!\n");
            else
                printf("A Carta 2 venceu a comparação\n");
            break;
        case 4:
            printf("O PIB da Carta 1 é: %.2f\n", Pib);
            printf("O PIB da Carta 2 é: %.2f\n", Pib2);
            if (Pib > Pib2)
                printf("A Carta 1 venceu a comparação\n");
            else if (Pib == Pib2)
                printf("Ambos são iguais!!\n");
            else
                printf("A Carta 2 venceu a comparação\n");
            break;
        case 5:
            printf("Pontos Turísticos Carta 1: %d\n", NpontosT);
            printf("Pontos Turísticos Carta 2: %d\n", NpontosT2);
            if (NpontosT > NpontosT2)
                printf("A Carta 1 venceu a comparação\n");
            else if (NpontosT == NpontosT2)
                printf("Empate nos pontos turísticos!!\n");
            else
                printf("A Carta 2 venceu a comparação\n");
            break;
        case 6:
            printf("Densidade Demográfica Carta 1: %.2f\n", densidadepop1);
            printf("Densidade Demográfica Carta 2: %.2f\n", densidadepop2);
            if (densidadepop1 < densidadepop2)
                printf("A Carta 1 venceu a comparação\n");
            else if (densidadepop1 == densidadepop2)
                printf("Empate na densidade!!\n");
            else
                printf("A Carta 2 venceu a comparação\n");
            break;
        default:
            printf("Comando Inválido!!\n");
            break;
    }

    // SEGUNDO MENU 
    printf("****Escolha outro Atributo para comparação****\n");
    if (!(escolha == 1)) printf("1 - Nome Da Cidade\n");
    if (!(escolha == 2)) printf("2 - População\n");
    if (!(escolha == 3)) printf("3 - Área Em Km²\n");
    if (!(escolha == 4)) printf("4 - Pib\n");
    if (!(escolha == 5)) printf("5 - Pontos Turisticos\n");
    if (!(escolha == 6)) printf("6 - Densidade Demográfica\n");
    scanf("%d", &segundaescolha);

    if (segundaescolha == escolha) {
        printf("Você já escolheu esse atributo!\n");
        return 0;
    } else {
        switch (segundaescolha) {
            case 1:
                printf("A Cidade 1 Se Chama %s\n", nomecidade);
                printf("A Cidade 2 Se Chama %s\n", nomecidade2);
                break;
            case 2:
                printf("A População da carta 1 é: %d\n", populacao);
                printf("A População da carta 2 é: %d\n", populacao2);
                if (populacao > populacao2)
                    printf("A Carta 1 venceu a comparação\n");
                else
                    printf("A Carta 2 venceu a comparação\n");
                break;
            case 3:
                printf("%s Possui %.2f Km²\n", nomecidade, areaemKm);
                printf("%s Possui %.2f Km²\n", nomecidade2, areaemKm2);
                if (areaemKm > areaemKm2)
                    printf("A Carta 1 venceu a comparação\n");
                else if (areaemKm == areaemKm2)
                    printf("O jogo empatou!!\n");
                else
                    printf("A Carta 2 venceu a comparação\n");
                break;
            case 4:
                printf("O PIB da Carta 1 é: %.2f\n", Pib);
                printf("O PIB da Carta 2 é: %.2f\n", Pib2);
                if (Pib > Pib2)
                    printf("A Carta 1 venceu a comparação\n");
                else if (Pib == Pib2)
                    printf("Ambos são iguais!!\n");
                else
                    printf("A Carta 2 venceu a comparação\n");
                break;
            case 5:
                printf("Pontos Turísticos Carta 1: %d\n", NpontosT);
                printf("Pontos Turísticos Carta 2: %d\n", NpontosT2);
                if (NpontosT > NpontosT2)
                    printf("A Carta 1 venceu a comparação\n");
                else if (NpontosT == NpontosT2)
                    printf("Empate nos pontos turísticos!!\n");
                else
                    printf("A Carta 2 venceu a comparação\n");
                break;
            case 6:
                printf("Densidade Demográfica Carta 1: %.2f\n", densidadepop1);
                printf("Densidade Demográfica Carta 2: %.2f\n", densidadepop2);
                if (densidadepop1 < densidadepop2)
                    printf("A Carta 1 venceu a comparação\n");
                else if (densidadepop1 == densidadepop2)
                    printf("Empate na densidade!!\n");
                else
                    printf("A Carta 2 venceu a comparação\n");
                break;
            default:
                printf("Comando Inválido!!\n");
                break;
        }
    }

    // Soma final dos atributos
    int somaatributos  = populacao + (int)areaemKm + (int)Pib + NpontosT;
    int somaatributos2 = populacao2 + (int)areaemKm2 + (int)Pib2 + NpontosT2;
    printf("****** SOMA DOS ATRIBUTOS ******\n");
    printf("Carta 1: %d pontos\n", somaatributos);
    printf("Carta 2: %d pontos\n", somaatributos2);

    if (somaatributos > somaatributos2) {
        printf("A Carta 1 é a vencedora do jogo!!\n");
    } else if (somaatributos == somaatributos2) {
        printf("Empate!!\n");
    } else {
        printf("A Carta 2 é a vencedora do jogo!!\n");
    }

    printf("--- OS ATRIBUTOS USADOS ----\n");
    if (somaatributos > somaatributos2) {
        printf("Habitantes: %d\n", populacao);
        printf("Área: %.2f\n", areaemKm);
        printf("PIB: %.2f\n", Pib);
        printf("Pontos Turísticos: %d\n", NpontosT);
    } else if (somaatributos < somaatributos2) {
        printf("Habitantes: %d\n", populacao2);
        printf("Área: %.2f\n", areaemKm2);
        printf("PIB: %.2f\n", Pib2);
        printf("Pontos Turísticos: %d\n", NpontosT2);
    } else {
        printf("Habitantes: %d / %d\n", populacao, populacao2);
        printf("Área: %.2f / %.2f\n", areaemKm, areaemKm2);
        printf("PIB: %.2f / %.2f\n", Pib, Pib2);
        printf("Pontos Turísticos: %d / %d\n", NpontosT, NpontosT2);
    }

    return 0;
}
