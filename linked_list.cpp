#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printLinkedList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
int getCount(Node *n)
{
    int c = 0;
    while (n != NULL)
    {
        c = c + 1;
        n = n->next;
    }
    return c;
}
void insertAtFirst(int elem, Node **head_ref)
{
    // first pos
    Node *new_e = new Node();
    new_e->data = elem;
    new_e->next = *head_ref; // *head_ref is pointing to address of head
    *head_ref = new_e;
};

void insertEnd(Node *n, int elem)
{
    Node *new_node = new Node();
    new_node->data = elem;
    new_node->next = NULL;
    n->next = new_node;
}

void deleteNode(Node *n, Node *head)
{
    Node *traverse;
    int c = 0;
    int num = n->data;
    traverse = head;

    while (head != NULL)
    {
        traverse = traverse->next;

        if (traverse->data == num)
        {
            head->next = traverse->next;
        }
        head = head->next;
    }
}

void insertAfter(Node *n, int elem)
{
    Node *new_node = new Node();

    new_node->data = elem;

    new_node->next = n->next;

    n->next = new_node;
}

void deleteAt(Node *n, int pos)
{
    while (pos)
    {
        // if(n->data = pos-1){

        // }
        cout << "while...... " << endl;
        n = n->next;
    }
    cout << n->data << endl;
 
           
}
// a = 10;
// ptr = &a;
// **head_ref = &ptr;

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = NULL;

    // while (head)
    // {
    // }

    // printLinkedList(head);
    // cout << endl;

    // insertAtFirst(100, &head);
    // cout << endl;
    // printLinkedList(head);

    // insertAfter(head, 4657, 4);
    // insertAfter(third, 457);
    // insertEnd(fourth, 90);
    // printLinkedList(head);
    // cout << endl;
    // deleteNode(third, head);

    printLinkedList(head);
    cout << endl;
    deleteAt(head, 3);
    return 0;
}
