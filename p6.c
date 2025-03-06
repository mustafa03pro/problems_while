#include<stdio.h>
int main(){
    int c;long n;

    printf("enter the no: ");
    scanf("%ld",&n);
    c=printf("%ld",n);
    printf("is a %d digit no",c);
    return 0;

}