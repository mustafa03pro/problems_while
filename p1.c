#include<stdio.h>
int main(){
    int r,max=-9,min=9;
    long n;
    printf("enetr the no: ");
    scanf("%d",&n);
    do
    {
        r=n%10;
        if (max<r)max=r;
        if (min>r)min=r;
        n=n/10;
        
        
        
    } while (n!=0);
    printf("min=%d,max=%d",min,max);
    return 0;
    


}