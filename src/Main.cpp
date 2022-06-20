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
    int v = s.pop();
    s.Debug();

    std::cout << "Value: " << v << std::endl;

    return EXIT_SUCCESS;
}

