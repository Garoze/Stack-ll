#pragma once

#include <iostream>

#include "Node/Node.hpp"

class Queue
{
public:
    Queue();

    void EnQueue(int);
    Node * DeQueue();

    void setFront(int);
    void setRear(Node*);
    Node * getFront() const;
    Node * getRear() const;

    int peek() const;
    bool isEmpty() const;
    void Debug() const;
private:
    Node * front;
    Node * rear;
};

