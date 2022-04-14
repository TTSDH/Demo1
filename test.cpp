#include<iostream>
using namespace std;

struct  Node
{
    int data;
    Node* next;
};

void insertEnd(Node* *head, int x)
{
    Node* node = new Node();
    Node *last = *head;
    node->data = x;
    node->next = NULL;
    if(*head == NULL) {
        *head = node;
    }

    while (last->next != NULL) // 
    {
        last = last->next;
    }
    last->next = node;
}
int main()
{
    Node* node = new Node();
    node->data = 0;
    node->next = NULL;
    insertEnd(&node,1);
    while(node != NULL){
        cout << node->data << " ";
        node = node->next;
    }
    return 0;
}
