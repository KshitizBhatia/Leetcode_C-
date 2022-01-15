#include<iostream>
#include <bits/stdc++.h>

using namespace std;

/*
    RI        CI
    |           |
    [1,4,7,11,15]
    [2,5,8,12,19]
    [3,6,9,16,22]
    [10,13,14,17,24]
    [18,21,23,26,30]
*/
 bool searchMatrix(vector<vector<int>>& matrix, int target)
 {
     int row=matrix.size();
    int col=  matrix[0].size();

    int RowIndex =0;
    int ColIndex = col -1;

    while( (RowIndex < row) &&(ColIndex>=0)) 
    {
        int element=matrix[RowIndex][ColIndex];
        if( element == target)
        {
            return 1;
        }
        if( element < target)
        {
            RowIndex++;
        }
        else // target is less thn a[0][col-1]
        {
            ColIndex--;
        }
        
    }
    return 0;


 }