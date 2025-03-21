#include "uno.h"
#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Ingrese la dimension de la matriz: " << endl;
    cin >> n;

    int** matriz = crear_matriz(n);

    cout << "Matriz impresa en orden inverso:" << endl;
    imprimir_matriz(matriz, n); 

    liberar_matriz(matriz, n);
    return 0;

}