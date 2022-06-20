#include "include/Stack/Stack.hpp"

Stack::Stack(const Queue& q)
{
    if (!q.isEmpty())
    {
        Node * current = q.getRear();
        while (current->prev != nullptr)
        {
            stack.EnQueue(current->value);
            current = current->prev;
        }
        stack.EnQueue(current->value);
    }
}

void Stack::push(int v)
{
    stack.EnQueue(v);
}

int Stack::pop()
{
    return stack.DeQueue()->value;
}

int Stack::peek() const
{
    return stack.peek();
}

void Stack::Debug() const
{
    stack.Debug();
}
