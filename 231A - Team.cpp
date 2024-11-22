#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,q,r,ct=0;
    cin>> t;
    while(t--)
    {
        cin>> p >> q>> r ;
        if(p+q+r>=2)
        {
            ct++;
        }
    }
    cout<< ct<<endl;
}