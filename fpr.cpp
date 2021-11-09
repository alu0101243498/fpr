#include "fpr.h"

FPR::FPR(int x, int y) {
  _x = x;
  _y = y;
}

int FPR::proyeccion(std::vector<int> arr, int arg) {
  if (arr.size() < arg || arg <= 0) {
    std::cout << "Proyección no válida\nSaliendo del programa...\n";
    exit(EXIT_FAILURE);
  }
  return arr[arg-1];
}

int FPR::o(int fun1, int fun2) {

}

int FPR::S(int valor) {
  return (1 + valor);
}

int FPR::zero(int valor) {
  return 0;
}

// revisar bien -> puede que haya que usar proyeccion, sucesor y combinacion
int FPR::suma(int x, int y) {
  if (y != 0) {
    std::vector<int> arguments {x, y, suma(x, y - 1)};
    return S(proyeccion(arguments,3));
  }
  return x;
}

int FPR::multiplicacion(int x, int y) {
  if (y != 0) {
    std::vector<int> arguments {x, y, multiplicacion(x, y - 1)};
    return suma(proyeccion(arguments, 3), proyeccion(arguments, 1));
  }
  return zero(0);
}

int FPR::potencia(int x, int y) {
  if (y != 0) {
    std::vector<int> arguments {x, y, potencia(x, y - 1)};
    return multiplicacion(proyeccion(arguments, 3), proyeccion(arguments, 1));
  }
  return 1;
}