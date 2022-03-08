
#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;   

    Node()
    {
        this->value = 0;
        this->next = nullptr;
    }

};

class  LinkedList
{
public:
    Node* head = nullptr;

    void InsertNode();
    void PrintList(Node* n);
    void AddNode();
   


};


void LinkedList:: InsertNode()
{
    Node* newNode = new Node();
    cout << "Enter value: ";
    cin >> newNode->value;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

   

}

void LinkedList::PrintList(Node* n)
{
    while (n!= nullptr)
    {
        cout << n->value << endl;
        n = n->next;
    }
}



int main()
{
    char c = getchar();
    LinkedList L;

    do
    {
        int option;
        cout << "Prss 1 for insert a node" << endl;
        cout << "Prss 2 for print the list" << endl;
        cin >> option;



        switch (option)
        {
        case 1:
            L.InsertNode();
            break;
        case 2:
            L.PrintList(L.head);
            break;
        default:
            break;
        }

    } while (c != 'E');
   
  
   
}

