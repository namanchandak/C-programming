#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    for(;;){
        if (i>10)
            break;
        printf("%d \t",i);
        i++;
    }
    return 0;
}
