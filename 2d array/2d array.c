#include <stdio.h>
#include <stdlib.h>

int main()
{ int j,i,a[3][3],b[3][3];
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
        printf("enter element at %d,%d position\n",i+1,j+1);
        scanf("%d",&b[i][j]);
   }
    }

printf("\n\n first matrix\n");

   for(i=0;i<=2;i++){
   for(j=0;j<=2;j++)
   {
    printf("%d\t",a[j][i]);
   }
   printf("\n");
   }
printf("\n\n second matrix\n");

   for(i=0;i<=2;i++){
   for(j=0;j<=2;j++)
   {
    printf("%d\t",b[j][i]);
   }
   printf("\n");
   }



   for(i=0;i<=2;i++){
   for(j=0;j<=2;j++)
   {
    a[i][j]=a[i][j]+b[i][j];
   }
   printf("\n");
   }



   for(i=0;i<=2;i++){
   for(j=0;j<=2;j++)
   {
    printf("%d\t",a[j][i]);
   }
   printf("\n");
   }


    return 0;
}
/*

*/
