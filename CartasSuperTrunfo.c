#include <stdio.h>

    int main(){
         
      /*Variaves da carta 1*/   
    char estado[6] = "Ceara";
    int  codcarta = 1;
    char  cidade[14] = "Fortaleza" ;
    char populacao[10] = "2,547,412" ;
    float area =  312.35;
    float pib = 65.16 ;
    int nun_turismo = 70;

    /*Variaves da carta 2*/
    char Estado[6] = "Rio de Janeiro";
    int  Codcarta = 2;
    char  Cidade[14] = "Rio de Janeiro" ;
    char Populacao[10] = "6.729.894" ;
    float Area =  1.221 ;
    float Pib = 359.63 ;
    int turismo = 1.513;


    /* Aqui e as Carta 2 vai imprimir todas as informação das carta*/
    printf("Codigo da Carta: %d \n", Codcarta);
    printf ("Estado:  %s \n", Estado);
    printf("Cidade: %s \n", Cidade);
    printf("População: %s \n", Populacao);
    printf("Area Km²: %.2f Km² \n", Area);
    printf("PIB: %.2f Bilhoes \n", Pib);
    printf("Numero de turismo: %.2f \n", turismo);

    //São espaços entre as cartas
    printf("\n");
    printf("\n");


    /* Aqui e as Carta 1 vai imprimir todas as informação das carta*/
    printf("Codigo da Carta: %d \n", codcarta);
    printf ("Estado:  %s \n", estado);
    printf("Cidade: %s \n", cidade);
    printf("População: %s \n", populacao);
    printf("Area Km²: %.2f Km² \n", area);
    printf("PIB: %.2f Bilhoes \n", pib);
    printf("Numero de turismo: %.2f \n", nun_turismo);


    return 0;

       
    }