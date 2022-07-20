#include <stdio.h>
#include <stdlib.h>
int add(int,int);
int a,b,c;
int main()
{ printf("enter 2 no.!\n");
    scanf("%d%d",&a,&b);

   c=add(a,b);

    printf("sum=%d\n",c);
      printf("Hello VOLT!\n");
    return 0;
}
int add(int a,int b)  {
int c;
c=a+b;
return c;
}

/*
enter 2 no.!
6
45
sum=51
Hello VOLT!


*/
