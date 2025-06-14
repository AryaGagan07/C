// Similar for Product

#include <stdio.h>
int pairsum(int A[],int len){
    int l = A[0], sl =-3740;
    for (int i = 0;i<len;i++){
        if(A[i]>l){
            sl=l;
            l=A[i];
        } else if(A[i]>sl){
            sl = A[i];
        }
    }
    return l+sl;
}
int main()
{
    int A[] = {1,5,0,0,5,4,3,0,7,9,0,3};
    int len = sizeof(A) / sizeof(A[0]);
    printf("Sum is %d", pairsum(A,len));
    // for(int i = 0; i < len ; i++){
    //     printf("%d ", A[i]);
    // }
}