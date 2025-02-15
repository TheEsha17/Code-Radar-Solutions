#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for (i=1;i<=10;i++){
        printf("%d x %d = %d",a,i,a*i);
        printf("\n");
    }
    
    return 0;
}