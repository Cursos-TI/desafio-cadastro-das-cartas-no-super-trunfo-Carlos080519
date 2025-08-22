#include <stdio.h>

    int main(){

      /*variaveis definadas*/
        char estado[50];
        char estado2[50];

        char codcarta[50];
        char codcarta2[50];
        
        char nomecity[50];
        char nomecity2[50];
        

        float area_km;
        float area_km2;
        
        float pib;
        float pib2;
        
        
        
        int populacao;
        int populacao2;
        
        int turismo;
        int turismo2;

        float des_populacao = (float) area_km / populacao;
       float des_populacao2;

      /*Parte 1 cadastro de cartas*/
                   printf("Cadastro de Cartas! \n");

                  /*Ter mais linhas puladas*/
        printf("\n");
        printf("\n");


                  /*printf("Cadastre um Codigo para a Carta: \n");
                    scanf("%s", &codcarta);*/
                  
                 /* printf("Cadastre um Estado: \n");
                    scanf("%s", &estado);*/
                  
                  /*printf("Cadastre uma Cidade: \n");
                    scanf("%s", &nomecity);*/

                  printf("Cadastre a Area em Km²: \n");
                    scanf("%f", &area_km);

                  /*printf("Cadastre O PIB: \n");
                    scanf("%f", &pib); */  
                  
                  printf("Cadastre a Pulação: \n");
                    scanf("%d", &populacao);
                  
                  /*printf("Cadastre o Turismo: \n"); 
                    scanf("%d", &turismo);*/  
                    
                      //todas as contas matematicas tentar colocar aqui 
                                 des_populacao =  populacao / area_km  ;
                      
                  
        /*Pular linha*/
        printf("\n");
    
          
        /*imprimir as cartas do estado 1
                    printf("Codigo da Carta: %s \n",codcarta );
                      printf("\n");
                    printf("Estado: %s \n", estado);
                      printf("\n");
                    printf("Cidade: %s \n", nomecity);
                      printf("\n");
                      */
                    printf("Area em Km²: %.2f \n", area_km);
                      printf("\n");
                    /*printf("PIB: %.2f \n", pib);
                      printf("\n");*/
                    printf("Polução: %i \n", populacao);
                      printf("\n");
                   /* printf("Turismo: %i \n", turismo);      
                      printf("\n");*/

                    printf("A Desindade Populacional é: %.7f ", des_populacao);
              /*Parte 2 cadastro de cartas
              
                    printf("Cadastro de Cartas 2 ! \n");

               /*Ter mais linhas puladas
                    printf("\n");
                    printf("\n");


                  printf("Cadastre um Codigo para a Carta: \n");
                    scanf("%s", codcarta2);
                  
                  printf("Cadastre um Estado: \n");
                    scanf("%s", estado2);
                  
                  printf("Cadastre uma Cidade: \n");
                    scanf("%s", nomecity2);

                  printf("Cadastre a Area em Km²: \n");
                    scanf("%f", &area_km2);

                  printf("Cadastre O PIB: \n");
                    scanf("%f", &pib2);   
                  
                  printf("Cadastre a Pulação: \n");
                    scanf("%d", &populacao2);
                  
                  printf("Cadastre o Turismo: \n"); 
                    scanf("%d", &turismo2);

                  
        /*Pular linha
        printf("\n");
    
        /*imprimir as cartas do estado 1
                    printf("Codigo da Carta: %s \n",codcarta2 );
                      printf("\n");
                    printf("Estado: %s \n", estado2);
                      printf("\n");
                    printf("Cidade: %s \n", nomecity2);
                      printf("\n");
                    printf("Area em Km²: %.2f \n", area_km2);
                      printf("\n");
                    printf("PIB: %.2f \n", pib2);
                      printf("\n");
                    printf("Polução: %i \n", populacao2);
                      printf("\n");
                    printf("Turismo: %i \n", turismo2);      
                      printf("\n");
*/

  return 0;    
}