
#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;   
};

 
void Printlist(Node* n)
{
    while (n != NULL)
    {
        cout << n->value << "->";
        n = n->next;
    }
}

int main()
{

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    

    head->value = 1;
    second->value = 2;
    third->value = 3;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    Printlist(head);
}

