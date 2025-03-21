#include "dos.h"
#include <iostream>

using namespace std;

void logMessage(string mensaje, int nivelSeveridad) {
    if (nivelSeveridad == DEBUG) {
        cout << "[DEBUG] " << mensaje << endl;
    } else if (nivelSeveridad == INFO) {
        cout << "[INFO] " << mensaje << endl;
    } else if (nivelSeveridad == WARNING) {
        cout << "[WARNING] " << mensaje << endl;
    } else if (nivelSeveridad == ERROR) {
        cout << "[ERROR] " << mensaje << endl;
    } else if (nivelSeveridad == CRITICAL) {
        cout << "[CRITICAL] " << mensaje << endl;
    }
}

void logMessage(string mensaje_de_error, string archivo, int linea) {
    cout << "[ERROR] " << mensaje_de_error << " en el archivo " << archivo << " en la linea " << linea << endl;
}

void logMessage(string mensaje_de_acceso, string usuario) {
    cout << "[SECURITY] " << mensaje_de_acceso << " Usuario:  " << usuario << endl;
}

