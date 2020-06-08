#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the No : ";
    cin>>n;
    if(n==0)
        cout<<"False"<<endl;
    float start , end;
    start = end = log2(n);
    //cout<<start<<" "<<end<<endl;
    start = ceil(start);
    end = floor(end);
    //cout<<start<<" "<<end<<endl;
    if(start==end)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    return 0;
}
