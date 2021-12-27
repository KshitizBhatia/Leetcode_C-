#include<iostream>
#include <bits/stdc++.h>

using namespace std;

/*
we have 3 cases :-
1. the arr is sorted eg a[]=1 2 3 4 5.... a[i-1]<  a[i]
2. arr is rotated , eg a =3 4 5 1 2....only 1 pair where a[i-1] > a[i]  ,a[2] > a[3] ie rotated
3. neither sorted nor rotated : a[]= 3 5 7 1 6 this has 2 pair , a[2]>a[3] and a[4]>a[0] so fale
*/
bool check(vector<int>& nums) {
     int n=nums.size();
     int count=0;
     for(int i=1;i<n;i++)
     {
         if(nums[i-1] > nums[i])
         count++;
     }   
     if(nums[n-1]> nums[0])
     count++;

     return count<=1;
    }
int main()
{
    vector<int> a={2,1,3,4};
    cout<<check(a);
    return 0;
}