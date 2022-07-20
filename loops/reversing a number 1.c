#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f,i;
    printf("enter your number \n");
    scanf("%d",&n);
    while(n!=0)
    {
        f=n%10;
        printf("%d",f);
        n=n/10;
    }

    return 0;
}
