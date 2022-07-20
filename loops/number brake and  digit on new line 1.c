#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<11;i++)
    {
        if (i%2==0)
            continue;
    printf("%d\t",i);
    }


    return 0;
}
