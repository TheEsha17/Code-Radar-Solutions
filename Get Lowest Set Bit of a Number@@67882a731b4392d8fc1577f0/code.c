#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (num == 0) {
        printf("No set");
    } else {
        int lowest_set_bit = num & -num;
        printf("%d", lowest_set_bit);
    }
    return 0;
}