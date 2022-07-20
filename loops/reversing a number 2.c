#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f=0,i;
    printf("enter your number \n");
    scanf("%d",&n);
    while(n!=0)
    {
      f=n%10;
      n=n/10;
       printf("%d \n",f);
    }

    return 0;
}
