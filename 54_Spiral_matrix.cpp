#include<iostream>
#include <bits/stdc++.h>

using namespace std;
/*
    1   2   3   4
    5   6   7   8
    9   10  11  12
    13  14  15  16

    1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/
vector<int> spiralOrder(vector<vector<int>>& matrix)
{
    int row=matrix.size();
    int col=matrix[0].size();
    int total=row*col;
    int count=0;

    vector<int> ans;

    //index initialisation
    int startRow=0;
    int startCol=0;
    int endRow=row-1;
    int endCol=col-1;
    
    while(count < total)
    {
        for(int i=startCol;count < total && i<=endCol;i++)
        {
            ans.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;

        for(int i=startRow;count < total && i<=endRow;i++)
        {
            ans.push_back(matrix[i][endCol]);
            count++;
        }
        endCol--;

        for(int i=endCol;count < total && i>=startCol;i--)
        {
            ans.push_back(matrix[endRow][i]);
            count++;
        }
        endRow--;
        
        for(int i=endRow;count < total && i>=startRow;i--)
        {
            ans.push_back(matrix[i][startCol]);
            count++;
        }
        startCol++;
    }
    return ans;
}
