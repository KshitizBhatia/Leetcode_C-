#include<iostream>
#include <bits/stdc++.h>

using namespace std;
// a bcde
void StrRev( string s)
{
    if( s.length() == 0)
    return;

    StrRev(s.substr(1)); 
    cout<<s[0];
}
int main()
{
    string s="abcde";
    StrRev(s);
    return 0;
}