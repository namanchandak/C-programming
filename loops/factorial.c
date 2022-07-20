#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n; long int f=1;
    scanf("%d",&n);

    while(n>=1)
    { f=f*n;
      n--;
    }
    printf("%d",f);
    return 0;
}
