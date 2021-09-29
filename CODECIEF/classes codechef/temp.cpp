#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(int val, node * &head)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insertAtHead(int val, node * &head)
{
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertAtHead(3, head);
    insertAtTail(4, head);
    insertAtTail(5, head);
    insertAtTail(6, head);
    display(head);

    return 0;
}



















SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
        SinglyLinkedListNode* newnode = new SinglyLinkedListNode(data);
        if(head == NULL){
            head = newnode;
            return;
        }
        SinglyLinkedListNode* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next= newnode;


}