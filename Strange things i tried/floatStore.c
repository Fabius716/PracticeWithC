#include <stdio.h>
#include <stdbool.h>

int main()
{
    char stringCatcher[30];
    float total;

    printf("Hello, welcome to the Wendios Shop. What would you like?\n");
    printf("Menu:\n     1.Poison burger:4.50€,\n     2.Coke:6.30€,\n     3.Cheeseless burger:2.40€\n");
    scanf("%s",stringCatcher);
    if (stringCatcher=="1")
    {
        total=total+4.5;
    };
    if (stringCatcher=="2")
    {
        total=total+6.3;
    };
    if (stringCatcher=="3")
    {
        total=total+2.4;
    };
    bool ca = (stringCatcher=="2");

    printf("%f,boolean :%zu",total,ca);
    printf("%s",stringCatcher);*/
    printf("That will be %.2f€, thanks.\n",total);
    return 0;
}
