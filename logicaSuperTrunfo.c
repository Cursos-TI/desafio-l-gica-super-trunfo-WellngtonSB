#include <stdio.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
 
int main() {

    // varaveis Carta 1
    char Codigo[4];  
    char Estado;
    char NomeCidade[64];
    int PontosTuristicos; 
    double DensidadePopulacional, PIBPercapita, AreaKM, PIB;
    unsigned long int Populacao; 
    float SuperPoder;
    double inversoDensidade;
    

  // variaveis Carta 2
    char Codigo2[4];  
    char Estado02;
    char NomeCidade2[64];
    int PontosTuristicos2; 
    double DensidadePopulacional2, PIBPercapita2, AreaKM2, PIB2;
    unsigned long int Populacao2;
    float SuperPoder2;
    double inversoDensidade2;

      // atributos de ataque das cartas
    int resultado1, resultado2;   
    char primeiroAtributo[2];
    char segundoAtributo[2];
    

  // Entrada de dados Carta 1
  printf("*****insira os dados da primeira carta!*****\n");
  printf("Estado A à H: ");
  scanf("%c", &Estado); 
  
  printf("Codigo: (Ex: A01): "); 
  scanf("%3s", Codigo);  

  printf("Nome da Cidade: "); 
  scanf(" %[^\n]", NomeCidade); 

  printf("População: "); 
  scanf("%ld", &Populacao); 

  printf("Área: "); 
  scanf("%lf", &AreaKM);

  printf("PIB: "); 
  scanf("%lf", &PIB); 

  printf("Número de pontos turisticos: ");
  scanf("%d", &PontosTuristicos);

  // Calculos para Carta 1
  DensidadePopulacional = Populacao / AreaKM;
  PIBPercapita = PIB / Populacao;

  inversoDensidade = 1 / DensidadePopulacional;
  SuperPoder = (float)Populacao + AreaKM + PIB + (float)PontosTuristicos + PIBPercapita + inversoDensidade ;
   

  //Entrada de dados da segunda carta -----------------------------------------------------------------------------------------------------------------
  printf("\n*****insira os dados da segunda carta!*****\n");
  printf("Estado A à H: ");
  scanf(" %c", &Estado02); 
    
  printf("Codigo: (Ex: A01): "); 
  scanf("%3s", Codigo2);  

  printf("Nome da Cidade: "); 
  scanf(" %[^\n]", NomeCidade2); 

  printf("População: "); 
  scanf("%ld", &Populacao2); 

  printf("Área: "); 
  scanf("%lf", &AreaKM2); 
  
  printf("PIB: "); 
  scanf("%lf", &PIB2); 

  printf("Número de pontos turisticos: ");
  scanf("%d", &PontosTuristicos2);
  
  // Calculos para Carta 2
  DensidadePopulacional2 = Populacao2 / AreaKM2;
  PIBPercapita2 = PIB2 / Populacao2;

  inversoDensidade2 = 1 / DensidadePopulacional2;
  SuperPoder2 = (float)Populacao2 + AreaKM2 + PIB2 + (float)PontosTuristicos2 + PIBPercapita2 + inversoDensidade2; 
 

      //impressao dos dados cadastrados Carta 1
    printf("\n***** Carta 1 *****\n"); 
    printf("Estado: %c\n", Estado);
    printf("Codigo: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("População: %ld \n", Populacao); 
    printf("Area: %.2lf km²\n", AreaKM); 
    printf("PIB: %.2lf bilhões de reais\n", PIB);
    printf("Número de pontos turisticos: %d\n", PontosTuristicos); 
    printf("Densidade Populacional %.2lf hab/km² \n", DensidadePopulacional);
    printf("PIB per Capita %.2lf Reais\n", PIBPercapita);
    printf("Super Poder carta 1: %.2f\n", SuperPoder);

     
    //impressao dos dados cadastrados carta 2
    printf("\n***** Carta 2 *****\n"); 
    printf("Estado: %c\n", Estado02);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %ld \n", Populacao2); 
    printf("Area: %.2lf km²\n", AreaKM2); 
    printf("PIB: %.2lf bilhões de reais\n", PIB2);
    printf("Número de pontos turisticos: %d\n", PontosTuristicos2); 
    printf("Densidade Populacional %.2lf hab/km² \n", DensidadePopulacional2);
    printf("PIB per Capita %.2lf Reais \n", PIBPercapita2);
    printf("Super Poder carta 2: %.2f\n\n", SuperPoder2);

    // menu de comparação com Switch case.
    printf("Escolha o atributo para comparar:\n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("B - PIB\n");
    printf("T - Pontos Turísticos\n");
    printf("D - Densidade Populacional (menor vence)\n");
    printf("C - PIB per Capita\n");
    printf("S - Super Poder\n");
    printf("Escolha a comparação 1:\n");
    scanf(" %c", &primeiroAtributo[0]);
    printf("Escolha a comparação 2:\n");
    scanf(" %c", &segundoAtributo[0]);        
      
    
    switch (primeiroAtributo[0])
    {
    case 'P':
    case 'p':
        printf(" Você escolheu comparar População!\n");
        resultado1 = Populacao > Populacao2 ? 1 : 0;
        break;
    case 'A':
    case 'a':
        printf(" Você escolheu comparar Área!\n");
        resultado1 = AreaKM > AreaKM2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf(" Você escolheu comparar densidade populacional!\n");
        resultado1 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
        break;
    case 'T':
    case 't':
        printf(" Você escolheu comparar pontos turisticos!\n");
        resultado1 = PontosTuristicos > PontosTuristicos2 ? 1 : 0;
        break;
    case 'B':
    case 'b':
        printf(" Você escolheu comparar PIB!\n");
        resultado1 = PIB > PIB2 ? 1 : 0;
        break;
    case 'C':
    case 'c':
        printf(" Você escolheu comparar PIB per capita!\n");
        resultado1 = PIBPercapita > PIBPercapita2 ? 1 : 0;
        break;
    case 'S':
    case 's':
        printf(" Você escolheu comparar Super Poder!\n");
        resultado1 = SuperPoder > SuperPoder2 ? 1 : 0;
        break; 
    default:
        printf("Atributo inválido. Escolha um atributo válido.\n");
    
    }
        switch (segundoAtributo[0])
        {
        case 'p':
        case 'P':
             printf(" Você escolheu comparar população!\n"); 
             resultado2 = Populacao > Populacao2  ? 1 : 0;
            
            break;
        case 'a':
        case 'A':
             printf(" Você escolheu comparar área!\n");
                resultado2 = AreaKM > AreaKM2 ? 1 : 0;
            break;
        case 'd':
        case 'D':
             printf(" Você escolheu comparar densidade populacional!\n");   
            resultado2 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
            break;
        case 't':
        case 'T':
             printf(" Você escolheu comparar pontos turisticos!\n");
            resultado2 = PontosTuristicos > PontosTuristicos2 ? 1 : 0;
            break;
        case 'b':
        case 'B':
             printf(" Você escolheu comparar PIB!\n");
            resultado2 = PIB > PIB2 ? 1 : 0;
            break;
        case 'c':
        case 'C':
             printf(" Você escolheu comparar PIB per capita!\n");
            resultado2 = PIBPercapita > PIBPercapita2 ? 1 : 0;
            break;
        case 's':
        case 'S':
             printf(" Você escolheu comparar Super Poder!\n");
            resultado2 = SuperPoder > SuperPoder2 ? 1 : 0;
            break;
        default:
            printf("Atributo inválido. escolha um atributo válido.\n");
        }
            if (resultado1 && resultado2 == 1 ) {
                printf("Parabens, voce venceu a rodada!\n");
            } else if (resultado1 != resultado2) { 
                printf("Empate! Ninguem venceu essa rodada.\n");
            } else {
                printf("Que pena, você perdeu a rodada!\n");
            }

    return 0;
}
