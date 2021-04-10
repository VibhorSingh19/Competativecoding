#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    char arr[N];
    cin>>arr;
    bool f=true;
    for(int i=0;i<N;i++)
    {
        if(arr[i]!=arr[(N-1)-i])
        f=false;
    }
    if(f)
    {
        cout<<"Palindrome..."<<endl;

    }
    else
    cout<<"Not palindrome.."<<endl;
    return 0;
}