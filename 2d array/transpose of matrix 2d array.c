#include <stdio.h>
#include <stdlib.h>

int main()
{ int j,i,a[3][3];
   for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
   {
        printf("enter element at %d,%d position\n",i+1,j+1);
        scanf("%d",&a[i][j]);
   }
   }
   for(i=0;i<=2;i++){
   for(j=0;j<=2;j++)
   {

    printf("%d\t",a[i][i]);
   }
   printf("\n");
   }
    return 0;
}
/*
enter element at 1,1 position
1
enter element at 1,2 position
2
enter element at 1,3 position
3
enter element at 2,1 position
4
enter element at 2,2 position
5
enter element at 2,3 position
6
enter element at 3,1 position
7
enter element at 3,2 position
8
enter element at 3,3 position

9
1       4       7
2       5       8
3       6       9
*/
