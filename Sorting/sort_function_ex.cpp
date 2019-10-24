#include<iostream>
#include<algorithm>

using namespace std;

void show(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int a[10]={1,2,44,55,8,14,52,45,15,89};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Array before Sorting : ";
    show(a,n);
    sort(a,a+10);
    cout<<"\nArray after sorting : ";
    show(a,n);

    return 0;
}
