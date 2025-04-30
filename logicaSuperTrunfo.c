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

     //densidade invertida 
     densidade_invertida = (float)areaemKm / populacao;
     //Cálculo pib per capta
     valorpercapta = (float) Pib / populacao;
     // Cálculo densidade carta 1
     densidadepop1 = (float) populacao / areaemKm;

      //Soma Super Poder

      superPoder =(float)(populacao + areaemKm + Pib + valorpercapta + densidade_invertida);
    
    printf("- Super-Poder: %2.f\n",superPoder);


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
     superPoder2 =(float)(populacao2 + areaemKm2 + Pib2 + valorpercapta1 + densidade_invertida2);

     printf("- Super-Poder: %2.f\n",superPoder2);
     
    int escolha;
    // MENU
    printf("****Escolha o Atributo para comparação****\n");
    printf("1 - Nome Da Cidade\n"); //(usado apenas para exibir informações, não para comparação direta)
    printf("2 - População\n");
    printf("3 - Aréa Em Km²\n");
    printf("4 - Pib\n");
    printf("5 - Pontos Turisticos\n");
    printf("6 - Densidade Demográfica\n");
    scanf("%d", &escolha);

    switch (escolha) // carta 1
    {
    case 1:
        printf("A Cidade 1 Se Chama %s \n", nomecidade);
        printf("A Cidade 2 Se Chama %s \n", nomecidade2);
      break;
    case 2: printf("A População da carta 1 é: %d \n", populacao);
            printf("A População da carta 2 é: %d \n", populacao2);
            if (populacao > populacao2)
            {
              printf("A Carta 1 venceu a comparação\n");
            } else{
              printf("A Carta 2 venceu a comparação\n");
            }
            
      break;
    case 3: printf("%s Possui %2.f Quilómetros Quadrados\n", nomecidade,areaemKm);
            printf("%s Possui %2.f Quilómetros Quadrados\n", nomecidade2,areaemKm2);
            if (areaemKm > areaemKm2)
            {
              printf("A Carta 1 venceu a comparação\n");
            } else if (areaemKm == areaemKm2)
            {
              printf("O jogo empatou!!\n");
            } else{
              printf("A Carta 2 venceu a comparação\n");
            }
      break;
    case 4: printf("O Pib da Carta 1 é: %lf\n",Pib);
            printf("O Pib da Carta 2 é: %lf\n",Pib2);
            if (Pib > Pib2)
            {
              printf("O Pib da Carta 1 é maior, portanto carta 1 venceu\n");
            } else if (Pib == Pib2)
            {
              printf("Ambos são iguais em valores!!\n");
            } else {
              printf("O Pib da Carta 2 é maior, portanto carta 2 venceu\n");
            }
            
            

      break;
    case 5: printf("Na Primeira Carta Existe(m) %d Ponto(s) Turístico(s)\n", NpontosT);
            printf("Na Segunda Carta Existe(m) %d Ponto(s) Turístico(s)\n", NpontosT2);
            if (NpontosT > NpontosT2)
            {
              printf("A Carta 1 possuí maior número de Pontos Turisticos\n");
            } else if (NpontosT == NpontosT2)
            {
              printf("Os pontos turisticos são iguais!!\n");
            } else
            {
              printf("A Carta 2 possuí maior numero de Pontos Turisticos\n");
           }
            
            
            
      break;
    case 6: printf("A Densidade Demográfica na Carta 1 é de: %d\n",densidadepop1);
            printf("A Densidade Demográfica na Carta 2 é de: %d\n",densidadepop2);
            if (densidadepop1 < densidadepop2)
            {
              printf("A Densidade Demográfica da Carta 1 é menor, portanto, Carta 1 venceu!\n");
              
            } else if (densidadepop1 == densidadepop2)
            {
              printf("A Densidade Demográfica das duas cartas são iguais, Empate\n");
            } else{
              printf("A Densidade Demográfica da Carta 2 é menor, portanto, Carta 2 venceu!\n");
            }
      break;
    default:
            printf("Comando Inválido!!\n");
      break;
    }
  }
    
    