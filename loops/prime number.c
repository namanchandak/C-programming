#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f,i;
    printf("enter your number \n");
    scanf("%d",&n);
   for(i=n;i>1;i--)
   { if(n%i==0)
   {f=0;
   break;
   }
   else
    f=1;

   }
   if(f==1)
    printf("%d is prime no.",n);
   else
    printf("%d is non prime",n);

    return 0;
}
