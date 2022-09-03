#include "../Headers/Aleatorio.h"
#include <stdio.h>
#include <stdlib.h>

int dezena_aleatoria(int n)
{
  int a;
  do
  {
    a = (rand() % n);
  } while (a == 0);
  return a;
}

void vetor_de_aposta(int quant, int limNum, int **v)
{
  *v = (int *)malloc(quant * sizeof(int));
  do
  {
    **v = (rand() % limNum);
  } while (**v == 0);
  for(int i=1;i<quant;i++){
    do{
      *(*v+i) = (rand()%limNum);
    }while(*(*v+i)==0 || verificaExistencia(*(*v+i),i,*v));
  }
}

int verificaExistencia(int valor, int posicao, int *v){
  for(int j=0;j<posicao;j++){
    if(*(v+j)==valor) return 1;
  }
  return 0;
}

void insertion_sort(int tam,int *a)
{
  int i, j, tmp;

  for (i = 1; i < tam; i++)
  {
    tmp = a[i];
    for (j = i - 1; j >= 0 && tmp < a[j]; j--)
    {
      a[j + 1] = a[j];
    }
    a[j + 1] = tmp;
  }
}

void menu_inicial()
{
  printf("################################################################################\n");
  printf("                        Bem-Vindo ao Gerador de Apostas!                        \n");
  printf("--------------------------------------------------------------------------------\n");
  printf(" 1 -> Mega-Sena            2 -> Quina             3 -> Quadra          4 -> Sair\n");
  printf("################################################################################\n");
}
