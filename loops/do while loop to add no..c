#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    char ch;

    do{
        printf("enter your numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf(" %d",c);
    printf("\n to add more press y \n");
    scanf("%c",&ch);
    }
    while(ch=='Y'||'y');


    return 0;
    }
