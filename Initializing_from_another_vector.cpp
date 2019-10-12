#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1{10, 20, 30, 40, 50};
    vector<int> v2(v1.begin(), v1.end());
    for(int x : v2)
        cout<<x<<" ";
    return 0;
}


// Output -> 10 20 30 40 50
