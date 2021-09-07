#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long r;
        cin>>r;
        
        r=(sqrt(1+8*r)-1)/2;
        
        cout<<r<<endl;
    }
    return 0;
}
