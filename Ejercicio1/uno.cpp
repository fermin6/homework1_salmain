#include "uno.h"
#include <iostream>

using namespace std;

int** crear_matriz(int n) {
    int** matriz = new int*[n];
    int valor = 1;

    for (int i = 0; i < n; i++) {
        matriz[i] = new int[n];
        for (int j = 0; j < n; j++) {
            matriz[i][j] = valor++;
        }
    }
    return matriz;
}

void liberar_matriz(int** matriz, int n) {
    for (int i = 0; i < n; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
}

void imprimir_matriz(int** matriz, int n) {
    int total_elem = n * n;

    for (int k = total_elem - 1; k >= 0; k--) {
        int i = k / n; 
        int j = k % n; 
        cout << "[" << i+1 << "][" << j+1 << "] = " << matriz[i][j] << endl;
    }
}