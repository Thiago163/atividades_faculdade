#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int aleatorio();
int exercicio1();

int main()
{
    setlocale(LC_ALL, "portuguese");
    int escolha;

    printf("Escolha 1:\n");
    scanf("%d", &escolha);

    if(escolha == 1)
    {
        exercicio1();
    }
    else
    {
        printf("escolha invalida\n");
    }

    return 0;
}

int aleatorio()
{
    int dado;

    dado = rand() % 6 + 1;

    return dado;
}

int exercicio1()
{
    int i;
    int f = 0;

    printf("quantas vezes você quer girar o dado?\n");
    scanf("%d", &i);

    while (f < i)
    {
        f++;
        int resultado = aleatorio();
        printf("\n%d\n", resultado);
    }
    getch();
    return 0;
}
