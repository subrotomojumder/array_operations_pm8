#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        int left = arr[i];
        int right = arr[n - i - 1];
        if (left != right)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES");
    return 0;
}