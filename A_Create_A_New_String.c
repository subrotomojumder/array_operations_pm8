#include <stdio.h>
#include <string.h>
int main()
{
    char S[1001], T[1001];
    scanf("%s %s", S, T);
    printf("%d %d\n", (int)strlen(S), (int)strlen(T));
    printf("%s %s", S, T);
    return 0;
}