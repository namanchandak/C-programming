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
    printf("%d\t",a[i][j]);
   }
   printf("\n");
   }
    return 0;
}
