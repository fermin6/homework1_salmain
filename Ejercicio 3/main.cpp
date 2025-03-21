/* Este programa implementa una lista enlazada con nodos que unicamente 
   contienen valor y una direccion de memoria*/

#include "tres.h"
#include <memory>
#include <iostream>

using namespace std;

//Test para comprobar el funcionamiento de la lista

int main() {
    shared_ptr<Node> head = nullptr; 

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
