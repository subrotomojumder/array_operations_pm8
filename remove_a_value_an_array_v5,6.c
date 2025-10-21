// #include <stdio.h>
// int main()
// {
//     int N, idx;
//     scanf("%d", &N);
//     int arr[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &idx);
//     for (int i = 0; i < N; i++)
//     {
//         // if (i < idx)
//         // {
//         //     arr[i] = arr[i];
//         // }
//         // else
//         if (i > idx)
//         {
//             arr[i - 1] = arr[i];
//         }
//     }
//     for (int i = 0; i < N - 1; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// tutorial
#include <stdio.h>
int main()
{
    int N, idx;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &idx);
    for (int i = idx; i < N - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    N--;
    for (int i = 0; i <N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}