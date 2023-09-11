#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Função para o questionário sobre Santos Dumont
void questionarioSantosDumont(FILE *SantosDumont)
{
    char opcao;
    printf("Exposição Santos Dumont\n");
    printf("\n");
    printf("1. Qual foi a primeira invenção de Santos Dumont?\n");
    printf("\n");
    printf("A) Balão cilíndrico inflado a hidrogênio.\n");
    printf("B) Modelo de aeroplano\n");
    printf("C) Motor movido por combustível\n");
    printf("D) A primeira asa de avião do mundo\n");
    printf("\n");
    printf("Escolha a alternativa correta\n");
    scanf(" %c", &opcao);

    if (opcao == 'a' || opcao == 'A')
    {
        printf("Acertou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Acertou"
        fprintf(SantosDumont, "1, A, Acertou\n");
    }
    else
    {
        printf("Errou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Errou"
        fprintf(SantosDumont, "1, %c, Errou\n", opcao);
    }
    printf("\n");
    printf("2. Em qual estado do Brasil nasceu Santos Dumont?\n");
    printf("\n");
    printf("A) Distrito Federal.\n");
    printf("B) Mato Grosso\n");
    printf("C) São Paulo\n");
    printf("D) Minas Gerais.\n");
    printf("\n");
    printf("Escolha a alternativa correta\n");
    scanf(" %c", &opcao);

    if (opcao == 'd' || opcao == 'D')
    {
        printf("Acertou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Acertou"
        fprintf(SantosDumont, "2, D, Acertou\n");
    }
    else
    {
        printf("Errou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Errou"
        fprintf(SantosDumont, "2, %c, Errou\n", opcao);
    }

    printf("\n");
    printf("3. Quais eram as profissões de Dumont?\n");
    printf("\n");
    printf("A) Inventor\n");
    printf("B) Cientista\n");
    printf("C) Aeronauta e inventor.\n");
    printf("D) Aeronalta\n");
    printf("\n");
    printf("Escolha a alternativa correta\n");
    scanf(" %c", &opcao);

    if (opcao == 'c' || opcao == 'C')
    {
        printf("Acertou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Acertou"
        fprintf(SantosDumont, "3, C, Acertou\n");
    }
    else
    {
        printf("Errou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Errou"
        fprintf(SantosDumont, "3, %c, Errou\n", opcao);
    }

    printf("\n");
    printf("4. Quando foi realizado o primeiro voo do avião 14-Bis?\n");
    printf("\n");
    printf("A) 23 de outubro de 1906 em Paris.\n");
    printf("B) 5 de maio de 1907 em Belo Horizonte.\n");
    printf("C) 15 de dezembro de 1903 em Kitty Hawk.\n");
    printf("D) 17 de dezembro de 1903 em Paris.\n");
    printf("\n");
    printf("Escolha a alternativa correta\n");
    scanf(" %c", &opcao);

    if (opcao == 'a' || opcao == 'A')
    {
        printf("Acertou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Acertou"
        fprintf(SantosDumont, "4, A, Acertou\n");
    }
    else
    {
        printf("Errou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Errou"
        fprintf(SantosDumont, "4, %c, Errou\n", opcao);
    }

    printf("\n");
    printf("5. Com quantos anos morreu Santos Dumont?\n");
    printf("\n");
    printf("A) 50 anos.\n");
    printf("B) 59 anos.\n");
    printf("C) 68 anos.\n");
    printf("D) 72 anos.\n");
    printf("\n");
    printf("Escolha a alternativa correta\n");
    scanf(" %c", &opcao);

    if (opcao == 'b' || opcao == 'B')
    {
        printf("Acertou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Acertou"
        fprintf(SantosDumont, "5, B, Acertou\n");
    }
    else
    {
        printf("Errou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Errou"
        fprintf(SantosDumont, "5, %c, Errou\n", opcao);
    }
}

// Função para o novo questionário sobre as Olimpíadas
void questionarioOlimpiadas(FILE *OlimpiadasParis2024)
{
    char opcao;
    printf("Jogos Olímpicos\n");
    printf("\n");
    printf("1. Quais são as duas novas modalidades que entraram nessas edições das Olimpíadas?\n");
    printf("\n");
    printf("A) Skateboarding e escalada esportiva.\n");
    printf("B) BMX e natação artística.\n");
    printf("C) Breaking e canoagem slalom extremo.\n");
    printf("D) Tênis de mesa e esgrima.\n");
    printf("\n");
    printf("Escolha a alternativa correta\n");
    scanf(" %c", &opcao);
    if (opcao == 'c' || opcao == 'C')
    {
        printf("Acertou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Acertou"
        fprintf(OlimpiadasParis2024, "1, C, Acertou\n");
    }
    else
    {
        printf("Errou\n");
// Escreva a resposta no arquivo CSV com a indicação de "Errou"
        fprintf(OlimpiadasParis2024, "1, %c, Errou\n", opcao);
    }
    printf("\n");
// Adicione as outras perguntas e respostas sobre as Olimpíadas aqui
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    printf("Escolha o questionário que deseja responder:\n");
    printf("1. Santos Dumont\n");
    printf("2. Jogos Olímpicos\n");
    printf("\n");
    int escolha;
    scanf("%d", &escolha);

// Abra o arquivo CSV para escrever
    FILE *SantosDumont = fopen("SantosDumont.csv", "w");

// Abra o arquivo CSV para escrever
    FILE *OlimpiadasParis2024 = fopen("OlimpiadasParis2024.csv", "w");


    if (SantosDumont == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    if (OlimpiadasParis2024 == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }


    if (escolha == 1)
    {
// Escreva o título do questionário na primeira célula
        fprintf(SantosDumont, "Questionário Santos Dumont\n");
        questionarioSantosDumont(SantosDumont);
    }
    else if (escolha == 2)
    {
// Escreva o título do questionário na primeira célula
        fprintf(OlimpiadasParis2024, "Questionário Olimpíadas Paris 2024\n");
        questionarioOlimpiadas(OlimpiadasParis2024);
    }
    else
    {
        printf("Opção inválida.\n");
    }

// Feche o arquivo CSV
    fclose(SantosDumont);

// Feche o arquivo CSV
    fclose(OlimpiadasParis2024);
    return 0;
}
