#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n,m,target;
    cin>>n>>m>>target;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int f=1,a=0,b=m-1,c=0,p;
    while(f==1)
    {
        p=arr[a][b];
         if(target==p)
         {
         c=1;
         break;
         }
         else if(target<p)
         {
          b--;   
         }
         else if(target>p)
         {
          a++;   
         }
         if(a>=m||a<0||b>=n||b<0)
         {
             break;
         }
    }
    if(c==1)
    {
        cout<<"true";
    }
    else
    cout<<"false";

    return 0;
}
