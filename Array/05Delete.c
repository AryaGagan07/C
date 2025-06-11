#include <stdio.h>
int main()
{
    int A[] = {3, 6, 3, 7, 9, 6, 2, 1, 7};
    int pos = 4;
    int len = sizeof(A) / sizeof(A[0]);
    for (int i = pos; i < len; i++)
    {
        A[i] = A[i + 1];
    }
    for (int i = 0; i < len - 1; i++)
    {
        printf("%d ", A[i]);
    }
}