// Adicionando Bibliotecas 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declarando variaveis dos Paises 1 e 2
int main() {

char Pais1[20] = "Brasil";
float Area1 = 8510.000;
int Populacao1 = 211000.000;
float Pib1 = 2179000.000;
int Pontos_Turisticos1 = 50;
float Densidade_Populacional1 = Populacao1 / Area1;
int Opcao;
int Exibicao;

char Pais2[20] = "Angola";
float Area2 = 1250.000;
int Populacao2 = 37200.000;
float Pib2 = 84820000.000;
int Pontos_Turisticos2 = 20;
float Densidade_Populacional2 = Populacao2 / Area2;

// Utilização do Printf

printf("## SEJA  MUITO BEM VINDO!!\n");
printf("## Opções:\n");
printf("1. Apresentação dos Paises\n");
printf("2. Comparação dos Atributos: PIB, POPULAÇÃO!\n");
printf("3. Sair do Jogo\n");
printf("Digite Sua Esolha: ");
scanf("%d", &Opcao);


// Entrando com o switch
switch (Opcao)
{
case 1:
   printf("## APRESENTAÇÃO DOS PAISES!! ##");
   printf("\n          \n");

   printf("## PAIS 1 ##");
   printf("\n       \n");

   printf("Pais 1: %s\n", Pais1);
   printf("Área 1: %.3f Km²\n", Area1);
   printf("População 1: %d milhões de habitantes\n", Populacao1);
   printf("Pib 1: R$ %.3f Trilhões\n", Pib1);
   printf("Pontos Turisticos 1: %d\n", Pontos_Turisticos1);
   printf("Densidade Populacional 1: %.f\n", Densidade_Populacional1);
   printf("\n       \n");

   printf("## PAIS 2 ##");
   printf("\n      \n");

   printf("Pais 2: %s\n", Pais2);
   printf("Área 2: %.3f Km²\n", Area2);
   printf("População 2: %d milhões de habitantes\n", Populacao2);
   printf("Pib 2: R$ %.3f Milhões\n", Pib2);
   printf("Pontos Turisticos 2: %d\n", Pontos_Turisticos2);
   printf("Densidade Populacional 2: %.f\n", Densidade_Populacional2);
   
    break;
case 2:
   printf("Comparação dos atributos:\n");
   printf("Digite: Exibir . Para a Exibição do Comparativo: ");
   scanf("%s", &Exibicao);

   // utilizando if e else if

  if (Pib1 > Pib2)
  {
   printf("Pais 2 Venceu o Quesito PIB!!");
  } else if ((Pib1 > Pib2)|| 
            (Populacao1 > Populacao2));
  { printf("Pais 1 Venceu em todas as comparações!! ##");
  }
break;
case 3:
    printf("## SAINDO DO JOGO....");
break;

default:
  printf("OPÇÃO INVALIDA");
    break;
}

// encerrando 

return 0;

}