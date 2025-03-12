#include<stdio.h>
int main(){
    int i=1,n,r=0,s=0;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative value Not Allowed");
    return 0;
    }
    
    while(i<n){
       
       if(n%i==0)
       {
        s+=i;
       }
        i++;
    }
   
    if(n==s){
        printf("%d is a perfect number.",n);
    }
    else printf("%d is NOT a perfect number.",n);    
       

      
    return 0;


}