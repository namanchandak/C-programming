#include <stdio.h>
#include <stdlib.h>
int pyramid();
int a,b,c;
int main()
{

    pyramid();
    printf("Hello VOLT!\n");

    return 0;
}
int pyramid()  {

    printf("enter 2 no.!\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum=%d\n",c);



}

/*
enter 2 no.!
6
45
sum=51
Hello VOLT!


*/
