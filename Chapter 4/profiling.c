#include <stdio.h>
int main()
{
    char name[20];
    int age;
    char fcolor[20];
    /* code */
    printf("Who are you?\n");
    scanf("%s",&name);
    printf("How old are you?\n");    
    scanf("%d",&age);
    printf("What's you favourite color?\n");
    scanf("%s",&fcolor);
    printf("So you are %s, are %i years old and your favorite color is %s",name,age,fcolor);
    return 0;
}
