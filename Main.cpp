
#include <iostream>

class CircularQueue
{
private:
	int front, rear;

	static const int size = 6;
	int array[size] = {0};

public:
	
	//Constructors

	CircularQueue() : front(0), rear(0)
	{

	}

	//Basic Operations
	void Push(int value);
	void Pop();
	bool isEmpty();
	bool isFull();
	void PrintQueue();

};

void CircularQueue::Push(int value)
{
	if (isFull())
	{
		Pop();
		//return;
	}

	array[rear] = value;
	rear = (rear + 1) % size;
}

void CircularQueue::Pop()
{
	if (isEmpty())
	{
		return;
	}

	front = (front + 1) % size;
}

bool CircularQueue::isEmpty()
{
	if (front == rear)
	{
		std::cout << "Queue is Empty" << std::endl;
		return true;
	}

	return false;
}

bool CircularQueue::isFull()
{
	if (front == (rear + 1) % size)
	{
		std::cout << "Queue is Full" << std::endl;
		return true;
	}

	return false;
}

void CircularQueue::PrintQueue()
{
	/*for (int i = 0; i < size; ++i)
	{
		std::cout << array[i] << " ";
	}*/

	if (isEmpty())
	{
		return;
	}


	int i = front;
	while (i != rear)
	{
		std::cout << array[i] << " ";

		i = (i + 1) % size;
	}
	std::cout << std::endl;
}

int main()
{
	CircularQueue CQ;

	CQ.Push(5);
	CQ.Push(6);
	CQ.Push(7);
	CQ.Push(8);
	CQ.Push(9);
	CQ.Push(10);
	CQ.Push(11);
	CQ.Push(12);
	CQ.Push(13);



	CQ.PrintQueue();

	return 0;
}