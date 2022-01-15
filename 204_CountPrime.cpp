#include<iostream>
#include <bits/stdc++.h>

using namespace std;


int countPrimes(int n) 
{
    vector<bool> v(n+1, true);
    v[0]=v[1]=false;// since '1' and '0' are not prime so putting them false
    int count=0;
    for(int i=2 ;i<n;i++)
   {
       if(v[i])
       {
           count++;
           for(int j=2*i; j<n;j=j+i)
           v[j]=false;
       }

   }
    return count;

}
int main()
{
    cout<<countPrimes(40);
    return 0;
}