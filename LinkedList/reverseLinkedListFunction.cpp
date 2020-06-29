#include<iostream>
using namespace std;

void reverseList(struct node **head_add)
{
    struct node *currptr, nextptr, prevptr;
    prevptr = NULL;
    currptr = *head_add;


    while(currptr)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    *head_add = prevptr;
}
int main()
{
    //create a linked list
    reverseList(&head);
    return 0;
}
