#include <stdio.h>
#include <stdlib.h>

int main()
{

    char i,j;
   for (i='a';i<='e';i++)
   {
       for(j='e';j>=i;j--)
       {printf("%c",i);}
       printf("\n");
   }




    return 0;
}

