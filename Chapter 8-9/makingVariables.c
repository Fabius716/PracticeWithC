#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* code */
    int a = 0;
    int b = 0;
    int c = 0;
    int d,e,f;
    d = 64;
    e = d * 8;
    f = e * 8;
    char stringCatcher[30];
    scanf("%s",stringCatcher);
    b=atoi(stringCatcher);
    c=b*85;
    printf("A=%d, B=%d, C=%d\n",a,b,c);
    printf("%d %d %d\n",d,e,f);
    return 0;
}
