#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a-i;j++){
         printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%d",j);

        }
  for(j=2;j<=i;j++){
    printf("%d",j);
  }

        
        printf("\n");
    }
    return 0;
}