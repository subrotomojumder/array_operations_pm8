#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    for (int i = 0; i < (int)strlen(s) / 2; i++)
    {
        char first_point = s[i], second_point = s[strlen(s) - 1 - i];
        // printf("%c %c\n", first_point, second_point);
        if (first_point != second_point)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}