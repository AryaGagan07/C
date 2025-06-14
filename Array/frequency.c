#include <stdio.h>
int main()
{
    int A[] = {3, 6, 3, 7, 9, 6, 2, 1, 7};
    int len = sizeof(A) / sizeof(A[0]);
    int fre[100]={0};
    for(int i = 0; i < len; i++){
        fre[A[i]]++;
    }
    for(int i = 0; i < 100 - 1; i++){
        if(fre[i]==2){printf("%d ", i);}
    }
}