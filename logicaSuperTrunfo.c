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
    int superPoder;
    float pibpercapta;
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
    int superPoder2;
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

     //densidade invertida 
     densidade_invertida = (float)areaemKm / populacao;
     //Cálculo pib per capta
     valorpercapta = (float) Pib / populacao;
     // Cálculo densidade carta 1
     densidadepop1 = (float) populacao / areaemKm;

      //Soma Super Poder

      superPoder = (int) (populacao + areaemKm + Pib + valorpercapta + densidade_invertida);
    
    printf("- Super-Poder: %d\n",superPoder);


  /*
    // Resultados carta 1
    printf("Sua Carta foi criada com sucesso!!\n");
    printf("- Letra Inicial: %s\n", Estado);
    printf("- Número: %s\n", Codigocarta);
    printf("- Nome da Cidade: %s\n", nomecidade);
    printf("- Número Habitantes: %i\n", populacao);
    printf("- Área em Km²: %.2f\n", areaemKm);
    printf("- PIB: %.2lf\n", Pib);
    printf("- Pontos turísticos: %i\n", NpontosT);
    printf("- Densidade Populacional: %.2f\n", densidadepop1);
    printf("- Pib per capta: %.2f\n",valorpercapta);
    printf("- Super-Poder: %.2f\n",superPoder); */

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

    //densidade invertida 
    densidade_invertida2 = (float)areaemKm2 / populacao2;
    //Cálculo pib per capta
    valorpercapta1 = (float) Pib2 / populacao2;
    // Cálculo densidade carta 2
    densidadepop2 = (float) populacao2 / areaemKm2;

     //Soma Super Poder
     superPoder2 = (int) (populacao2 + areaemKm2 + Pib2 + valorpercapta1 + densidade_invertida2);

     printf("- Super-Poder: %d\n",superPoder2);


    /*

    // Resultados carta 2
    printf("Sua Segunda Carta foi criada com sucesso!!\n");
    printf("- Letra Inicial: %s\n", Estado2);
    printf("- Número: %s\n", Codigocarta2);
    printf("- Nome da Cidade: %s\n", nomecidade2);
    printf("- Número Habitantes: %i\n", populacao2);
    printf("- Área em Km²: %.2f\n", areaemKm2);
    printf("- PIB: %.2f\n", Pib2);
    printf("- Pontos turísticos: %i\n", NpontosT2);
    printf("- Densidade Populacional: %.2f\n", densidadepop2);
    printf("- Super-Poder: %.2f\n", superPoder2);   */

    /*comparação bruta 
    printf("-  ***** PONTUAÇÃO ***** ");
    printf("- Número Habitantes: %s\n", (populacao > populacao2) ? "Carta 1 venceu!" : "Carta 2 venceu!");
    printf("- Aréa Em Km2: %s\n", (areaemKm > areaemKm2)? "Carta 1 venceu" : "Carta 2 venceu");
    printf("- Pib: %s\n", (Pib > Pib2)? "Carta 1 venceu" : "Carta 2 venceu");
    printf("-Pontos Turisticos: %s\n", (NpontosT > NpontosT2) ? "Carta 1 venceu" : "Carta 2 venceu!");
    printf("- Densidade Populacional: %s\n", (densidadepop1 > densidadepop2) ? "Carta 1 venceu" : "Carta 2 venceu!");
    printf("-Super-poder: %s\n", (superPoder > superPoder2) ? "Carta 1 venceu": "Carta 2 venceu!"); */

    if (populacao > populacao2)
    {
        printf("A Carta 1 possui maior população!!\n");
    }
    
    else{
        printf("A Carta 2 possui maior população\n");
    }
   
        
    
    

    if (areaemKm > areaemKm2)
    {
        printf("A Carta 1 possui uma maior Aréa\n");
    }
    else{
        printf("A Carta 2 possui uma maior Aréa\n");
    }
 
    
    
    if (Pib > Pib2)
    {
        printf("A Carta 1 possui um PIB maior\n");
    }
    else{
        printf("A carta 2 possui um PIB maior\n");
    }

    if (NpontosT > NpontosT2)
    {
        printf("O Número de pontos turisticos da Carta 1 é maior\n");
    }
    else{
        printf("O Numero de pontos turisticos da Carta 2 é maior\n");
    }
    
    if (densidade_invertida > densidade_invertida2)

    {   printf("A Densidade da Carta 1 é maior\n");
        
    }
    else{
        printf("A Densidade da Carta 2 é maior\n");
    }

    
    if (superPoder > superPoder2)
    {
        printf("A Carta 1 possui um Super-Poder elevado\n");
    }
    else{
        printf("A Carta 2 possui um Super-Poder elevado\n");
    }

 printf("Que Tal Jogar Novamente?!!!");
   
    return 0;

}