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

void MoveZero( int a[])
{
    int nextzero=0;
    for(int nonzero=0;nonzero<7;nonzero++)
    {
        if(a[nonzero]!= 0)
        {
            swap(a[nonzero], a[nextzero]);
            nextzero++;
        }
    }
}
int main()
{
    int a[]={0,2,0,1,4,0,6};
    printArr(a,7);
    cout<<"after moving : "<<endl;
    MoveZero(a);
    printArr(a,7);
    return 0;
}