#include <stdio.h>
int main(){
    int a,i,j,num=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(num%2==0){
            num=0;
        }else{
           num=1;
        }

        for(j=1;j<=i;j++){
            printf("%d ",num);
            num=1-num;
        }
    printf("\n");
    }
    return 0;
    
    }