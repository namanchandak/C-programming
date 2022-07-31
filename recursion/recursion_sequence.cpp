#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void seque(int i,vector<int>& v,int a[],int n)
{
    //int s=a.size();
    if(i==n)
    {
        for(auto i:v)
        {
            cout<<i<<" ";
        }
        if(v.empty())
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    v.push_back(a[i]);
    seque(i+1, v, a, n);
    v.pop_back();
    seque(i+1, v, a, n);



}
int main() {
    int a[]={3,1,2};
    int n=3;
    vector<int> v;
    seque(0,v,a,n);

    return 0;
}