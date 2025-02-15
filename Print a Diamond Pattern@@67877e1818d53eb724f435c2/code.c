#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a+1;i++){
        for(j=1;j<=a-1;j++){
            if(i==1 || i==a || j==1 || j==a){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");

    }



    return 0;
}