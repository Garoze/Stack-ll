#include "include/Stack/Queue/Queue.hpp"

Queue::Queue()
    : front(nullptr), rear(nullptr)
{}

void Queue::EnQueue(int v)
{
    if (isEmpty())
    {
        rear = new Node(v);
        front = rear;
    }
    else
    {
        Node * temp = new Node(v);
        temp->prev = rear;
        rear->next = temp;
        rear = temp;
    }
}

Node * Queue::DeQueue()
{
    Node * temp = front;
    if (temp->next != nullptr)
    {
        front = temp->next;
        front->prev = nullptr;
    }

    return temp;
}

Node * Queue::getFront() const
{
    return front;
}

Node * Queue::getRear() const
{
    return rear;
}

void Queue::setRear(Node* n)
{
    rear = n;
}

int Queue::peek() const
{
    return getRear()->value;
}

bool Queue::isEmpty() const
{
    return front == nullptr && rear == nullptr;
}

void Queue::Debug() const
{
    if (!isEmpty())
    {
        Node * current = front;
        std::cout << "[ ";
        while (current->next != nullptr)
        {
            std::cout << current->value << ", ";
            current = current->next;
        }
        std::cout << current->value << " ]" << std::endl;
    }
}

