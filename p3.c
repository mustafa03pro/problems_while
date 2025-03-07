#include<stdio.h>
int main(){
    int r,d,c,f=0;
    long n;
    printf("enter the no: ");
    scanf("%ld",&n);
    printf("enter search no: ");
    scanf("%d",&d);
    c=printf("%d",n);
    if (n<0)c--;
    do
    {
        r=n%10;
        if (r==d)
        
        printf("\n%d in %d position",d,c,f=1);
        c--;
        n=n/10;

        
        
    } while (n!=0);
    if(f==0)printf("\n%d not found",d);
    
   
    return 0;
    


}