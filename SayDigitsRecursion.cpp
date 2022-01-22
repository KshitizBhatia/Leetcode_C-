#include<iostream>
#include <bits/stdc++.h>

using namespace std;
/*
123
*/
void SayDigit( int n)
{
    string a[10]={"Zero", "one", "two", "three", "four", "five", "six", "seven","eight", "nine"};
    
    if ( n == 0)
    return;

    int digit= n%10; 
    

    SayDigit(n/10);
    cout<<a[digit]<<" ";
}
int main()
{
    
    SayDigit(134);
    return 0;
}