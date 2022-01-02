#include<iostream>
#include <bits/stdc++.h>

using namespace std;

 void reverseString(vector<char>& s) 
 {
     int len=s.size();
     for ( int i = 0; i < len/2; i++)
     {
         swap(s[i], s[len-1-i]);
     }
     
 }
int main()
{
    vector<char> s={'h','e','l','l','o'};
    for (auto i: s)
    cout << i;

    cout<<endl;
    
    reverseString(s);
    for (auto i: s)
    cout << i;
    return 0;
}