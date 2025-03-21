#ifndef DOS_H
#define DOS_H

#include <string>

using namespace std;

// Declaración de los niveles de severidad
const int DEBUG = 1;
const int INFO = 2;
const int WARNING = 3;
const int ERROR = 4;
const int CRITICAL = 5;

// Declaración de las funciones
void logMessage(string mensaje, int nivelSeveridad);
void logMessage(string mensaje_de_error, string archivo, int linea);
void logMessage(string mensaje_de_acceso, string usuario);

#endif 
