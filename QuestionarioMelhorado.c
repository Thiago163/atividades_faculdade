#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    char *pergunta;
    char *opcoes[4];
    char resposta;
} Pergunta;

void apresentarPergunta(Pergunta pergunta, FILE *arquivo)
{
    char opcao;
    printf("%s\n\n", pergunta.pergunta);

    for (int i = 0; i < 4; i++)
    {
        printf("%c) %s\n", 'A' + i, pergunta.opcoes[i]);
    }

    printf("\nEscolha a alternativa correta\n");
    scanf(" %c", &opcao);

    if (toupper(opcao) == pergunta.resposta)
    {
        printf("Acertou\n");
        fprintf(arquivo, "%c, Acertou\n", opcao);
    }
    else
    {
        printf("Errou\n");
        fprintf(arquivo, "%c, Errou\n", opcao);
    }
    printf("\n");
}

void questionario(FILE *arquivo, Pergunta perguntas[], int numPerguntas, const char *titulo)
{
    char opcao;
    printf("%s\n", titulo);
    fprintf(arquivo, "%s\n", titulo);

    for (int i = 0; i < numPerguntas; i++)
    {
        apresentarPergunta(perguntas[i], arquivo);
    }
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

    FILE *arquivo;
    Pergunta perguntas[5];

    if (escolha == 1)
    {
        arquivo = fopen("SantosDumont.csv", "w");

        Pergunta perguntasSantosDumont[] =
        {
            {"Qual foi a primeira invenção de Santos Dumont?", {"Balão cilíndrico inflado a hidrogênio.", "Modelo de aeroplano", "Motor movido por combustível", "A primeira asa de avião do mundo"}, 'A'},
            {"Em qual estado do Brasil nasceu Santos Dumont?", {"Distrito Federal.", "Mato Grosso", "São Paulo", "Minas Gerais."}, 'D'},
            {"Quais eram as profissões de Dumont?", {"Inventor", "Cientista", "Aeronauta e inventor.", "Aeronalta"}, 'C'},
            {"Quando foi realizado o primeiro voo do avião 14-Bis?", {"23 de outubro de 1906 em Paris.", "5 de maio de 1907 em Belo Horizonte.", "15 de dezembro de 1903 em Kitty Hawk.", "17 de dezembro de 1903 em Paris."}, 'A'},
            {"Com quantos anos morreu Santos Dumont?", {"50 anos.", "59 anos.", "68 anos.", "72 anos."}, 'B'}
        };

        for (int i = 0; i < 5; i++)
        {
            perguntas[i] = perguntasSantosDumont[i];
        }
    }
    else if (escolha == 2)
    {
        arquivo = fopen("OlimpiadasParis2024.csv", "w");

        Pergunta perguntasOlimpiadas[] =
        {
            {"Quais são as duas novas modalidades que entraram nessas edições das Olimpíadas?", {"Skateboarding e escalada esportiva.", "BMX e natação artística.", "Breaking e canoagem slalom extremo.", "Tênis de mesa e esgrima."}, 'C'},
            {"Quais os anos em que Paris já foi sede dos Jogos Olímpicos?", {"Nunca foi sede", "Apenas em 2024", "1800 e 1920 e agora em 2024", "1900 e 1924 e agora em 2024"}, 'D'},
            {"Quantas modalidades de esporte serão ao todo na edição inteira?", {"O evento terá 58 modalidades e 32 esportes.", "O evento terá 8 modalidades e 2 esportes.", "O evento terá 48 modalidades e 32 esportes.", "O evento terá 48 modalidades e 22 esportes."}, 'C'},
            {"Qual o nome do mascote desta edição?", {"Phryges", "Bolinha", "Willie", "Footix"}, 'A'},
            {"Em qual dia será a abertura dos jogos?", {"27 de julho.", "26 de julho.", "30 de janeiro.", "31 de abril."}, 'B'}
        };

        for (int i = 0; i < 5; i++)
        {
            perguntas[i] = perguntasOlimpiadas[i];
        }
    }
    else
    {
        printf("Opção inválida.\n");
        return 1;
    }

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    questionario(arquivo, perguntas, 5, escolha == 1 ? "Questionário Santos Dumont" : "Questionário Olimpíadas Paris 2024");

    fclose(arquivo);
    return 0;
}
