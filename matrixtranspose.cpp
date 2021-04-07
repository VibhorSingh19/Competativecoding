#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int N,i,j;
    cin>>N;
    int arr[N][N],arr1[N][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
          cin>>arr[i][j];
        }
    }
      for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i!=j)
            {
          arr1[i][j]=arr[j][i];
            }
            else
            arr1[i][j]=arr[i][j];
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
          cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }   
    return 0;
}
