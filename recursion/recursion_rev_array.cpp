#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverseArr(int l,int r,int a[])
{
    if (l>=r)
    {
        /* code */
        return  ;
    }
    swap(a[l],a[r]);
    reverseArr(l+1,r-1,a);
}

int main() {

    int a[]={2,4,5,6,7,8};
    reverseArr(0,5,a);
    for (int i = 0; i < 6; i++)
    {       
        /* code */
        cout<<a[i]<<"\t ";
    }
    
    
}