#include "tres.h"
#include <iostream>
#include <memory> 

using namespace std;

// Funcion que crea un nodo con un valor dado
shared_ptr<Node> create_node(int value) {
    auto newNode = make_shared<Node>(); 
    newNode->value = value; 
    newNode->next = nullptr;
    return newNode; 
}
// Funcion que agrega un nodo al inicio de la lista
void push_front(shared_ptr<Node>& head, int value) {
    auto new_node = create_node(value); 
    new_node->next = head; 
    head = new_node; 
}

//Funcion que agrega un nodo al final de la lista
void push_back(shared_ptr<Node>& head, int value) {
    auto new_node = create_node(value); 
    if (!head) { 
        head = new_node; 
        return;
    }
    auto current = head;
    while (current->next) { 
        current = current->next;
    }
    current->next = new_node; 
}

//Funcion que agrega un nodo en una posicion dada
void insert(shared_ptr<Node>& head, int value, int position) {
    auto new_node = create_node(value); 
    if (position <= 0) {
        push_front(head, value); 
        return;
    }
    auto current = head;
    for (int i = 0; current && i < position - 1; ++i) { 
        current = current->next;
    }
    if (!current) { 
        push_back(head, value);
    } else {
        new_node->next = current->next; 
        current->next = new_node; 
    }
}

//Funcion que elimina un nodo en una posicion dada
void erase(shared_ptr<Node>& head, int position) {
    if (!head) return; 

    if (position <= 0) { 
        head = head->next;
        return;
    }

    auto current = head;
    for (int i = 0; current && i < position - 1; ++i) { 
        current = current->next;
    }
    if (!current || !current->next) { 
        auto temp = head;
        while (temp && temp->next && temp->next->next) {
            temp = temp->next; 
        }
        if (temp && temp->next) {
            temp->next = nullptr; 
        }
    } else {
        current->next = current->next->next; 
    }
}

//Funcion que imprime la lista
void print_list(shared_ptr<Node> head) {
    auto current = head;
    while (current) {
        cout << current->value; 
        if (current->next) cout << " -> "; 
        current = current->next; 
    }
    cout << endl;
}
