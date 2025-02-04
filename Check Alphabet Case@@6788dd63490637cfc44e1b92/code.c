#include <stdio.h>

int main() {
    char a[100];
    scanf("%s", a);
    if (isupper(a)){
        printf("Uppercase");
    }    
    else if (islower(a)){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;

}