#include <iostream>

#include "include/Stack/Stack.hpp"

int main()
{
    Queue fila;
    fila.EnQueue(10);
    fila.EnQueue(15);
    fila.EnQueue(20);
    fila.EnQueue(25);
    fila.EnQueue(30);

    Stack s(fila);
    s.Debug();
    s.push(50);
    s.Debug();

    return EXIT_SUCCESS;
}

