#include <stdio.h>

int a, b;
int main() {
    scanf("%d-%d", &a, &b);
    printf("%06d%07d", a, b);
    return 0;
};