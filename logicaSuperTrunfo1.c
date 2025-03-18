
//Desafio lógica SuperTrunfo Nivel Novato

#include <stdio.h>

int main() {

    //Declaração das variaveis da Carta 1

    char Carta1 = 'A';
    char Estado1 = 1;
    int Codigo1 = 1;
    char Cidade1[20] = "Aracaju";
    double Populacao1 = 602.757;
    float Area1 = 21.910;
    double Pib1 = 51.086 * 1e9;
    int Numero_de_pontos_turisticos1 = 30;
    float densidade_populacional1 = Populacao1 / Area1;
    float pib_per_capita1 = Pib1 / (double)Populacao1;
    float Super_Poder1 = Populacao1+Area1+Pib1+Numero_de_pontos_turisticos1+pib_per_capita1+(Area1 / Populacao1);


//Espaçamento

printf("\n                                      \n");


printf("\nCARTA1: \n");
//Utilizando o Printf
printf("\n                                      \n");
printf("Carta: %c\n", Carta1);
printf("Estado: %d\n", Estado1);
printf("Codigo: %d\n", Codigo1);
printf("Nome da cidade: %s\n", Cidade1);
printf("População: %f mil habitantes\n", Populacao1);
printf("Area: %.3f km²\n", Area1);
printf("PIB: %.2f Bilhões de reais\n", Pib1/1e9);
printf("Número de Pontos turisticos: %d\n", Numero_de_pontos_turisticos1);
printf("Densidade populacional: %.3f hab/km²\n", densidade_populacional1);
printf("PIB per capita: R$%.2lf Reais\n", pib_per_capita1);
printf("Super Poder : %.3f\n", Super_Poder1);




//Declaração das variaveis da Carta 2

    char Carta2 = 'B';
    char Estado2 = 2;
    int Codigo2= 2;
    char Cidade2[30] = "Maceió";
    int Populacao2 = 957.916;
    float Area2 = 509.320;
    double Pib2 = 24.48401631 * 1e9;
    int Numero_de_pontos_turisticos2 = 23;
    float densidade_populacional2 = Populacao2 / Area2;
    double pib_per_capita2 = Pib2 / (double)Populacao2;
    float Super_Poder2 = Populacao2+Area2+Pib2+Numero_de_pontos_turisticos2+pib_per_capita2+(Area2 / Populacao2);



//Espaçamento    

printf("\n                                      \n");


printf("\nCARTA2: \n");

//Utilizando o Printf
printf("\n                                      \n");
printf("Carta: %c\n", Carta2);
printf("Estado: %d\n", Estado2);
printf("Codigo: %d\n", Codigo2);
printf("Nome da cidade: %s\n", Cidade2);
printf("População: %d milhões de habitantes\n", Populacao2);
printf("Area: %.3f km²\n", Area2);
printf("PIB: %.6f Bilhões de reais\n", Pib2);
printf("Número de Pontos turisticos: %d\n", Numero_de_pontos_turisticos2);
printf("Densidade Populacional:  %.3f hab/km²\n", densidade_populacional2);
printf("PIB per capita : R$%.2lf reais\n", pib_per_capita2);
printf("Super Poder: %.3f\n", Super_Poder2);

// Espaçamento e comparativo
printf("\n     \n");

printf("Comparação do atributo: Pontos Turisticos");

printf("\n     \n");


printf("Número de Pontos Turisticos da cidade 1: ");
scanf("%d", &Numero_de_pontos_turisticos1);

printf("Número de Pontos Turisticos da Cidade 2: ");
scanf("%d", &Numero_de_pontos_turisticos2);

printf("\n    \n");

printf("Resultado: \n");

if (Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2)
{
 printf("Cidade 2 Venceu em Pontos Turisticos!! \n");

} else {

 printf("Cidade 1 Venceu em Pontos Turisticos!!");

}


return 0;

}


