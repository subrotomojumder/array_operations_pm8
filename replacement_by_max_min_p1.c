#include <stdio.h>
#include <limits.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN, min = INT_MAX;
    int max_idx = 0, min_idx = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_idx = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            min_idx = i;
        }
    }
    arr[max_idx] = min;
    arr[min_idx] = max;
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}