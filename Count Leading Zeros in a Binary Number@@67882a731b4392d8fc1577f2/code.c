#include <stdio.h>

int main() {
    unsigned int a;
    scanf("%d",&a);
    printf("%d",_builtin_clz(a));
    return 0;
}