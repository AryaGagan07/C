#include <stdio.h>
int main()
{
    int A[] = {3, 6, 3, 7, 9, 6, 2, 1, 7};
    int pos = 4, key = 5;
    int len = sizeof(A) / sizeof(A[0]);
    for (int i = len; i >= pos; i--)
    {
        A[i] = A[i - 1];
    }
    A[pos] = key;
    for (int i = 0; i <= len; i++)
    {
        printf("%d ", A[i]);
    }
}
