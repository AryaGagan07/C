#include <stdio.h>
int len(char *s){
    int length= 0;
    while(s[length]!='\0'){
        length++;
    }
    return length;
}
int main(){
    char s[] = "Hello World";
    printf("Length is %d", len(s));
}