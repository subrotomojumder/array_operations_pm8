#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    fgets(s, 100001, stdin);
    for (int i = 0; i < strlen(s); i++)
    {
        // printf("%c", s[i]);
        if ('A' <= s[i] && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        else if ('a' <= s[i] && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (s[i] == ',')
        {
            s[i] = ' ';
        }
    }
    printf("%s", s);
    return 0;
}