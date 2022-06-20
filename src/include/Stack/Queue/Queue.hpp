#pragma once

#include <iostream>

#include "../Node/Node.hpp"

class Queue
{
public:
    Queue();

    void EnQueue(int);
    Node * DeQueue();
    Node * getFront() const;
    Node * getBack() const;
    void setBack(Node* n);
    int peek() const;
    bool isEmpty() const;
    void Debug() const;
private:
    Node * front;
    Node * rear;
};

