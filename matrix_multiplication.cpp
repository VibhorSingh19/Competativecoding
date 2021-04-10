#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int A[a][b],B[b][c],C[a][c];
    cout<<"Enter elements of A..."<<endl;
    for(int i=0;i<a;i++)
    {
     for(int j=0;j<b;j++)
    {
     cin>>A[i][j];
    }
    }
    cout<<"Enter elements of B..."<<endl;
    for(int i=0;i<b;i++)
    {
     for(int j=0;j<c;j++)
    {
     cin>>B[i][j];
    }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<c;j++)
    {
    
        C[i][j]=0;
    }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<c;j++)
        {
            for(int k=0;k<b;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<a;i++)
 {
    for(int j=0;j<c;j++)
            {
             cout<< C[i][j]<<" ";
            }
            cout<<endl;
}
    return 0;
}