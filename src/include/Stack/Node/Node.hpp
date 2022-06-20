#pragma once

class Node
{
public:
    Node(int);

    int value;
    Node * prev;
    Node * next;
};
