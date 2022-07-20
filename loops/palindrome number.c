#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f=0,i,t;
    printf("enter your number \n");
    scanf("%d",&n);
    t==n;
    while(n!=0)
    {
        f=(n%10)+f*10;
        n=n/10;
}
    if(t==f)
        printf("%d is palindrome",f);
    else
        printf("the number is not palindrome");

    return 0;
}
