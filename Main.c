#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Headers/Aleatorio.h"
int main(int argc, char const *argv[]) {
  srand((unsigned)time(NULL));
  while(1){
    int n = 0,a;
    menu_inicial();
    while(n != 1 && n != 2 && n != 3 && n != 4){
        printf("Digite a opcao desejada:");
        scanf("%d",&n);
        if(n != 1 && n != 2 && n != 3 && n != 4){
          printf("Opcao invalida!\n");}}
    if(n == 1){
      int quantDez = 0;
      while (quantDez != 6 && quantDez != 7 && quantDez != 8 && quantDez != 9 && quantDez != 10 && quantDez != 11 && quantDez != 12 && quantDez != 13 && quantDez != 14 && quantDez != 15)
      {
        printf("Entre com a quantidade de dezenas desejada:");
        scanf("%d",&quantDez);
        if (quantDez != 6 && quantDez != 7 && quantDez != 8 && quantDez != 9 && quantDez != 10 && quantDez != 11 && quantDez != 12 && quantDez != 13 && quantDez != 14 && quantDez != 15)
        {
          printf("Quantidade invalida!\n");
        }
      }
      a = 60;
      printf("\nNumeros aleatorios para Mega-Sena: ");
      int * vet;
      vetor_de_aposta(quantDez,a,&vet);
      insertion_sort(quantDez,vet);
      for(int i=0;i<quantDez;i++){
        if(i != quantDez-1 ){
          
          printf("%d-",*(vet+i));
          }
        else{
          
          printf("%d",*(vet+i));
          }
        }
      printf("\n\n");
    }
    if(n == 2){
      int dezena;
      a = 80;
      printf("\nNumeros aleatorios para Quina: ");
      int * vet;
      vetor_de_aposta(5,a,&vet);
      insertion_sort(5,vet);
      for(int i=0;i<5;i++){
        if(i != 4 ){
          
          printf("%d-",*(vet+i));
          }
        else{
          
          printf("%d",*(vet+i));
          }
        }
      printf("\n");
    }

    if(n == 3){
      int dezena;
      a = 40;
      printf("\nNumeros aleatorios para Quadra: ");
      int *vet;
      vetor_de_aposta(4, a, &vet);
      insertion_sort(4, vet);
      for (int i = 0; i < 4; i++)
      {
        if (i != 3)
        {

          printf("%d-", *(vet + i));
        }
        else
        {

          printf("%d", *(vet + i));
        }
      }
      printf("\n");
    }

    if(n == 4){
      int f = 0;
      printf("\nDeseja realmente finalizar a execucao do programa?\n\t1 -> Sim\n\t2 -> Nao\n");
      while(f != 1 && f != 2){
        printf("Digite a opcao desejada:");
        scanf("%d",&f);
        if(f != 1 && f != 2){
          printf("Opcao invalida!\n");}}
      if(f == 1){
        printf("\n\t\t  -----------------------------\n\n\t\t   Desenvolvedor:\n\t\t    Samuel Sena - 3494\n\n\t\t  OBRIGADO POR UTILIZAR O PROGRAMA!\n");
        break;}
      if(f == 2){
        printf("\n\tFinalizacao cancelada!\n");}

    }
  }
  return 0;
}
