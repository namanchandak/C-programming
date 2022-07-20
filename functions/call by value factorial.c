#include <stdio.h>
#include <stdlib.h>
int fact(int);

int main()
{   int a;
    printf("enter  no.!\n");
    scanf("%d",&a);
    fact(a);

    return 0;
}
int fact(int a)  {
int f=1;
while(a>1){

    f=f*a;
    a--;
}
printf("%d",&f);
}

/*


*/
