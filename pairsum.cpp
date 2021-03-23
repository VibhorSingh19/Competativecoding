
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int N;
    cout<<"Enter the size...";
    cin>>N;
    int arr[N];
    cout<<"Enter the array elements...";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr + N);
    int x=0,y=N-1,f=1,sum,i1=0,i2=0;
    cout<<"Enter the sum..";
    cin>>sum;
    for(int i=0;i<N;i++)
    {
     if(arr[x]+arr[y]<sum)
     x++;
     else if(arr[x]+arr[y]>sum)
     y--;
     else if(arr[x]+arr[y]==sum)
     {
     i1=x;
     i2=y;
     f=0;
     break;
     }
    }
    if(f==1)
    cout<<"NO";
    else
    {
    cout<<"YES"<<endl<<arr[i1]<<"+"<<arr[i2];    
    }
    
    return 0;
}
