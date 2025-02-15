#include <stdio.h>
int main(){
    int i,j;
    char a;
    scanf("%c",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%c",a);
        }
    printf("\n");
    }
}