#include<iostream>
#include <bits/stdc++.h>

using namespace std;

 void reverseString(string & s, int begin, int end) 
 {
    while(begin < end) {
        swap(s[begin++], s[end--]);
    }
     
 }

void ReverseWords( string &s)
{ 
    if(s.size()<= 1)
    {
        return;
    }
    int begin=0;
    for(int i =0;i<=s.size();i++)
    {
        if( isblank(s[i]) || s[i] == '\0' )
        {
            reverseString(s, begin, i-1 );
             begin=i+1;
        }
       
    }
    reverseString(s, 0, s.size()-1);
}

 int main()
 {
    string s = "the sky is blue";
    // blue is sky the
    cout<<s<<endl;
    ReverseWords(s);
    cout<<s<<endl;
     return 0;
 }