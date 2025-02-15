#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        printf("%d X %d = %d",a,i,a*i);
    }
    return 0;
}