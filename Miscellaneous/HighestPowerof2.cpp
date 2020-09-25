#include<iostream>
using namespace std;

int main()
{
    int n,ans;
    cout<<"Enter the No. n : ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        if((i&(i-1))==0)
        {
            ans=i;
            break;
        }
    }
    cout<<"Ans :"<<ans<<endl;
    return 0;

}
