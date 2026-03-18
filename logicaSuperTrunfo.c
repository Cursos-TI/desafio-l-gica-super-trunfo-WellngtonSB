#include <stdio.h>

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
  int resultado;

  // variaveis Carta 2
  char Codigo2[4];  
  char Estado02;
  char NomeCidade2[64];
  int PontosTuristicos2; 
  double DensidadePopulacional2, PIBPercapita2, AreaKM2, PIB2;
  unsigned long int Populacao2;
  float SuperPoder2;
  double inversoDensidade2;

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
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &resultado);

    switch (resultado)
    {
    case 1:
        if (Populacao == Populacao2) printf("Empate na População!\n");
        else if (Populacao > Populacao2) printf("População da Carta 1 venceu!\n");
        else printf("População da Carta 2 venceu!\n");
        break;
    case 2:
        if (AreaKM == AreaKM2) printf("Empate na Área!\n");
        else if (AreaKM > AreaKM2) printf("Área da Carta 1 venceu!\n");
        else printf("Área da Carta 2 venceu!\n");
        break;
    case 3:
        if (PIB == PIB2) 
            printf("Empate no PIB!\n");
        else if (PIB > PIB2) 
            printf("PIB da Carta 1 venceu!\n");
        else 
            printf("PIB da Carta 2 venceu!\n");
        break;
    case 4:
        if (PontosTuristicos == PontosTuristicos2) 
            printf("Empate nos Pontos Turísticos!\n");
        else if (PontosTuristicos > PontosTuristicos2) 
            printf("Pontos Turísticos da Carta 1 venceu!\n");
        else 
            printf("Pontos Turísticos da Carta 2 venceu!\n");
        break;
    case 5:
        if (DensidadePopulacional == DensidadePopulacional2) 
            printf("Empate na Densidade Populacional!\n");
        else if (DensidadePopulacional < DensidadePopulacional2) 
            printf("Densidade Populacional da Carta 1 venceu!\n");
        else 
            printf("Densidade Populacional da Carta 2 venceu!\n");
        break;
    case 6:
        if (PIBPercapita == PIBPercapita2) 
            printf("Empate no PIB per Capita!\n");
        else if (PIBPercapita > PIBPercapita2) 
            printf("PIB per Capita da Carta 1 venceu!\n");
        else 
            printf("PIB per Capita da Carta 2 venceu!\n");
        break;
    case 7:
        if (SuperPoder == SuperPoder2) 
            printf("Empate no Super Poder!\n");
        else if (SuperPoder > SuperPoder2) 
            printf("Super Poder da Carta 1 venceu!\n");
        else 
            printf("Super Poder da Carta 2 venceu!\n");
        break;
    default:
        printf("Opção inválida. Execute novamente e escolha um número de 1 a 7.\n");
        break;
    }

    return 0;
}
