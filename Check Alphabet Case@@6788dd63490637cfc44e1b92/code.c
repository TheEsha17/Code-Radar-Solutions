#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    getchar();
    if ("A"){
        printf("Uppercase");
    }    
    else if ("z"){
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;

}