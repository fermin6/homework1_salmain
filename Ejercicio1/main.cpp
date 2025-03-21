/* Este programa creara una matriz de nxn y luego la imprimira en orden inverso*/

#include "uno.h"
#include <iostream>

using namespace std;

int main(){
    // Se pide al usuario la dimension de la matriz
    int n;
    cout << "Ingrese la dimension de la matriz: " << endl;
    cin >> n;
    // Se crea la matriz
    int** matriz = crear_matriz(n);

    // Se imprime la matriz
    cout << "Matriz impresa en orden inverso:" << endl;
    imprimir_matriz(matriz, n); 

    // Se libera la memoria ya que se esta trabajando con punteros
    liberar_matriz(matriz, n);
    return 0;

}