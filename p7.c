#include<stdio.h>
int main(){
    int c=0;long n;

    printf("enter the no: ");
    scanf("%ld",&n);
    do
    {
        c++;n=n/10;
    } while (n!=0);
    printf("%d digit no",c);
    
    
    
    return 0;

}