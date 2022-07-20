#include <stdio.h>
#include <stdlib.h>
struct Volt {
char name;int rollno;float p;

};
struct Volt V1;
int main()
{
    printf("enter the name\n");
    scanff("%s",&V1.name);
    printf("enter roll no\n");
    scanff("%d",V1.rollno);
    printf("enter percent\n");
    scanff("%f",V1.p);

    printf("The data is\n");
    printf("name\troll no\tpercent\n");
    printf("%s\t",V1.name);
    printf("%d\t",V1.rollno);
    printf("%f\t",V1.p);

    return 0;
}
