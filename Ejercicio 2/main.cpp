#include "dos.h"
#include <iostream>

using namespace std;

int main() {
    cout << "SISTEMA LOG\n Niveles de severidad:\n 1. DEBUG\n 2. INFO\n 3. WARNING\n 4. ERROR\n 5. CRITICAL\n INGRESE OTRO NUMERO PARA SALIR\n";

    while(true) {
        int nivelSeveridad;
        string mensaje;

        cout << "\nIngrese el nivel de severidad: ";
        cin >> nivelSeveridad;

        if (nivelSeveridad < 1 || nivelSeveridad > 5) {
            break;
        }

        cout << "\nIngrese el mensaje: ";
        cin.ignore(); 
        getline(cin, mensaje);

        logMessage(mensaje, nivelSeveridad);
    }

    logMessage("Se produjo un error al salir del sistema log", "main.cpp", 36);

    string usuario;
    cout << "\nPor favor ingrese su usuario: ";
    cin >> usuario;
    logMessage("Verificando autenticidad...", usuario);

    try {
        throw runtime_error("Simulación de error en tiempo de ejecución");
    } catch (const exception &e) {
        logMessage(e.what(), "main.cpp", __LINE__); 
        return 1; 
    }
    return 0;
}