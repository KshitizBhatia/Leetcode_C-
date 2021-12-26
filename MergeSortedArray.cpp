#include<iostream>
#include <bits/stdc++.h>

using namespace std;
void printArr(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void mergeSortedArray( int a[], int n, int b[], int m, int res[])
{
    int i=0, j=0, k=0;
    while(i<n && j<m )
    {
        if( a[i] < b[j])
        {
            res[k++] =a[i++];
        }
        else
        {
            res[k++]=b[j++];
        }
    }

    while(i<n)
    {
        res[k++] =a[i++];
    }
    while(j<m)
    {
        res[k++]=b[j++];
    }

}
int main()
{
    int a[5]={1,3,5,7,9};
    int b[4]={2,4,6,8};
    int c[9]={0};
    mergeSortedArray(a, 5, b, 4, c);
    printArr(c, 9);
    return 0;
}