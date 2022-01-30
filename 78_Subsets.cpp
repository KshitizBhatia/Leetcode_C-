#include<iostream>
#include <bits/stdc++.h>

using namespace std;

  void sol(vector<int> nums, vector<int> out, int index, vector<vector<int>>& answer)
    {
        //base condition
        if( index >= nums.size())
        {
            answer.push_back(out);
            return;
        }
        
        //exclude
        sol(nums, out, index+1, answer);
        
        //include
        int element=nums[index];
        out.push_back(element);
        sol(nums, out, index+1, answer);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> out;
        int index=0;
        sol(nums, out, index, answer);
        return answer;
        
    }
int main()
{
    vector<int> v={1,2,3};
    vector<vector<int>> ans=subsets(v);


    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }   
        cout << endl;
    }
    return 0;
}