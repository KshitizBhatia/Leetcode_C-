#include<iostream>
#include <bits/stdc++.h>

using namespace std;
void printVector(vector<int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
/*
1 2 3 4 5
n=2
5 4 1 2 3
5 4 3 2 1 

*/
 void rotate(vector<int>& nums, int k) {
      vector<int> temp(nums.size());

      for(int i=0;i<nums.size();i++)
      {
          temp[(i+k)%nums.size()]=nums[i];
      }

      // array is rotated in temp vector , we need to copy temp to nums vector

      nums=temp;  
    }
int main()
{
    vector<int> a={1,2,3,4,5,6,7};
    rotate(a, 3);
    printVector(a);
    return 0;
}