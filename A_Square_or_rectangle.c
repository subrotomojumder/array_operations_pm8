#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int w, h;
        scanf("%d %d", &w, &h);
        if (w != h)
        {
            printf("Rectangle\n");
        }
        else
        {
            printf("Square\n");
        }
    }

    return 0;
}