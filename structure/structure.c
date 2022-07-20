#include <stdio.h>
#include <stdlib.h>
struct Volt {
char name;int rollno;float p;

};
struct Volt V1;
int main()
{
    printf("enter the name\n");
    scanf("%s",&V1.name);
    printf("enter roll no\n");
    scanf("%d",&V1.rollno);
    printf("enter percent\n");
    scanf("%f",&V1.p);

    printf("The data is\n");
    printf("name\troll no\tpercent\n");
    printf("%s\t%d\t%f\t",V1.name,V1.rollno,V1.p);


    return 0;
}
