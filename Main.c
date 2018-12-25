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
      int dezena;
      a = 60;
      printf("\nNumeros aleatorios para Mega-Sena: ");
      for(int i=0;i<6;i++){
        if(i != 5 ){
          dezena = dezena_aleatoria(a);
          printf("%d-",dezena);
          }
        else{
          dezena = dezena_aleatoria(a);
          printf("%d",dezena);
          }
        }
      printf("\n");
    }
    if(n == 2){
      int dezena;
      a = 50;
      printf("\nNumeros aleatorios para Quina: ");
      for(int i=0;i<5;i++){
        if(i != 4 ){
          dezena = dezena_aleatoria(a);
          printf("%d-",dezena);
          }
        else{
          dezena = dezena_aleatoria(a);
          printf("%d",dezena);
          }
        }
      printf("\n");
    }

    if(n == 3){
      int dezena;
      a = 40;
      printf("\nNumeros aleatorios para Quadra: ");
      for(int i=0;i<4;i++){
        if(i != 3 ){
          dezena = dezena_aleatoria(a);
          printf("%d-",dezena);
          }
        else{
          dezena = dezena_aleatoria(a);
          printf("%d",dezena);
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
