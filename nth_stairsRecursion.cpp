#include<iostream>
#include <bits/stdc++.h>

using namespace std;

/*
                  _ end total steps 8
                _|      , person is at start, he can only jump 1 stair or 2 starrs at one time, ho
              _|          many diff ways in which he can reach from start to end  
            _|
          _|
        _|
     _ |
    |
start
*/

int nthStairs( long long stairs)
{
    if( stairs < 0)
    return 0;

    if( stairs == 0)
    return 1;

    return (nthStairs(stairs-1) + nthStairs(stairs-2));

}
int main()
{
    cout<<nthStairs(3);

    return 0;
}