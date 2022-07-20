#include <stdio.h>
#include <stdlib.h>
int show();
int main()
{

   show();
    return 0;
}
int show()
{
static int i=1;
if(i<10)
{
    printf("%d      Merlin \n",i);
    i++;
    show();
}
i=1; /*does not make sense   */
}
/*
Hello world! by VOLT  1
Hello world! by VOLT  2
Hello world! by VOLT  3
Hello world! by VOLT  4
Hello world! by VOLT  5
Hello world! by VOLT  6
Hello world! by VOLT  7
Hello world! by VOLT  8
Hello world! by VOLT  9
*/
