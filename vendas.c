#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
setlocale(LC_ALL, "portuguese");
int Esanto = 0, Ejogos = 0, Earte = 0, Ebit = 0;
float Psanto = 10.0, Pjogos = 15.0, Parte = 20.0, Pbit = 20.0;
float total_arrecadado = 0.0;
int ultima_venda_opcao = 0; // Armazena a opção da última venda
printf("Bem-vindo ao Museu Multitemático!\n");
while (1) {
int opcao;
printf("\nEscolha a opção:\n");
printf("134. Santos Dumont (R$ %.2f)\n", Psanto);
printf("256. Jogos Olímpicos de Paris 2024 (R$ %.2f)\n", Pjogos);
printf("343. 100 anos da Semana de Arte Moderna (R$ %.2f)\n", Parte);
printf("457. História do real ao bitcoin (R$ %.2f)\n", Pbit);
printf("906. Encerrar venda\n");
printf("987. Cancelar última venda\n");
scanf("%d", &opcao);
if (opcao == 134) {
Esanto++;
total_arrecadado += Psanto;
ultima_venda_opcao = 134; // Armazena a opção da última venda
} else if (opcao == 256) {
Ejogos++;
total_arrecadado += Pjogos;
ultima_venda_opcao = 256; // Armazena a opção da última venda
} else if (opcao == 343) {
Earte++;
total_arrecadado += Parte;
ultima_venda_opcao = 343; // Armazena a opção da última venda
} else if (opcao == 457) {
Ebit++;
total_arrecadado += Pbit;
ultima_venda_opcao = 457; // Armazena a opção da última venda
} else if (opcao == 906) {
break; // Encerra a venda
} else if (opcao == 987) {
// Cancelar a última venda
if (ultima_venda_opcao == 134) {
Esanto--;
total_arrecadado -= Psanto;
} else if (ultima_venda_opcao == 256) {
Ejogos--;
total_arrecadado -= Pjogos;
} else if (ultima_venda_opcao == 343) {
Earte--;
total_arrecadado -= Parte;
} else if (ultima_venda_opcao == 457) {
Ebit--;
total_arrecadado -= Pbit;
} else {
printf("Nenhuma venda anterior para cancelar.\n");
}
} else {
printf("Opção inválida! Escolha novamente.\n");
}
}
printf("\nRelatório de Vendas:\n");
printf("Entradas para Santos Dumont: %d\n", Esanto);
printf("Entradas para Jogos Olímpicos Paris 2024: %d\n", Ejogos);
printf("Entradas para 100 anos da Semana de Arte Moderna: %d\n", Earte);
printf("Entradas para História do real ao bitcoin: %d\n", Ebit);
printf("Total Arrecadado: R$ %.2f\n", total_arrecadado);
FILE *csv_file = fopen("relatorio_vendas.csv", "w");
if (csv_file == NULL) {
printf("Erro ao criar o arquivo CSV.\n");
return 1;
}
fprintf(csv_file, "Tema,Entradas,Valor Total\n");
fprintf(csv_file, "Santos Dumont,%d,%.2f\n", Esanto, Esanto * Psanto);
fprintf(csv_file, "Jogos Olímpicos Paris 2024,%d,%.2f\n", Ejogos, Ejogos * Pjogos);
fprintf(csv_file, "100 anos da Semana de Arte Moderna,%d,%.2f\n", Earte, Earte * Parte);
fprintf(csv_file, "História do real ao bitcoin,%d,%.2f\n", Ebit, Ebit * Pbit);
fclose(csv_file);
printf("Dados exportados para o arquivo 'relatorio_vendas.csv'.\n");
return 0;
}
