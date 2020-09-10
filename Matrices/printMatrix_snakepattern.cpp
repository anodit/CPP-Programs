//program to print the give matrix in a snake Pattern
#include<iostream>
using namespace std;

int main()
{
    int t;
    cout<<"Enter the No. of Test Cases : ";
    cin>>t;
    while(t--)
    {
        int size;
        cout<<"\nEnter The Size of a matrix ";
        cin>>size;
        int r=size,c=size;
        int mat[r][c];
        cout<<"Enter the Elements of the matrix ";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>mat[i][j];
            }
        }
        cout<<"Original Matrix :"<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"Matrix in a Snake Patter :"<<endl;
        for(int i=0;i<r;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<c;j++)
                {
                    cout<<mat[i][j]<<" ";
                }
                //cout<<endl;
            }
            else
            {
                for(int j=c-1;j>=0;j--)
                {
                    cout<<mat[i][j]<<" ";
                }
                //cout<<endl;
            }
        }
    }

    return 0;
}
