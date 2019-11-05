#include<bits/stdc++.h>
using namespace std;

void permute(string s,int l,int h)
{
    if(l==h)
    {
        cout<<s<<endl;
    }
    else
    {
        for(int i=l;i<=h;i++)
        {
            swap(s[l],s[i]);
            permute(s,l+1,h);
            swap(s[l],s[i]);
        }
    }
}

int main()
{
    string s = "ABC";
    int l = 0;
    int h = s.size();
    permute(s,l,h-1);
    return 0;
}


// OUTPUT
/*
    ABC
    ACB
    BAC
    BCA
    CBA
    CAB
*/
