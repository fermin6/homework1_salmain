#include "dos.h"
#include <iostream>
#include <cstdio> 

using namespace std;

// Función que recibe un mensaje y un nivel de severidad y lo imprime en consola
void logMessage(string mensaje, int nivelSeveridad) {

    // Abrir el archivo
    FILE* logFile = fopen("log.txt", "a");
    if (logFile == nullptr) {
        cout << "[ERROR] No se pudo abrir el archivo de log." << endl;
        return;
    }

    // Escribir en el archivo dependiendo el nivel de severidad
    switch (nivelSeveridad) {
        case DEBUG:
            fprintf(logFile, "[DEBUG] %s\n", mensaje.c_str());
            cout << "[DEBUG] " << mensaje << endl;
            break;
        case INFO:
            fprintf(logFile, "[INFO] %s\n", mensaje.c_str());
            cout << "[INFO] " << mensaje << endl;
            break;
        case WARNING:
            fprintf(logFile, "[WARNING] %s\n", mensaje.c_str());
            cout << "[WARNING] " << mensaje << endl;
            break;
        case ERROR:
            fprintf(logFile, "[ERROR] %s\n", mensaje.c_str());
            cout << "[ERROR] " << mensaje << endl;
            break;
        case CRITICAL:
            fprintf(logFile, "[CRITICAL] %s\n", mensaje.c_str());
            cout << "[CRITICAL] " << mensaje << endl;
            break;
    }

    fclose(logFile);
}

// Función que recibe un mensaje de error, el archivo y la línea donde ocurrió el error y lo imprime en consola
void logMessage(string mensaje_de_error, string archivo, int linea) {
    FILE* logFile = fopen("log.txt", "a");
    if (logFile == nullptr) {
        cout << "[ERROR] No se pudo abrir el archivo de log." << endl;
        return;
    }

    fprintf(logFile, "[ERROR] %s en el archivo %s en la línea %d\n", mensaje_de_error.c_str(), archivo.c_str(), linea);
    cout << "[ERROR] " << mensaje_de_error << " en el archivo " << archivo << " en la línea " << linea << endl;

    fclose(logFile);
}

// Función que recibe un mensaje de acceso y el usuario que intentó acceder y lo imprime en consola
void logMessage(string mensaje_de_acceso, string usuario) {
    FILE* logFile = fopen("log.txt", "a");
    if (logFile == nullptr) {
        cout << "[ERROR] No se pudo abrir el archivo de log." << endl;
        return;
    }

    fprintf(logFile, "[SECURITY] %s Usuario: %s\n", mensaje_de_acceso.c_str(), usuario.c_str());
    cout << "[SECURITY] " << mensaje_de_acceso << " Usuario: " << usuario << endl;

    fclose(logFile);
}
