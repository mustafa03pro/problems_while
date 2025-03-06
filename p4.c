#include<stdio.h>
int main(){
    int b,p;
    long r=1;
    printf("enter the p,r value: ");
    scanf("%d%d",&b,&p);
    while (p>=1)
    {
       r=b*r;
       p--;
        
    }
    printf("power=%ld",r);
    return 0;

}