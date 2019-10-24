#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the No. of Stairs : ";
    cin>>n;
    int *s = new int[n+1];
    s[1]=1;
    s[2]=2;
    for(int i=3;i<n+1;i++)
    {
        s[i]=s[i-1]+s[i-2];
    }
    cout<<s[n]<<endl;
    return 0;
}
