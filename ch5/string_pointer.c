#include <stdio.h>

int mystrlen(char *s) {
    char *p = s;
    while (*p)
        p++;
    return p - s;
}

void mystrcpy(char *to, char *from) {
    while ((*to++ = *from++) != '\0')
        ;
}

int main() {
    char src[] = "hello";
    char dst[10];

    printf("长度: %d\n", mystrlen(src));

    mystrcpy(dst, src);
    printf("复制结果: %s\n", dst);

    return 0;
}