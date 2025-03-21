#include "tres.h"
#include <memory>
#include <iostream>

int main() {
    std::shared_ptr<Node> head = nullptr; // Inicializa la cabeza de la lista

    // Pruebas de funcionalidad
    push_front(head, 1);
    push_back(head, 3);
    push_back(head, 9);
    insert(head, 6, 2); 
    print_list(head); 

    erase(head, 1); 
    print_list(head); 

    insert(head, 7, 0); 
    print_list(head); 

    erase(head, 10); 
    print_list(head); 

    return 0;
}
