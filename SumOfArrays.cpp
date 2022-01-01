#include<iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> reverse( vector<int> a)
{
    int s=0;
    int e=a.size()-1;
    while (s<e)
    {
        swap(a[s++], a[e--]);
    }
    return a;    
}

vector<int> SumOfArray( vector<int> &a, int n, vector<int> &b , int m)
{
    int i=n-1;
    int j=m-1;
    int carry=0;
    vector<int> ans;
    while( i>=0 && j>=0)
    {
        int val1=a[i];
        int val2=b[j];
        int sum= val1+val2+carry;   
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    //if 1st array is larger
    while(i>=0)
    {
        int sum= a[i]+carry;   
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;   
    }
    //if 2nd array is larger
    while(j>=0)
    {
        int sum= b[j]+carry;   
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;   
    }
    
    //if carry is at last
    while(carry!=0)
    {
        int sum=carry;
        ans.push_back(sum);
    }

    return reverse(ans);
}

int main()
{
    vector<int> a={2,1,3,4};
    vector<int> b={3,4,5,6};
    vector<int> ans= SumOfArray(a,4,b,4);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    return 0;
}