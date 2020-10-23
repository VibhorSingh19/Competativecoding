#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    
    while(T--)
    {
        int n1=0;
        int N;
        cin>>N;
        while(N!=0)
        {
            int d=N%10;
            n1=n1*10+d;
            N=N/10;
        }
        cout<<n1<<endl;
    }
    return 0;
}

