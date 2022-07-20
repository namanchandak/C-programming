#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f=0,i,t;
    printf("enter your number \n");
    scanf("%d",&n);
    i==n;
    printf("%d  %d  ",i,n);
    while(n!=0)
    {
        t=n%10;
        f=f+(t*t*t);
        n=n/10;
}
    if(i==f)
    {printf("the number is angstrom number");}
    else
     printf("the number is not angstrom number");
    return 0;
}
