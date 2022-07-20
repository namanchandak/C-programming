#include <stdio.h>
#include <stdlib.h>
int pyramid(int);
int main()
{

    pyramid(6);
    printf("Hello VOLT!\n");
    pyramid(10);
    return 0;
}
int pyramid(int n)  {
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
        {
            printf("@");
        }

        printf("\n");
    }

}

/*
@
@@
@@@
@@@@
@@@@@
Hello VOLT!

@
@@
@@@
@@@@
@@@@@
@@@@@@
@@@@@@@
@@@@@@@@
@@@@@@@@@

*/
