#include<iostream>
using namespace std;
int stairs(int n);

int main()
{
    int x;
    cout<<"Enter the no. of Stairs : ";
    cin>>x;
    cout<<stairs(x);
    return 0;
}

int stairs(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    return stairs(n-1) + stairs(n-2);
}
