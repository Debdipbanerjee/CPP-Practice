
#include <iostream>

class Node
{
public:

	int data;
	Node* next;

	Node() : data(0), next(nullptr)	
	{

	}

	Node(int m_data)
	{
		data = m_data;
		next = nullptr;
	}
};

class Linkedlist
{
public:
	Node* head;

	Linkedlist()
	{
		head = nullptr;
	}

	void InsertNode(int m_data = 0); //Insert at the end
	void InsertNode(int m_data, int pos); //Insert at position

	void PrintLinkedlist();

};

void Linkedlist::InsertNode(int m_data)
{
	Node* newNode = new Node(m_data);

	// if head is free
	if (head == nullptr)
	{
		head= newNode;
		//return;
	}
	else
	{
		// if head isn't, traverse to last node,
		Node* n = head;

		while (n->next != nullptr)
		{
			n = n->next;
		}

		n->next = newNode;	
	}
}

void Linkedlist::InsertNode(int m_data, int pos)
{
	Node* newNode = new Node(m_data);

	// if first position
	if (pos == 0)
	{
		newNode->next = head;
		head = newNode;
	}

	//if other position
	else if (pos > 0)
	{
		Node* n = head;

		for (int i = 0; i < pos - 1; ++i)
		{
			n = n->next;
		}

		newNode->next = n->next;
		n->next = newNode;
	}
}

void Linkedlist::PrintLinkedlist()
{
	Node* n = head;

	while (n != nullptr)
	{
		std::cout << n->data << "-> ";
		n = n->next;
	}
	std::cout << "nullptr" << std::endl;
}


int main()
{
	Linkedlist* LL = new Linkedlist();
	LL->InsertNode(2);
	LL->InsertNode(4);
	LL->InsertNode(8);
	LL->InsertNode(1,0);
	LL->InsertNode(3,2);



	LL->PrintLinkedlist();

	return 0;
}