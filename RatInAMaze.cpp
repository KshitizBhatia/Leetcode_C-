#include<iostream>
#include<String>
#include<bits/stdc++.h>

using namespace std;
bool safe( int x, int y, int n, vector<vector<int>> &m, vector<vector<int>> visited)
{
    /*
    for safe : 
    1. the next block where we need to go should be inside a matrix
    2  the next block should be accessible  : m[x][y] ==1  ?
    3, visited should be 0
    */
   if(( x>=0 && x<n) && (y>=0 && y<n) && (visited[x][y] == 0) && (m[x][y]==1))
   return true;
   else{
       return false;
   }
}

void solve(vector<vector<int>> &m, int n,  vector<string> ans, int x, int y, vector<vector<int>> visited,
             string path )
{
    //acc to rec if i am in this fucntion it means i have reached x,y( destination)

    //base case, if we have reached the destination
    if(x == n-1 && y == n-1)
    {
        ans.push_back(path);
    }
    visited[x][y]=1;
    //4 choices, up , down, left, right

    //down
    int newx=x+1;
    int newy=y;
    if(safe(newx, newy, n, m, visited))
    {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();// if we backtrack we need to remove the "D"
    }

 //left
    newx=x;
    newy=y-1;
    if(safe(newx, newy, n, m, visited))
    {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();// if we backtrack we need to remove the "L"
    }

 //right
    newx=x;
    newy=y+1;
    if(safe(newx, newy, n, m, visited))
    {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();// if we backtrack we need to remove the "R"
    }

 //up
    newx=x-1;
    newy=y;
    if(safe(newx, newy, n, m, visited))
    {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();// if we backtrack we need to remove the "U"
    }

    //when we go bck from this point we need to mark it as unvisited
     visited[x][y]=0;
}

vector<string> findPath( vector<vector<int>> &m, int n)
{
    vector<string> ans;
    //source cordiates (x,y) (0,0)
    int srcx=0;
    int srcy=0;

    if(m[0][0] == 0)
    return ans;

    //visited matrix for marking
    vector<vector<int>> visited;
    //initilaise with 0
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            visited[i][j]=0;
        }
    }

    string path= "";
    solve(m, n, ans, srcx, srcy, visited, path);
    //since the answer should be lexiographic
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{


    return 0;
}