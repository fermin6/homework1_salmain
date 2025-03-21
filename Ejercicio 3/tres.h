#ifndef TRES_H
#define TRES_H

#include <memory>
using namespace std;

//Esta estructura representa un nodo de la lista
struct Node {
    int value;                   
    shared_ptr<Node> next;   
};

//Funciones para manipular la lista

shared_ptr<Node> create_node(int value); 
void push_front(shared_ptr<Node>& head, int value); 
void push_back(shared_ptr<Node>& head, int value); 
void insert(shared_ptr<Node>& head, int value, int position); 
void erase(shared_ptr<Node>& head, int position); 
void print_list(shared_ptr<Node> head); 

#endif 
