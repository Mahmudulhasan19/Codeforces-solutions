#include<bits/stdc++.h>
using namespace std;
int main()
{
 
   int t;
   cin>>t;
while(t--)
{   int n;
cin>>n;
    int flag=0;
    int flag2=0;
    int sum=0;
    int a[n];
for(int i=0;i<n;i++)
    {   cin>>a[i];
    sum=sum+a[i];
    }
for(int i=0;i<n-1;i++)
 
 
 
       if(a[i]==-1 &&  a[i+1]==-1)
           {
                flag=1;
                break;
            }
            else if(a[i]==-1)
                flag2=1;
        if(a[n-1]==-1)
            flag2=1;
        if(flag==1)
            sum+=4;
        else if(flag2==0)
            sum-=4;
        cout<<sum<<endl;
 
 
 
    }
}
 