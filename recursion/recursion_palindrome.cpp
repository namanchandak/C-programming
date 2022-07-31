#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool palindrome(int l,int r,string & s)
{

    if (l>=r)
    {
        /* code */
        return true ;
    }
    //swap(a[l],a[r]);
    if(s[l]!=s[r])
    return false;

    return palindrome(l+1,r-1,s);
}
int main() {

    string s="1naman1";
    bool t=palindrome(0,s.length()-1,s);
     cout <<t<<"is";
    
    
}