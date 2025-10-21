// my practice
// #include <stdio.h>
// int main()
// {
//     int N, X, V;
//     scanf("%d", &N);
//     int arr[N + 1];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d %d", &X, &V);
//     for (int i = N + 1; i >= 0; i--)
//     {

//         if (i > X)
//         {
//             arr[i] = arr[i - 1];
//         }
//         if (i == X)
//         {
//             arr[i] = V;
//         }
//         else
//         {
//             arr[i] = arr[i];
//         }
//     }
//     for (int i = 0; i <= N; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// tutorial
#include <stdio.h>
int main()
{
    int N, idx, value;
    scanf("%d", &N);
    int arr[N + 1];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &idx, &value);
    for (int i = N; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[idx] = value;
    // printf("%d", arr[idx]);
    for (int i = 0; i <= N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}