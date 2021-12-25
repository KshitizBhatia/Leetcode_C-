#include<iostream>
#include <bits/stdc++.h>

using namespace std;
void printVector(vector<int>);
void reverse_vector(vector<int> v, int n)
{
    int start=n+1;
    int end=v.size()-1;
   while(start<=end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
     printVector(v);
}

void printVector(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v= {1,2,3,4,5,6};
    int n=3;
    reverse_vector(v,n);
   
    return 0;
}
