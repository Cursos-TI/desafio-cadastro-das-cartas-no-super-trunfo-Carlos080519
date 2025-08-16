#include <stdio.h>

    int main(){

      /*variaveis definadas*/
        char estado[50];
        char codcarta[50];
        char nomecity[50];
        int populacao;
        double area_km;
        double pib;
        int turismo;

      /*Parte 1 cadastro de cartas*/
                   printf("Cadastro de Cartas! \n");

                  /*Ter mais linhas puladas*/
        printf("\n");
        printf("\n");


                  printf("Cadastre um Codigo para a Carta: \n");
                    scanf("%s", codcarta);
                  
                  printf("Cadastre um Estado: \n");
                    scanf("%s", estado);
                  
                  printf("Cadastre uma Cidade: \n");
                    scanf("%s", nomecity);

                  printf("Cadastre a Area em Km²: \n");
                    scanf("%f", area_km);

                  printf("Cadastre O PIB: \n");
                    scanf("%f", pib);   
                    
      
        printf("\n");
        printf("\n");


                    /*imprimir as cartas do estado 1*/
                    printf("Codigo da Carta : %s \n",codcarta );
                    printf("Estado : %s \n", estado);
                    printf("Cidade : %s \n", nomecity);
                    printf("Area em Km² : %.2f \n", area_km);
                    printf("PIB : %.2f \n", pib);
                      return 0;    
}