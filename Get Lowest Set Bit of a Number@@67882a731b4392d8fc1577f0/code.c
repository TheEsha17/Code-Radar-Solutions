#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a == 0) {
        printf("No set");
    } else {
        int lowest_set_bit = a & -a;
        printf("%d", lowest_set_bit);
    }
    return 0;
}