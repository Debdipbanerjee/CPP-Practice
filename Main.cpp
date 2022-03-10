
#include <iostream>


class Node
{
public:

    int value;
    Node* left;
    Node* right;

    Node(int value)
    {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

void Inorder(Node* node)
{
    if (node == nullptr)
    {
        return;
    }

    Inorder(node->left);
    std::cout << node->value;
    Inorder(node->right);
}

void Preorder(Node* node)
{
    if (node == nullptr)
    {
        return;
    }

    std::cout << node->value;
    Preorder(node->left);
    Preorder(node->right);
}

void Postorder(Node* node)
{
    if (node == nullptr)
    {
        return;
    }

    Postorder(node->left);
    Postorder(node->right);
    std::cout << node->value;
}



int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);

    Inorder(root);
    std::cout << std::endl;
    Preorder(root);
    std::cout << std::endl;
    Postorder(root);
}

