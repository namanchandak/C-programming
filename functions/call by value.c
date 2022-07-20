#include <stdio.h>
#include <stdlib.h>
int add(int,int);

int main()
{   int a,b;
    printf("enter 2 no.!\n");
    scanf("%d%d",&a,&b);
    add(a,b);

    return 0;
}
int add(int a,int b)  {
int c;

    c=a+b;
    printf("sum=%d\n",c);



}

/*
enter 2 no.!
6
45
sum=51



*/
