#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a>1){
        for(i=2;i<a,i++){
            if(a%i==0){
                printf("Prime");
                return 0;
            }
        }

    }
    else{
        printf("Not Prime");
    }
    return 0;
}