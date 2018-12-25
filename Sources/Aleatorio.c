#include "../Headers/Aleatorio.h"
#include <stdio.h>
#include <stdlib.h>

int dezena_aleatoria(int n){
  int a;
  a = (rand()%n);
  return a;
}

 void menu_inicial(){
   printf("################################################################################\n");
   printf("                        Bem-Vindo ao Gerador de Apostas!                        \n");
   printf("--------------------------------------------------------------------------------\n");
   printf(" 1 -> Mega-Sena            2 -> Quina             3 -> Quadra          4 -> Sair\n");
   printf("################################################################################\n");
 }
