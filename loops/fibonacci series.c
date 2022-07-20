#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,i=1;

    scanf("%d%d%d",&a,&b,&d);

    while(i<=d)
    { c=b+a;
    i++;

        printf("%d,",a);
        a=b;
        b=c;
    }
    printf("...");
    return 0;
}

