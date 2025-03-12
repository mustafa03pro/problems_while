#include<stdio.h>
int main(){
    int i=1,n,d,r=0,c=0;
    scanf("%d",&n);
    scanf("%d",&d);
    

    
    while(n!=0){
        r=n%10;
        
        if(r==d){
            c++;
        }
        n=n/10;
        

        
        

    }
    if(c>0){
        printf("%d occurs %d times.",d,c);
    }

    
    return 0;
}