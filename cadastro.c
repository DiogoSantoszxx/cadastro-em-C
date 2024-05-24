#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PEOPLE 100

typedef struct
{
  char nome[100];
  int idade;
  char faculdade[100];
} Pessoa;

Pessoa lista[MAX_PEOPLE];
int contador = 0;

void cadastrar()
{
  if (contador >= MAX_PEOPLE)
  {
    printf("A lista está cheia!\n");
    return;
  }

  printf("Digite seu nome: ");
  scanf("%s", lista[contador].nome);
  printf("Digite sua idade: ");
  scanf("%d", &lista[contador].idade);
  printf("Digite qual sua faculdade: ");
  scanf("%s", lista[contador].faculdade);

  contador++;
}

void listar()
{
  printf("------------------------\n");
  for (int i = 0; i < contador; i++)
  {
    printf("Nome: %s\n", lista[i].nome);
    printf("Idade: %d\n", lista[i].idade);
    printf("Faculdade: %s\n", lista[i].faculdade);
    printf("------------------------\n");
  }
  printf("Digite 1 para voltar:");
  int enter;
  scanf("%d", &enter);
}

void limpar()
{
 contador = 0;
 printf("A lista foi limpa!\n");
 printf("Digite 1 para voltar:");
  int enter;
  scanf("%d", &enter); 
}

int main()
{
  int numerofuc;

  while (1)
  {
    // Limpar o terminal antes de mostrar o menu
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    printf("_________             .___                __                 \n");
    printf("\\_   ___ \\_____     __| _/____    _______/  |________  ____  \n");
    printf("/    \\  \\/\\__  \\   / __ |\\__  \\  /  ___/\\   __\\_  __ \\/  _ \\ \n");
    printf("\\     \\____/ __ \\_/ /_/ | / __ \\_\\___ \\  |  |  |  | \\(  <_> )\n");
    printf(" \\______  (____  /\\____ |(____  /____  > |__|  |__|   \\____/ \n");
    printf("        \\/     \\/      \\/     \\/     \\/                      \n\n");
    printf("--------------------------------------------------------------------\n");

    printf("| Cadastrar: (1)\n");
    printf("| Listar: (2)\n");
    printf("| Limpar Lista:(3)\n");
    printf("| Sair: (4)\n");

    printf("Digite um número para fazer uma função: ");
    scanf("%d", &numerofuc);

    if (numerofuc == 1)
    {
      cadastrar();
    }
    else if (numerofuc == 2)
    {
      listar();
    }
    else if (numerofuc == 3)
    {
      limpar();
    }
    else if (numerofuc == 4)
    {
#ifdef _WIN32
      system("cls");
#else
      system("clear");
#endif
      break;
    }
  }

  return 0;
}