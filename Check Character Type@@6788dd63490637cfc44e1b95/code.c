#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a="a" || a="e"||a="i"|| a="o"|| a="u"){
        printf("Vowel");
    }
    else if((a>="A" && a<="Z") || (a>="a" && a<="z")){
        printf("Consonant");
    }
    else if(a>=0 && a<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }

    return 0;
}