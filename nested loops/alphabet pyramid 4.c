#include <stdio.h>
#include <stdlib.h>

int main()
{

    char i,j;
   for (i='e';i<='a';i--)
   {
       for(j='a';j>=i;j++)
       {printf("%c",j);}
       printf("\n");
   }




    return 0;
}

