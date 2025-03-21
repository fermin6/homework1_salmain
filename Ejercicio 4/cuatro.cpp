#include "cuatro.h"

// Función recursiva para comparar dos cadenas en tiempo de ejecución

bool comparacion_recursiva(const char* str1, const char* str2) {
    // Si ambos son nulos, son iguales
    if (!str1 && !str2) return true;
    // Si uno es nulo y el otro no, no son iguales
    if ((!str1 && str2) || (str1 && !str2)) return false;
    // Si ambos llegan al final, son iguales
    if (*str1 == '\0' && *str2 == '\0') return true;
    // Comparar los caracteres actuales
    if (*str1 != *str2) return false;
    // Llamada recursiva para los siguientes caracteres
    return comparacion_recursiva(str1 + 1, str2 + 1);
}

