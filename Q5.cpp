
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    
    while(T--)
    {
        string str,str1,str2;
        cin>>str;
        int l=str.length();
        
        if(l%2==0)
        {
         str1=str.substr(0,l/2);
         sort(str1.begin(), str1.end()); 
         str2=str.substr(l/2,l);
         sort(str2.begin(), str2.end()); 
         if(str1.compare(str2)==0)
         {
             cout<<"YES"<<endl;
         }
         else
         cout<<"NO"<<endl;
        }
        else
        {
            str1=str.substr(0,l/2);
         sort(str1.begin(), str1.end()); 
         
         
        }
        
    }
    return 0;
}
