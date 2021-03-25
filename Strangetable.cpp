#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int arr[n][m];
        int c=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
             arr[i][j]=c++;
            }
        }
        int arr1[n][m];
        c=1;
       for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
             arr1[j][i]=c++;
            }
            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
             arr1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

