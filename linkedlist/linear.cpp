#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int a)
    {
        int val = a;
        next = NULL;
    }
};

void insertNode(node*& head, int num)
{
    node* newNode = new node(num);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

node* getNode(node* head, int val)
{
    while (head->val != val)
    {
        head = head->next;
    }

    return head;
    
}

void deleteNode(node* t)
{
    t->val = t->next->val;
    t->next = t->next->next;
    return;
}

void printList(node* head) {
    while(head->next != NULL) {
        cout<<head->val<<"->";
        head = head->next;
    }
    cout<<head->val<<"\n";
}

int main()
{
     node* head = NULL;
    //inserting node
    insertNode(head,1);
    insertNode(head,4);
    insertNode(head,2);
    insertNode(head,3);
    //printing given list
    cout<<"Given Linked List:\n";
    printList(head);
    node* t = getNode(head,2);
    //delete node
    deleteNode(t);
    //list after deletion operation
    cout<<"Linked List after deletion:\n";
    printList(head);
    return 0;
}