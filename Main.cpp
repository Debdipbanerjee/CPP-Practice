
#include <iostream>
#include <vector>

class Queue
{

private:
	int front, rear;
	int first = 0;

public:

	// Member variables
	static const int size = 5;
	int array[size] = {0}; // initialize with zero
	

	// Constructors
	Queue() : front(-1), rear(-1)
	{
		std::cout << "Queue of Size " << size << " created" << std::endl;
	}

	// Default Operations
	void PrintQueue();
	void Push(int value);
	void Pop();
	bool isEmpty();
	bool isFull();

	// Extra operations
	bool isSpaceinFront();
	void Reorganise();

};

void Queue::Push(int Value)
{
	// if it's full and NO space in front .
	if (isFull() && !isSpaceinFront())
	{
		std::cout << "Queue is Full, Please Pop some elements" << std::endl;
		return;
	}

	// if Queue is full and there's space in front
	if (isFull() && isSpaceinFront())
	{
		Reorganise();

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

	std::cout << std::endl;
}

bool Queue::isSpaceinFront()
{
	if (front - first >= 0)
	{
		return true;
	}

	return false;
}

void Queue::Reorganise()
{
	int numOfElements = rear - front;

	std::vector<int> temp;

	for (int i = front + 1; i <= rear; ++i)
	{
		temp.push_back(array[i]);
	}

	for (int i = first; i < numOfElements; ++i)
	{
		array[i] = temp[i];
	}

	front = -1;
	rear = numOfElements - 1;
}

int main()
{
	Queue Q;

	Q.Push(5);
	Q.Push(7);
	Q.Push(9);
	Q.Push(10);
	Q.Push(2);
	Q.Push(4);
	Q.PrintQueue();

	Q.Pop();

	Q.Push(4);

	Q.PrintQueue();

	return 0;
}