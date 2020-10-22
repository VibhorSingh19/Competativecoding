
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
     int arr[T];
     for(int i=0;i<T;i++)
     {
         cin>>arr[i];
     }
     for(int i=0;i<T;i++)
     {
         int x=arr[i];
         while(x!=0)
         {
             int d=x%10;
             if(d!=0)
             cout<<d;
             x=x/10;
         }
         cout<<endl;
     }
    
    
    return 0;
}
