#include <iostream>

using namespace std;
int sum(int n,int s)
{
if(n==0)

{
    cout<<s;
return 0;
}

else
return sum(n-1,s+n);

}
int main() {
    
    int n=4;
    sum(n,0);
    return 0;
}