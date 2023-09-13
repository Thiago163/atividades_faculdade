#include <locale.h>
#include <math.h>

void x1(float a, float b, float c, float delta);
void delta(float a, float b, float c);
int exercicio4();

void x1(float a, float b, float c, float delta)
{
    float x1;

    x1 = (-b + sqrt(delta)) / (2 * a);
    printf("x1: %f\n", x1);
}

void delta(float a, float b, float c)
{
    float delta;

    delta = (b * b) - (4*a+c);
}

int exercicio4()
{
    float a, b, c;

    printf("Bora calcular Baskara?\n\n");

    printf("Digite a, b e c:\n");
    scanf("%f%f%f", &a, &b, &c);

    float d = delta(a, b, c);

    x1(a, b, c, d);
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int exe;

    printf("Selecione o exercicio\n\n");
    printf("Exe 4:\n");
    scanf("%f", &exe);

    if(exe = 4)
    {
        printf("\n");
        exercicio4();
    }
}
