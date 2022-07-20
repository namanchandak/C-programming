#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
    int n,i,*p;

    printf("enter the size of array\n");
    scanf("%d",n);
    p=(int*)malloc(sizeof (int)*n);
    for(i=0;i<n;i++)
    {
        printf( "enter value at %d",(i+1));
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",p[i]);
    }
    return 0;
}
