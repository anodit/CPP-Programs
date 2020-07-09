#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a Natural No. : ";
    cin>>n;
    int i=0,count =0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count == 2)
        cout<<"No. "<<n<<" is a prime No. "<<endl;
    else
        cout<<"No. "<<n<<" is not a prime No. "<<endl;

    return 0;
}
