#include <stdio.h>
int main(){
    int a,i,j;
    char symbol;
    scanf("%d",&a);

    printf("Enter the symbol: ");
    scanf("%c", &symbol);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%c",symbol);
        }
        printf("\n");
    }
    return 0;
}