#include<iostream>
using namespace std;

int jor(int n,int k)
{
    if(n==1)
        return 0;
    return (jor(n-1,k)+k-1)%n+1;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int winner = jor(n,k);
    cout<<winner;
    return 0;
}
