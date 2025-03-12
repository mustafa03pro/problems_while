#include<stdio.h>
int main(){
    int i=1, t;
    scanf("%d",&t);
    if(t<0){
        printf("Negative values Not allowed");
        return 0;
    }
    if(t==0){
        printf("Zero Not allowed");
        return 0;

    }
    while(i<=10){
        printf("%d x %d = %d\n",t,i,t*i);
        i++;

    }
    
    return 0;
}