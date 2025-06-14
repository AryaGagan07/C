#include <stdio.h>
#include <stdbool.h>
bool pal(int a){
    int num= a, reverse=0;
    while (num>0)
    {
        int digit = num%10;
        reverse = reverse*10 + digit;
        num = num/10;
    }
    return (a == reverse);
}

int main()
{
    int A[] = {121, 131, 123, 456, 343, 989, 101, 2023};
    int len = sizeof(A) / sizeof(A[0]);
    for(int i = 0; i < len; i++){
        if(pal(A[i]))printf("%d ",A[i]);
    }
    // for(int i = 0; i < 100 - 1; i++){
    //     if(fre[i]==2){printf("%d ", i);}
    // }
}