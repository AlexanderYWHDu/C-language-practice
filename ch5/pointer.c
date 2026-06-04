#include <stdio.h>

void add_one(int *p) {
    *p = *p + 1;
}

int main() {
    int x = 10;
    int *p = &x;

    printf("x 的值: %d\n", x);
    printf("x 的地址: %p\n", &x);
    printf("p 存的地址: %p\n", p);
    printf("*p 的值: %d\n", *p);

    add_one(&x);
    printf("add_one 之后: %d\n", x);

    return 0;
}