#include<stdio.h>
#include<conio.h>
int main(){
    int r;
    long rev=0,n;
    
    printf("enter the no: ");
    scanf("%ld",&n);
    while (n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }
    printf("reverse n0 is %ld",rev);
    
    
    
    
    
    
   
    return 0;
    


}