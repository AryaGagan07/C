#include <stdio.h>
int main()
{
    int A[] = {3, 6, 3, 7, 9, 6, 2, 1, 7};
    int len = sizeof(A) / sizeof(A[0]);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (A[i] == A[j])
            {
                for (int k = j; k < len - 1; k++)
                {
                    A[k] = A[k + 1];
                }
                len--;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", A[i]);
    }
}