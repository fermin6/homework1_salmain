#ifndef DOS_H
#define DOS_H

#include <string>

const int DEBUG = 1;
const int INFO = 2;
const int WARNING = 3;
const int ERROR = 4;
const int CRITICAL = 5;

void logMessage(std::string mensaje, int nivelSeveridad);

void logMessage(std::string mensaje_de_error, std::string archivo, int linea);

void logMessage(std::string mensaje_de_acceso, std::string usuario);

#endif
