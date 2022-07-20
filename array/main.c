#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3],i,j,sum=0;
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
       {
        printf("Enter value at %d,%d position\n",(i+1),(j+1));
        scanf("%d",&a[i][j]);
    }
      for(i=0;i<=3;i++)
      { for(j=0;j<3;j++)
      {
        printf("%d\t",a[i][j]);
      }
          printf("\n");
      }
    }
    for(i=0;i<=3;i++)
        {
           for(j=0;j<3;j++)
           {
              sum=sum+a[i][j];
           }
        }
            printf("\n the sum is %d",sum);
        return 0;
}
