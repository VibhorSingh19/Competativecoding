#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
   cin>>arr[i];
    } 
   int sum=0,max=-99999;
    for(int i=0;i<N;i++)
    {
     
     sum+=arr[i];
     if(sum<0)
     {
         sum=0;
     }
     else if(sum>max)
     max=sum;

    }
    cout<<max;
    return 0;
}

