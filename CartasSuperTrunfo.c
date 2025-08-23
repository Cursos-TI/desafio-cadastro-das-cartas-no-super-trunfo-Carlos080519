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

        int populacao;
        int populacao2;
        
        int turismo;
        int turismo2;

        

      
       /*Parte 1 cadastro de cartas*/
                   printf("**** Cadastro de Cartas! **** \n");

       /*Ter mais linhas puladas*/
                   printf("\n");
                  printf("\n");


                  printf("Cadastre um Codigo para a Carta: \n");
                    scanf("%c", &codcarta);
                  printf("\n");  
                  
                  printf("Cadastre um Estado: \n");
                    scanf("%s", &estado);
                  printf("\n");

                  printf("Cadastre uma Cidade: \n");
                    scanf("%s", &nomecity);
                  printf("\n");  
                  
                  printf("Cadastre a Pulação: \n");
                    scanf("%d", &populacao);
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
                                 populacao =  (float) populacao;// forçando a variavel virar float


                      des_populacao = populacao / area_km;

                      percapita = populacao / pib;
                  
        /*Imprimir carta 1*/

                  printf("Codigo da Carta: %s \n",codcarta);
                      printf("\n");
                   
                  printf("Estado: %s \n", estado);               
                      printf("\n");

                  printf("Cidade: %s \n", nomecity);
                      printf("\n");
                                     
                  printf("Polução: %i \n", populacao);
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
    
                      
          /*Pular linha
                    printf("\n");
                    printf("\n");
                     */
                    /*Parte 2 cadastro de cartas
              
                    printf(" **** Cadastro de Cartas 2! ****\n");
 */
               /*Ter mais linhas puladas
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
                    scanf("%d", &populacao2);
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

                  /*todas as contas matematicas tentar colocar aqui
                                 populacao2 =  (float) populacao2; // forçando a variavel virar float
 


                      des_populacao2 = populacao2 / area_km2;
                      percapita = populacao2 / pib2;
        Pular linha
        printf("\n");
     */
       /*imprimir dados da carta2

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
                    
                    printf("A Desindade Populacional é: %.2f \n ", des_populacao2);
                      printf("\n");
                    
                     printf("O PIB per Capita é: %.2f \n ", percapita2);
                      printf("\n"); 
 */
  return 0;    
}