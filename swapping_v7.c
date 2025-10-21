#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int pot = a;
    a = b;
    b = pot;
    printf("a:%d b:%d", a, b);
    return 0;
}