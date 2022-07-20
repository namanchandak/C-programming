#include <stdio.h>
#include <stdlib.h>
int pyramid();
int main()
{

    pyramid();
    printf("Hello VOLT!\n");
    pyramid();
    return 0;
}
int pyramid()  {
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<i;j++)
        {
            printf("@");
        }

        printf("\n");
    }

}

/*


*/
