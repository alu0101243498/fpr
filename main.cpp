#include "fpr.h"

#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>

int main(int argc, char *argv[]) {
  int x = 0;
  int y = 0;
  if (argc != 3) {
    std::cout << "Ha escrito mal los argumentos de entrada, cambiando a modo manual...\n\n";
    std::cout << "Introduzca un número: ";
    std::cin >> x;
    std::cout << "Introduzca otro número: ";
    std::cin >> y;
  } else {
    x = atoi(argv[1]);
    y = atoi(argv[2]);
  }
  FPR fpr(x,y);
  std::cout << std::endl;
  std::cout << "Resultado para suma => " << fpr.suma(x,y) << std::endl;
  std::cout << "Resultado para producto => " << fpr.multiplicacion(x,y) << std::endl;
  std::cout << "Resultado para potencia => " << fpr.potencia(x,y) << std::endl;
}