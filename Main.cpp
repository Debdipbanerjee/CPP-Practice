#include <iostream>

#define size 5

class Stack
{

private:
    int top;

public:

    // Member Variables
    int array[size];


    // Constructors
    Stack()
    {
        top = -1;
        std::cout << "Stack of size " << size << " created\n";
    }

    //Operations
    bool isEmpty();
    bool isFull();
    void Push(int value);
    void Pop();
    int Peek(int pos);
    int GetTop() const;

    void PrintStack();

};

bool Stack::isEmpty()
{
    if (top <= -1)
    {
        std::cout << "Stack is empty" << std::endl;
        return true;
    }

    return false;
}

bool Stack::isFull()
{
    if (top == size - 1)
    {
        //std::cout << top <<std::endl;
        std::cout << "Stack is Full" << std::endl;
        return true;
    }

    return false;
}

void Stack::Push(int value)
{
    if (isFull())
    {
        std::cout << "Can't load " << value << std::endl;
        return;
    }

    top++;
    if (top >= 0)
    {
        array[top] = value;
    }
}

void Stack::Pop()
{
    if (isEmpty())
    {
        std::cout << "Empty stack, Can't delete " << std::endl;
        return;
    }

    top--;
}

int Stack::Peek(int pos)
{
    if (pos <= 0 || (pos - 1 > top))
    {
        std::cout << "Position out of bounds, Give correct position" << std::endl;
        return 0;
    }

    int x = top - pos + 1;
    std::cout << "the element at Position " << pos << " is " << array[x] << std::endl;

    return array[x];
}

int Stack::GetTop() const
{
    int c = top;
    std::cout << "Top is at Pos: " << ++c  << std::endl;
    return top;
}

void Stack::PrintStack()
{
    for (int i = top; i >= 0; --i)
    {
        std::cout << array[i] << " " << std::endl;
    }
}

int main()
{
    Stack St;
    St.Push(2);
    St.Push(3);
    St.Push(4);
    //St.Pop();

    St.Peek(1);

    St.GetTop();
    St.PrintStack();


    return 0;
}
