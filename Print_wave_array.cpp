#include<iostream>
#include <bits/stdc++.h>

using namespace std;

/*
1   2   3   4
5   6   7   8
9   10  11  12


print 1 5 9 10 6 2 3 7 11 12 8 4

*/

void WavePrint( vector<vector<int>>  arr, int nRows, int mCols)
{
    // in odd columns( 1,3,5,7) we go bottom to up and in even(0,2,4) we go top to bottom

    vector<int> ans;
    
    for(int col=0; col<mCols; col++) {
        
        if( col&1 ) {
            //odd Index -> Bottom to top
            
            for(int row = nRows-1; row>=0; row--) {
                //cout << arr[row][col] <<" ";
                ans.push_back(arr[row][col]);
            }    
        }
        else
        {
            // 0 or even iondex -> top to bottom
            for(int row = 0; row<nRows; row++) {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
        }   
    }
    for(int i:ans)
    cout<<ans[i]<<" ";
    //return ans;
}

int main()
{
    vector<vector<int>> vect{{34,55,43,13},{45,61,15,89},{53,62,17,12}};
    
    WavePrint(vect,3,4);
    //for(int i:ans)
    //cout<<ans[i]<<" ";
    return 0;
}