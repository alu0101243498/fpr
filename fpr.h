#pragma once

#include <iostream>
#include <math.h>
#include <vector>
#include <stdlib.h>
// Clase FPR para funciones con 2 argumentos
class FPR {
  private:
    int _x; // primer argumento
    int _y; // segundo argumento
  public:
    FPR(int, int);
    ~FPR() {}
    // funciones básicas
    int proyeccion(std::vector<int>, int);
    int o(int, int); // combinacion -> le paso como parámetros los valores de la función
    int S(int); // sucesor
    int zero(int);
    // funciones primitivas recursivas
    int suma(int, int);
    int multiplicacion(int, int);
    int potencia(int, int);
};