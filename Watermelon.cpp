
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    long W;
    cin>>W;
    int x=0,y=0,f=0;
    if(W%2==0)
    {
        for(int i=2;i<W;i++)
        {
         x=i;
         y=W-x;
         if(y%2==0)
         {
         f=1;
         }
        }
        if(f==1)
        {
         cout<<"YES"<<endl;
            
        }
        else
        cout<<"NO"<<endl;
    
    }
    else
    cout<<"NO"<<endl;
    
    
    
    
    return 0;
}
