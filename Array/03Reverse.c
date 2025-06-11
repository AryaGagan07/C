#include <stdio.h>
int main(){
int A[] = {3,6,3,7,9,6,2,1,7};
int temp;
int len = sizeof(A)/sizeof(A[0]);
int mid = len/2;
for(int i=0;i<mid;i++){
    temp = A[i];
    A[i] = A[len-i-1];
    A[len-i-1] = temp;
}
for(int i=0;i<len;i++){
    printf("%d ",A[i]);
}
}