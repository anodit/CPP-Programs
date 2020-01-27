#include<iostream>
using namespace std;

int main()
{
    int r,c,i,j;
    cout<<"Enter size of a matrix i.e Row * Column :=> ";
    cin>>r>>c;
    int mat[r][c];
    cout<<"Enter the elements of a matrix : ";
    for(i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"Boundary values of a Matrix ";
    for(j=0;j<c-1;j++)
        cout<<mat[0][j]<<" ";
    for(i=0;i<r-1;i++)
        cout<<mat[i][c-1]<<" ";
    for(j=c-1;j>0;j--)
        cout<<mat[r-1][j]<<" ";
    for(i=r-1;i>0;i--)
        cout<<mat[i][0]<<" ";
    return 0;
}
