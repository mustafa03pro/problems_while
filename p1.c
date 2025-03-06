#include<stdio.h>
int main(){
    int i=1,n;
    printf("enter the no: ");
    scanf("%d",&n);
    while (i<=n)
    {
       if(i%2!=0)printf("%4d",i);
       i++; 
    }
    return 0;

}