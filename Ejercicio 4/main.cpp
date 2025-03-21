/*En este programa se va a comparar la igualdad de dos cadenas de texto de forma recursiva. 
Ademas se compararan los tiempos de ejecución de las funciones, cuando se realizan luego de 
la compilacion y durante el tiempo de compilacion.*/

#include <iostream>
#include <chrono>
#include "cuatro.h"

using namespace std;

// Función para comparar dos cadenas en tiempo de compilación (mismo funcionamiento que comparacion_recursiva)
constexpr bool comparacion_constexpr(const char* str1, const char* str2) {

    if (!str1 && !str2) return true;
    if ((!str1 && str2) || (str1 && !str2)) return false;
    if (*str1 == '\0' && *str2 == '\0') return true;
    if (*str1 != *str2) return false;

    return comparacion_constexpr(str1 + 1, str2 + 1);
}

int main() {

    //test y calculo del tiempo de ejecución de la función comparacion_recursiva

    const char* texto1 = "Este es un texto de prueba de al menos sesenta y cuatro caracteres de longitud.";
    const char* texto2 = "Este es un texto de prueba de al menos sesenta y cuatro caracteres de longitud.";
    const char* texto3 = "Este es un texto distinto de prueba de al menos sesenta y cuatro caracteres de longitud.";

    auto startTime = chrono::high_resolution_clock::now();
    bool resultado = comparacion_recursiva(texto1, texto2);
    auto endTime = chrono::high_resolution_clock::now();
    auto elapsedTime = chrono::duration_cast<chrono::nanoseconds>(endTime - startTime);

    cout << "Las cadenas son iguales: " << (resultado ? "true" : "false") << endl;
    cout << "La comparación tomó: " << elapsedTime.count() << " nanosegundos" << endl;

    //test de comparacion de cadenas distintas

    resultado = comparacion_recursiva(texto1, texto3);
    cout << "Las cadenas son iguales: " << (resultado ? "true" : "false") << endl;

    //test y calculo del tiempo de compilación de la función comparacion_constexpr, 
    //se realiza la comparacion en tiempo de ejecución

    constexpr const char* texto_constexpr1 = "Este es un texto de prueba de al menos sesenta y cuatro caracteres de longitud.";
    constexpr const char* texto_constexpr2 = "Este es un texto de prueba de al menos sesenta y cuatro caracteres de longitud.";

    auto startTimeCompile = chrono::high_resolution_clock::now();
    constexpr bool resultadoConstexpr = comparacion_constexpr(texto_constexpr1, texto_constexpr2);
    auto endTimeCompile = chrono::high_resolution_clock::now();
    auto elapsedTimeCompile = chrono::duration_cast<chrono::nanoseconds>(endTimeCompile - startTimeCompile);

    cout << "Las cadenas son iguales (tiempo de compilación): " << (resultadoConstexpr ? "true" : "false") << endl;
    cout << "La comparación tomó: " << elapsedTimeCompile.count() << " nanosegundos" << endl;

    return 0;
}
