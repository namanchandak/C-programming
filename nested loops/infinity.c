#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j;
   for (i=1;i<=10;i++)
   {
       for(j=i;j>=i;j++)
       {printf("%c",j);}
       printf("\n");
       j=i;
   }




    return 0;
}

