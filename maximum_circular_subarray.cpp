#include <iostream>
#include<climits>
//Kadane's Algorithm...................
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
   int sum=0,max=INT_MIN,x=0;
    for(int i=0;i<N;i++)
    {
     sum+=arr[i];
     if(sum<0)
     {
         sum=0;
     }
     else if(sum>max)
     max=sum;
     if(sum>0&&i==N)
     i=0;
     
    }
    cout<<max;
    return 0;
}

