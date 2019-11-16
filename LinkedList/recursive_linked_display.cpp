#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}*first=NULL;

void create(int A[], int n)
{
    struct node *t,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void Display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void Recursive_Display(struct node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        Recursive_Display(p->next);
    }
}

int main()
{
    int A[]={2,4,6,8,10};
    int n=sizeof(A)/sizeof(A[0]);
    create(A,n);
    Display(first);
    Recursive_Display(first);
    return 0;
}
