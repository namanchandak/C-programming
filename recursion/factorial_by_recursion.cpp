#include <iostream>
using namespace std;
int fact(int n,int s)
{
if(n==1)
{
     cout<<s;
    return 1;
}

    else
    return fact(n-1,s*n);
}
int main() {
    
    int n=4;
    fact(n,1);
    return 0;
}