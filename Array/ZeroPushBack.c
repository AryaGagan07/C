#include <stdio.h>
void push(int A[],int len){
    int i = 0 ,j = 0;
    while(i<len){
        if (A[i]!=0){
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
            j++;
        }
        i++;
    }
}
int main()
{
    int A[] = {1,5,0,0,5,4,3,0,7,9,0,3};
    int len = sizeof(A) / sizeof(A[0]);
    push(A,len);
    for(int i = 0; i < len ; i++){
        printf("%d ", A[i]);
    }
}