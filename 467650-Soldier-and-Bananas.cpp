#include<iostream>
using namespace std;
int main()
{
    int k,n,w,b;
    cin>>k>>n>>w;
    b=k*((w*w+w)/2)-n;
    if(b>0)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
