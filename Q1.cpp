
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,i,j,f=1;
        cin>>n;
        for(i=0;i<=150;i++)
        {
            for(j=0;j<=200;j++)
            {
                int x=((7*i)+(5*j))%3;
                int y=((7*i)+(5*j))/3;
                
                if(x==0)
                {
                cout<<y<<" "<<j<<" "<<i;
                f=0;
                break;
                }
                if(f==0)
                break;
            }
        }
        if(f==1)
        cout<<-1;
    }
    return 0;
}
