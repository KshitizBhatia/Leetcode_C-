#include<iostream>
#include <bits/stdc++.h>

using namespace std;

//abbaca
 string removeDuplicates(string s)
 {
     for( int i =0;i<s.length();i++)
     {
         if(s[i] == s[i+1])
         {
             s.erase(i, 2);
             i=i-2; 
             /* we will go back to check other duplicates like acter removing "b",
                we are left wth aaca so we need to remove a.
              */
             if(i<0)//if i was already at the starting index
             i=-1;
         }
     }
     return s;
 }

int main()
{
    string s="abbaca";
    cout<< removeDuplicates(s);
  
}