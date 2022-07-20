#include <stdio.h>
#include <stdlib.h>
int fact();
int main()
{
    int n,f;
    printf("enter your number\n");
    scanf("%d",&n);

    f=  fact(n);
    printf("%d",f);
    return 0;
}
int fact(int n)
{    int f=1;
    if(n==1)
    {
        return 1;
    }
    else
{
  f=fact(n-1)*n;

}
    return f;

}
/*

*/
