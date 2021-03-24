
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
    int arr1[arr[N-1]];
    for(int i=0;i<arr[N-1];i++)
    {
        arr1[i]=i;
    }
    for(int i=0;i<N;i++)
    {
        if(arr[i]!=arr1[i])
        {
            cout<<arr1[i];
            break;
        }
    }
    
    
    return 0;
}
