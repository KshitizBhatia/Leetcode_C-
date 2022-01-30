#include<iostream>
#include <bits/stdc++.h>
/*
input ->abc\

output->
" "
 a
 b
 c,
 ab
 bc
 ac
 abc

 if we do not want " " we can do 
   //base condition
        if( index >= s.length())
        {
            if(s.length()>1)
            answer.push_back(out);
            return;
        }
*/
using namespace std;

  void sol(string s , string out, int index, vector<string>& answer)
    {
        //base condition
        if( index >= s.length())
        {
            answer.push_back(out);
            return;
        }
        
        //exclude
        sol(s, out, index+1, answer);
        
        //include
        char element=s[index];
        out.push_back(element);
        sol(s, out, index+1, answer);
    }
    vector<string> subsequenceString(string& s) {
        vector<string> answer;
        string out="";
        int index=0;
        sol(s, out, index, answer);
        return answer;
        
    }
int main()
{
    string str="abc";


    vector<string> ans=subsequenceString(str);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
}