#include <stdio.h>



    int main(){

      /*variaveis definadas*/
      char estado[50];
      char codcarta[50];
      char nomecity[50];
      cha populacao[50];
      float area_km;
      float pib;
      int turismo;
                  /*Parte 1 cadastro de cartas*/
                   printf("Cadastro de Cartas! \n");

                  /*Ter mais linhas separadas*/
        printf("\n");
        printf("\n");


                  printf("Cadastre um Codigo para a Carta: \n");
                    scanf("%s", codcarta);
                  
                  printf("Cadastre um Estado: \n");
                    scanf("%s", estado);
                  
                  printf("Cadastre uma Cidade: \n");
                    scanf("%s", nomecity);

                  printf("Cadastre a População: \n");
                    scanf("%s", populacao);

                  printf("Cadastre a Area em Km²: \n");
                    scanf("%f", area_km);

                  printf("Cadastre O PIB: \n");
                    scanf("%f", pib);   

                  printf("Cadastre um Ponto Turistico : \n");
                    scanf("%i", turismo);

                    /*imprimir as cartas do estado 1*/
                    printf("Codigo da Carta : %s \n",codcarta );
                    printf("Estado : %s \n", estado);
  return 0;    
}