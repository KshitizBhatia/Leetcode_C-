#include<iostream>
#include <bits/stdc++.h>

using namespace std;

bool is_sorted( int a[] , int size)
{

    if( size <= 1)
    return true;

    if( a[0]>a[1])
    return false;

    return is_sorted(a+1, size-1);
}

int main()
{
    int a[7]={ 1,2,3,4,5,6,7};
    cout<<is_sorted(a, 7);

    return 0;
}