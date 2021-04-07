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
        int y=x%n;
        if(y!=0)
        {
        y++;
        int x1=1+(y-1)*x;
        int y1=x-x1;
        y1++;
        int output=(y+1)+(y1-1)*m;
        cout<<output;
        }
        else{
        int x1=1+(y-1)*x;
        int y1=x-x1;
        int output=(y+1)+(y1-1)*m;
        cout<<output;
            
        }
    }
    return 0;
}

