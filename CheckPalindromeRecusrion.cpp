#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool checkpalindrome(string str, int i, int j)
{
    //base case
    if(i>j)
    return true;

    if(str[i] != str[j])
    {
        return false;
    }
    else{
        return checkpalindrome(str, i+1, j-1);
    }

}
int main()
{
    string str="naman";
    cout<<checkpalindrome(str, 0, str.length()-1);

    return 0;
}