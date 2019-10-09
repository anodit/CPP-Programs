#include<iostream>
using namespace std;

double e(int x, int n)
{
    double num=1,den=1,s=1;
    int i;
    for(i=1;i<=n;i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;
}

int main()
{
    printf("%f",e(1,10));
    return 0;
}


// output -> 2.718282