#include<iostream>
#include<bits/stdc++.h>

using namespace std;
/*
num, power
if power is even , so num^ power, 2^8 = num^(power/2) * num^(power/2), 2^4 * 2^4

if power is odd , so num^ power, 2^9 = num * ( num^(power/2) * num^(power/2)), 2 * ( 2^4 * 2^4)

*/

int chkpower(int num, int power)
{
    //base case
    if( power == 0)
    return 1;

    if( power == 1)
    return num;

    int ans=chkpower(num, power/2);

    if( power%2 == 0){
        return ans*ans;
    }
    else{
        return num*ans*ans;
    }


}
int main()
{
    int num, power;
    cin>>num>>power;
    cout<<chkpower(num, power);

    return 0;
}