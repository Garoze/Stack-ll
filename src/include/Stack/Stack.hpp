#pragma once

#include "Queue/Queue.hpp"

class Stack
{
public:
    Stack(const Queue&);
    void push(int);
    int pop();
    int peek() const;
    void Debug() const;
private:
    Queue fila;
    Queue stack;
};
