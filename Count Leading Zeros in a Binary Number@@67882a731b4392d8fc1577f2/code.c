#include <stdio.h>

int main() {
    unsigned int a;
    scanf("%d",&a);
    printf("%u",_builtin_clz(a));
    return 0;
}