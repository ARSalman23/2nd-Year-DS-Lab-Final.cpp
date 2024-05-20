#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

struct Node
{
    int data;
    Node* next;
};
Node *root = nullptr;
void add_node(int data)
{
    if(root == nullptr)
    {
        root = new Node();
        root->data = data;
        root -> next = nullptr;
    }
    else
    {
        Node *current_node = root;
        while(current_node -> next != nullptr)
        {
            current_node = current_node -> next;
        }
        Node *new_node = new Node();
        new_node->data =  data;
        new_node->next = nullptr;

        current_node->next = new_node;
    }
}
void delete_node(int data)
{
    Node *current_node = root;
    Node *previous_node = nullptr;
    while(current_node -> data != data)
    {
        previous_node = current_node;
        current_node = current_node->next;
    }
    if(current_node == root)
    {
        Node *temp = root;
        root = root->next;
        delete(temp);
    }
    else
    {
        previous_node->next = current_node -> next;
        delete(current_node);
    }
}

int main()
{
    int node_data[5] = {1, 2, 4, 6, 8};
    for (int i = 0; i < 5; ++i)
    {
        add_node(node_data[i]);
    }
    delete_node(node_data[2]);
    cout << "Data of each nodes: " << endl;
    Node *current_node = root;
    while(current_node != nullptr)
    {
        cout << current_node->data << ' ';
        current_node = current_node->next;
    }
    return 0;
}
