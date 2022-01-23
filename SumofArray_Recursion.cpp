#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int sumArray(int a[], int size)
{
    if(size<0)
    return 0;
    
    if(size == 1)
    return a[0];

    return a[0]+sumArray(a+1, size-1);

}

int main()
{
    int a[]={ 1,3,4,2,5,6};
    cout<<sumArray(a, 6);
    return 0;
}