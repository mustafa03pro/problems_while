#include<stdio.h>
int main(){
    int s2=0,n,s1=0;
    printf("enter the no: ");
    scanf("%d",&n);
    while (n>=1)
    {
       if(n%2==0)s1+=n;
       
       else s2+=n;
       n--;


        
    }
    printf("even sum=%d,odd sum=%d",s1,s2);
    return 0;

}