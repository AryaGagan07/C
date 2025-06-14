#include <stdio.h>
int main()
{
    int A[] = {3, 6, 3, 7, 9, 6, 2, 1, 7};
    int len = sizeof(A)/sizeof(A[0]);
    for(int i = 0;i<len;i++){
        for (int j = i; j < len; j++)
        {
            
        }
        
    }
    for (int i = 0; i <= 9; i++){
        printf("%d ", A[i]);
    }
}