#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    
    while(T--)
    {
        
        unsigned long long n,m,x,i,j;
        cin>>n>>m>>x;
        unsigned long long arr[n][m];
        unsigned long long c=1;
        
        for(i=0;i<n;i++)
        {
            for( j=0;j<m;j++)
            {
             arr[i][j]=c++;
            }
        }
        if(n!=m)
        {
        unsigned long long arr1[n][m];
        c=1;
       for( i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
             arr1[j][i]=c++;
            }
            
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
             if(arr1[i][j]==x)
             {
             cout<<arr[i][j]<<endl;
             break;
             }
            }
            
        }
        }
        else{
            if(n*m==x)
            {
                cout<<x;
            }
            else{
          for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
             if(arr[i][j]==x)
             {
             cout<<arr[j][i]<<endl;
             break;
             }
            }
            
        }
        }
        }
    }
    return 0;
}

