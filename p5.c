#include<stdio.h>
int main(){
    int r,s=0;
    long n;
    printf("enter the no: ");
    scanf("%ld",&n);
    while (n!=0)
    {
       r=n%10;
       s=s+r;
       n=n/10; 
    }
    printf("sum =%d",s);
    return 0;

}