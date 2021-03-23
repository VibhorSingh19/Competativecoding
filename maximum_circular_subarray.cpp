#include <iostream>
#include<climits>
//Kadane's Algorithm...................
using namespace std;
int kadence(int N,int arr[])
{
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
    }
    
    return max;
   
}
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
   cin>>arr[i];
    }
    int case1=kadence(N,arr);
    int sum=0; 
    for(int i=0;i<N;i++)
    {
       sum+=arr[i];
        arr[i]=-arr[i];
    }
    int case2=sum+kadence(N,arr); 
    cout<<max(case1,case2);
    return 0;
}

