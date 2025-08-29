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
        int opcao;

        

      
       /*Parte 1 cadastro de cartas*/
                   printf("**** Cadastro de Cartas! **** \n");

       /*Ter mais linhas puladas*/
                   printf("\n");
                  printf("\n");


                  printf("Cadastre um Codigo para a Carta: \n");
                    scanf("%s", codcarta);
                  printf("\n");  
                  
                  printf("Cadastre um Estado: \n");
                    scanf("%s", estado);
                  printf("\n");

                  printf("Cadastre uma Cidade: \n");
                    scanf("%s", nomecity);
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

                    
        /*todas as contas matemáticas tentar colocar aqui*/

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
                    printf("Codigo da Carta: %s \n", codcarta2 );
                      printf("\n");

                    printf("Estado: %s \n", estado2);
                      printf("\n");
                    
                    printf("Cidade: %s \n", nomecity2);
                      printf("\n");
                    
                    printf("Area em Km²: %.2f \n", &area_km2);
                      printf("\n");
                    
                    printf("PIB: %.2f \n", &pib2);
                      printf("\n");

                    printf("Polução: %lu \n", &populacao2);
                      printf("\n");
                             
                    printf("Turismo: %i \n", &turismo2);      
                      printf("\n");
                    
                    printf("A Desindade Populacional é: %.2f \n ", &des_populacao2);
                      printf("\n");
                    
                     printf("O PIB per Capita é: %.2f \n ", &percapita2);
                      printf("\n"); 
                    printf("==================================\n");
 
      /*Pular linha*/
        printf("\n");
        printf("\n");


                printf("\n=== MENU DE COMPARAÇÃO ===\n");
                printf("\n");
printf("1 - Comparar População\n");
printf("\n");

printf("2 - Comparar Área em Km²\n");
printf("\n");

printf("3 - Comparar PIB per Capita\n");
printf("\n");

printf("4 - Comparar Densidade Populacional\n");
printf("\n");

printf("5 - Comparar Turismo\n");
printf("\n");

printf("6 - Mostrar Super Poder Total\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao);
printf("\n");

if (opcao >= 1 && opcao <= 6) {
    switch (opcao) {
        case 1:
        printf("==================================\n");
        printf("\n");

            printf("\n Comparando População:\n");
            printf("\n");

            printf("Carta 1: %lu habitantes\n", populacao);
            printf("\n");

            printf("Carta 2: %lu habitantes\n", populacao2);
            printf("\n");

            printf("Resultado: %s\n", (populacao > populacao2) ? "Carta 1 vence" :
                                       (populacao < populacao2) ? "Carta 2 vence" : "Empate");
            printf("\n");

            printf("==================================\n");
                                       break;

        case 2:
        printf("==================================\n");
        printf("\n");

            printf("\n Comparando Área em Km²:\n");
            printf("\n");

            printf("Carta 1: %.2f km²\n", area_km);
            printf("\n");

            printf("Carta 2: %.2f km²\n", area_km2);
            printf("\n");

            printf("Resultado: %s\n", (area_km > area_km2) ? "Carta 1 vence" :
                                       (area_km < area_km2) ? "Carta 2 vence" : "Empate");
            printf("\n");
            
            printf("==================================\n");
              break;

        case 3:
        printf("==================================\n");
        printf("\n");

        printf("\n Comparando PIB per Capita:\n");
            printf("\n");

            printf("Carta 1: PIB = %.2f | População = %lu\n", pib, populacao);
            printf("\n");

            printf("Carta 1: PIB per capita = %.2f\n", percapita);
            printf("\n");

            printf("Carta 2: PIB = %.2f | População = %lu\n", pib2, populacao2);
            printf("\n");

            printf("Carta 2: PIB per capita = %.2f\n", percapita2);
            printf("\n");

            printf("Resultado: %s\n", (percapita > percapita2) ? "Carta 1 vence" :
                                       (percapita < percapita2) ? "Carta 2 vence" : "Empate");  
                                      
            printf("\n");         
            printf("==================================\n");
            break;

        case 4:
        printf("==================================\n");
        printf("\n");

            printf("\n Comparando Densidade Populacional:\n");
            printf("\n");

            printf("Carta 1: População = %lu | Área = %.2f\n", populacao, area_km);
            printf("\n");

            printf("Carta 1: Densidade = %.2f hab/km²\n", des_populacao);
            printf("\n");

            printf("Carta 2: População = %lu | Área = %.2f\n", populacao2, area_km2);
            printf("\n");

            printf("Carta 2: Densidade = %.2f hab/km²\n", des_populacao2);
            printf("Resultado: %s\n", (des_populacao > des_populacao2) ? "Carta 1 vence" :
                                       (des_populacao < des_populacao2) ? "Carta 2 vence" : "Empate");
            printf("\n");

            printf("==================================\n");
            break;

        case 5:
        printf("==================================\n");
        printf("\n");

            printf("\n Comparando Turismo:\n");
            printf("\n");

            printf("Carta 1: %d pontos de turismo\n", turismo);
            printf("\n");

            printf("Carta 2: %d pontos de turismo\n", turismo2);
            printf("\n");

            printf("Resultado: %s\n", (turismo > turismo2) ? "Carta 1 vence" :
                                
            (turismo < turismo2) ? "Carta 2 vence" : "Empate");
            printf("\n");

            printf("==================================\n");
             break;

        case 6:
        printf("==================================\n");
        printf("\n");

            printf("\n Cálculo do Super Poder Total:\n");
printf("\n");

            printf("Carta 1:\n");
            printf("\n");

            printf("População: %lu\n", populacao);
            printf("\n");

            printf("Área: %.2f\n", area_km);
            printf("\n");

            printf("PIB: %.2f\n", pib);
            printf("\n");

            printf("Turismo: %d\n", turismo);
            printf("\n");

            printf("PIB per capita: %.2f\n", percapita);
            printf("\n");

            printf("1 / Densidade: %.2f\n", (1.0 / des_populacao));
            printf("\n");

            printf("Super Poder = %lu + %.2f + %.2f + %d + %.2f + %.2f = %.2f\n",
                   populacao, area_km, pib, turismo, percapita, (1.0 / des_populacao), spoder);

            printf("\nCarta 2:\n");
            printf("\n");

            printf("População: %lu\n", populacao2);
            printf("\n");
printf("==================================\n");

printf("==================================\n");
printf("\n");

            printf("Área: %.2f\n", area_km2);
            printf("\n");

            printf("PIB: %.2f\n", pib2);
            printf("\n");

            printf("Turismo: %d\n", turismo2);
            printf("\n");

            printf("PIB per capita: %.2f\n", percapita2);
            printf("\n");

            printf("1 / Densidade: %.2f\n", (1.0 / des_populacao2));
            printf("\n");

            printf("Super Poder = %lu + %.2f + %.2f + %d + %.2f + %.2f = %.2f\n",
                   populacao2, area_km2, pib2, turismo2, percapita2, (1.0 / des_populacao2), spoder2);

            printf("\nResultado: %s\n", (spoder > spoder2) ? "Carta 1 vence" :
                                         (spoder < spoder2) ? "Carta 2 vence" : "Empate");
            printf("\n");

            printf("==================================\n");
                                         break;
    }
} else {
    printf("Opção inválida. Encerrando comparação.\n");
}


 return 0;    
}