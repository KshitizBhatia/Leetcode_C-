#include<iostream>
#include <bits/stdc++.h>

using namespace std;
/*
Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
*/

bool compare( int a[], int b[])
{
    for(int i=0;i<26;i++)
    {
        if(a[i] != b[i])
        return false;
    }
    return true;
}
bool checkInclusion(string s1, string s2) 
{
    //make an index aray for s1 chars
    int countS1[26]={0};
    for(int i=0;i<s1.length();i++)
    {
        int index=s1[i]-'a';
        countS1[index]++;
    }

    //make a window  in s2 of size s1
    int countS2[26]={0};
    int i=0;
    int windowSize=s1.length();
     for(;i<windowSize && i<s2.length();i++)
     {
         int index=s2[i]-'a';
         countS2[index]++;
     }
     if(compare(countS1, countS2))
     return true;

    /*compare rest of string s2
             |      |
     eg : s2=|e    i|   d   b   a   o   o   o
             |      |
       s1= a b   
       after processing e and i it moves to "d" and removes "e"
                |      |
     eg : s2=e  |i    d|   b   a   o   o   o
                |      |
     */
     while(i<s2.length())
     {
         char newChar=s2[i];
         int index=newChar-'a';
         countS2[index]++;

         char oldChar=s2[i-windowSize];
         index=oldChar-'a'; 
         countS2[index]--;
         i++;

     if(compare(countS1, countS2))
     return true;
     }
     return false;
}
int main()
{
    string s1="ab", s2 = "eidbaooo";
    cout<< checkInclusion(s1, s2);
  
}