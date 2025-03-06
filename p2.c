#include<stdio.h>
int main(){
    int i=1,n,s=0;
    printf("enter the no: ");
    scanf("%d",&n);
    while (i<=n)
    {
       s+=i;
       i++; 
    }
    printf("sum=%d,avg=%.2f",s, (float)s/n);
    return 0;

}