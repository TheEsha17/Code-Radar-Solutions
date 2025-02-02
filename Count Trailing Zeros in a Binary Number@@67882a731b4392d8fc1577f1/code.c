#include <stdio.h>
int main() {
    int a;
    scanf("%u",&a);
    print("%d",__builtin_clz(a));
    return 0;
}
