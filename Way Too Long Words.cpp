
#include <iostream>
#include <bits/stdc++.h> 
#include <string>
using namespace std;

int main()
{
    int l;
    cin>>l;
    while(l--)
    {
        string word="",newword="";
        cin>>word;
        //getline(cin, word);
        int l=word.length();
        if(l>10)
        {
        newword=newword+word.at(0)+to_string(l-2)+word.at(l-1);
        cout<<newword<<endl;
        }
        else
        cout<<word<<endl;
    }
    return 0;
}
