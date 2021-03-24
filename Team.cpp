
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[3];
    int c=0,c1=0;
    for(int j=0;j<N;j++)
    {
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<3;i++)
    {
        if(arr[i]==1)
        c++;
    }
    if(c>=2)
    c1++;
    c=0;
    }
    cout<<c1<<endl;
    return 0;
}
