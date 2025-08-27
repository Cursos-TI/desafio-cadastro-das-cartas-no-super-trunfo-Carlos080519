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
        
        float des_populacao;
        float des_populacao2;
        
        float percapita;   
        float percapita2;
        float spoder;
        float spoder2;

        unsigned long int populacao;
        unsigned long int populacao2;
        
        int turismo;
        int turismo2;

        

      
       /*Parte 1 cadastro de cartas*/
                   printf("**** Cadastro de Cartas! **** \n");

       /*Ter mais linhas puladas*/
                   printf("\n");
                  printf("\n");


                  printf("Cadastre um Codigo para a Carta: \n");
                    scanf("%s", &codcarta);
                  printf("\n");  
                  
                  printf("Cadastre um Estado: \n");
                    scanf("%s", &estado);
                  printf("\n");

                  printf("Cadastre uma Cidade: \n");
                    scanf("%s", &nomecity);
                  printf("\n");  
                  
                  printf("Cadastre a Pulação: \n");
                    scanf("%lu", &populacao);
                  printf("\n");
                    
                  printf("Cadastre a Area em Km²: \n");
                    scanf("%f", &area_km);
                  printf("\n");

                  printf("Cadastre O PIB: \n");
                    scanf("%f", &pib);  
                  printf("\n");

                 printf("Cadastre o Turismo: \n"); 
                    scanf("%d", &turismo);
                  printf("\n");

                    
        /*todas as contas matematicas tentar colocar aqui*/ 

                      des_populacao = populacao / area_km;

                      percapita = pib / populacao;

                     spoder = populacao + area_km + pib + turismo + percapita + (1.0 / des_populacao);
                  
        /*Imprimir carta 1 */
                  printf("==================================\n");
                   printf("\n");

                  printf("Codigo da Carta: %s \n",codcarta);
                      printf("\n");
                   
                  printf("Estado: %s \n", estado);               
                      printf("\n");

                  printf("Cidade: %s \n", nomecity);
                      printf("\n");
                                     
                  printf("Polução: %lu \n", populacao);
                      printf("\n");
                  
                  printf("Area em Km²: %.2f \n", area_km);
                      printf("\n");
                  
                  printf("PIB: %.2f \n", pib);
                      printf("\n");

                  printf("Turismo: %i \n", turismo);      
                      printf("\n");
                  
                  printf("A Desindade Populacional é: %.2f \n ", des_populacao);
                      printf("\n");

                  printf("O PIB per Capita é: %.2f \n ", percapita);
                      printf("\n");
                  printf("==================================\n");
                    
                      
          /*Pular linha*/
                    printf("\n");
                    printf("\n");
                     
                    /*Parte 2 cadastro de cartas*/
              
                    printf(" **** Cadastro de Cartas 2! ****\n");
 
               /*Ter mais linhas puladas*/
                    printf("\n");
                    printf("\n");


                  printf("Cadastre um Codigo para a Carta: \n");
                    scanf("%s", codcarta2);
                  printf("\n");
                  
                  printf("Cadastre um Estado: \n");
                    scanf("%s", estado2);
                  printf("\n");

                  printf("Cadastre uma Cidade: \n");
                    scanf("%s", nomecity2);
                  printf("\n");

                  printf("Cadastre a Pulação: \n");
                    scanf("%lu", &populacao2);
                  printf("\n");  
              
                  printf("Cadastre a Area em Km²: \n");
                    scanf("%f", &area_km2);
                  printf("\n");

                  printf("Cadastre O PIB: \n");
                    scanf("%f", &pib2);   
                  printf("\n");

                  printf("Cadastre o Turismo: \n"); 
                    scanf("%d", &turismo2);
                  printf("\n");

                  /*todas as contas matematicas tentar colocar aqui*/
                                 
                      des_populacao2 = populacao2 / area_km2;

                      percapita2 = pib2 / populacao2;
                      
                      spoder2 = populacao2 + area_km2 + pib2 + turismo2 + percapita2 + (1.0 / des_populacao2);


        /*Pular linha*/
        printf("\n");
        printf("\n");
       
        /*imprimir dados da carta2*/
                    printf("==================================\n");
                     printf("\n");
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
                    
                    printf("Polução: %lu \n", populacao2);
                      printf("\n");
                    
                    printf("Turismo: %i \n", turismo2);      
                      printf("\n");
                    
                    printf("A Desindade Populacional é: %.2f \n ", des_populacao2);
                      printf("\n");
                    
                     printf("O PIB per Capita é: %.2f \n ", percapita2);
                      printf("\n"); 
                    printf("==================================\n");
 
      /*Pular linha*/
        printf("\n");
        printf("\n");
                  printf("COMPARADOR\n");
/*Pular linha*/
        printf("\n");
        printf("\n");

       printf("População entre Carta1 e Carta2: %s\n", (populacao >= populacao2) ? "Carta1 tem mais ou igual" : "Carta2 tem mais");

       printf("Area Km² entre Carta1 e Carta2: %s\n", (area_km >= area_km2) ? "Carta1 tem mais ou igual" : "Carta2 tem mais");

       printf("Pib entre Carta1 e Carta2: %s\n", (pib >= pib2) ? "Carta1 tem mais ou igual" : "Carta2 tem mais");

       printf("Pib per capita entre Carta1 e Carta2: %s\n", (percapita >= percapita2) ? "Carta1 tem mais ou igual" : "Carta2 tem mais");
       
       printf("Densidade populacional entre Carta1 e Carta2: %s\n", (des_populacao >= des_populacao2) ? "Carta1 tem mais ou igual" : "Carta2 tem mais");
       
 return 0;    
}