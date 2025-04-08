
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


int Opcao;
float  nota1, nota2, media;


printf("-Menu Para Gerenciamento de Estudantes\n");
printf("1. Calcular Média!!\n");
printf("2. Determinar Status!!\n");
printf("3. Sair!!\n"); 
printf("Escolha uma Opção: ");
scanf("%d", &Opcao);


switch (Opcao)
{
case 1:
     printf("Calcular a Média\n");
     printf("Digite a Primeira Nota: ");
     scanf("%f", &nota1);
     printf("Digite a Segunda Nota: ");
     scanf("%f", &nota2);
     media = (nota1 + nota2);
     printf("A Média do Estudante é: %.2f", media);
 break; 
case 2:
     printf("Digite a Média do Estudante: ");
     scanf("%f", &media);

if (media >= 7)
{    printf("Status: Aprovado!!\n");
     
} else if (media >=5) {
     printf("Status: Rcuperação!!\n");
} else {
     printf("Status: Reprovado!!");
}
     
break;
case 3: 
    printf("Saindo...\n");


default:
    printf("Opção Inválida!!");
    break;
}


return 0;

}