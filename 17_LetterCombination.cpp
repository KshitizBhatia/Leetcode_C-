#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/*
eg 23, 2(a,b,c), 3(d,e,f)
                                        2   3
                                      /   |   \
                                 'a'/  'b'|     \ "c"
                                  /       |       \
                           23+'a'      23+'b'    23+'c'
                            i           i         i
                        d /  e| \f 
                        /    |  \
                      23+"ad"| 23+"af" 
                            23+"ae"    


when the recursive call completes for first character of 2 ie "a"
we need to pop back the element
*/

void sol(string digit, string output, int index, vector<string>& ans, string mapping[])
{
    //base condition
    if( index >= digit.size())
    {
        ans.push_back(output);
        return;
    }

    int number=digit[index] -'0'; // convert string to int
    string value= mapping[number]; // this will fetch the value liek for 2  this is abc

    for(int i=0;i<value.length();i++)
    {
        output.push_back(value[i]);
        sol(digit, output, index+1, ans, mapping); // solving recursivly for 'a' and "def"
        output.pop_back();// to remove 'a', then start with b...then so on
    }

}

vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    if(digits.length() == 0)
    return ans;
    string output="";
    int index=0;
    string mapping[10]={"","","abc","def","ghi","jkl","mno", "pqrs","tuv","wxyz"};
    sol( digits, output, index, ans, mapping);
    return ans;
}

int main()
{
    string s="23";
    vector<string> ans=letterCombinations(s);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }


    return 0;
}