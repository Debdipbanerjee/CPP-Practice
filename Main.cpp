
#include <iostream>


class Queue
{

private:
	int front, rear;

public:

	// Member variables
	static const int size = 5;
	int array[size] = {0}; // initialize with zero
	

	// Constructors
	Queue() : front(-1), rear(-1)
	{
		std::cout << "Queue of Size " << size << " created" << std::endl;
	}

	// Operations
	void PrintQueue();
	void Push(int value);
	void Pop();
	bool isEmpty();
	bool isFull();

};

void Queue::Push(int Value)
{
	if (isFull())
	{
		return;
	}

	rear++;
	array[rear] = Value;
}

void Queue::Pop()
{
	if (isEmpty())
	{
		return;
	}

	front++;
}

bool Queue::isEmpty()
{
	if (front == rear)
	{
		std::cout << "Queue is Empty" << std::endl;
		return true;
	}

	return false;
}

bool Queue::isFull()
{
	if (rear == size - 1)
	{
		std::cout << "Queue is Full" << std::endl;
		return true;
	}

	return false;
}

void Queue::PrintQueue()
{
	if (isEmpty())
	{
		return;
	}

	for (int i = front + 1; i <= rear; ++i)
	{
		std::cout << array[i] << " ";
	}

}

int main()
{
	Queue Q;

	Q.Push(5);
	Q.Push(7);
	Q.Push(9);
	Q.Push(10);
	Q.Push(2);
	

	Q.Pop();
	Q.Pop();
	Q.Pop();


	Q.Push(4);

	Q.PrintQueue();

	return 0;
}