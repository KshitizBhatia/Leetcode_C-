#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int compress(vector<char>& chars)
{
    int n=chars.size();
    int ansIndex=0;

    int i=0;
    while(i<n)
    {
        int j=i+1;//default value is 1 
        //traverse till you find the common and increment j
        while( j<n && chars[i]==chars[j])
        {
            j++;
        }

        chars[ansIndex]=chars[i];
        ansIndex++;

        //calculate count of same variables
        int count = j-i;

        if(count>1)
        {
            string cnt=to_string(count);
            //since the ans is in vector we cannot simply concatenate the string with count
            for(char ch: cnt)
            chars[ansIndex++]=ch;
        }
        /*after adding resut reset i and j 
        a a b b c c c

                i,j    
        a   2    b   b   c   c   c
         */
        i=j;
       
    }
    return ansIndex;

}

int main()
{
    //vector<char> s={'a','a','b','b','c','c','c'};
    vector<char> s = { 'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout<< compress(s);
  
}