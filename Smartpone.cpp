#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    long N;
    cin>>N;
    long arr[N];
    for(int i=0;i<N;i++)
    {
     cin>>arr[i];   
    }
    long n = sizeof(arr)/sizeof(arr[0]); 
    sort(arr, arr+n);
    long x,y=1,max=0;
    for(int i=0;i<N;i++)
    {
        x=N-i;
        y=arr[i]*x;
        
        max=y;
    }
    cout<<max;
    cout<<endl;
       
    return 0;
}
