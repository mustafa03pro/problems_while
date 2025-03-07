#include<stdio.h>
int main(){
    int r,e,o,z;
    long n;
    printf("enter the no: ");
    scanf("%d",&n);
    e=o=z=0;
    do
    {
        r=n%10;
        if (r==0)z++;
        else if (r%2==0)e++;
        else o++;
        n=n/10;
        
        
        
    } while(n);
    printf("even=%d,odd=%d,zero=%d",e,o,z);
    return 0;
    


}