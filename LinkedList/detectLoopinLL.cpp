//Implementation of Floyd's Cycle-Finding Algorithm.
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

int detectLoop(Node *list)
{
    Node *slowptr,*fastptr;
    slowptr = list;
    fastptr = list;
    while(slowptr && fastptr && fastptr->next)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(slowptr == fastptr)
            return 1;
    }
    return 0;
}

//Main Function
int main()
{
    //Start with the empty list.
    Node *head = NULL;

    push(&head,20);
    push(&head,40);
    push(&head,80);
    push(&head,100);

    //Create Loop for the testing purpose
    head->next->next->next->next = head->next;

    if(detectLoop(head))
        cout<<"Loop Found "<<endl;
    else
        cout<<"Loop Not Found "<<endl;
    return 0;
}
