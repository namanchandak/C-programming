#include <stdio.h>
#include <stdlib.h>
int fact(int);
int n,f;
int main()
{ printf("enter no.!\n");
    scanf("%d",&n);

   f=fact(n);

    printf("factorial=%d\n",f);
      printf("Hello VOLT!\n");
    return 0;
}
int fact(int n)  {
int f=1;
while(n>1)
{
    f=f*n;
    n--;

}
return f;
}

/*
enter no.!
6
factorial=720
Hello VOLT!


*/
