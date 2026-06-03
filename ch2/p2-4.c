#include <stdio.h>

void squeeze(char s1[], char s2[]) {
    int i, j, k;
    
    for (i = k = 0; s1[i] != '\0'; i++) {
        /* 检查 s1[i] 是否在 s2 中 */
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
            ;
        if (s2[j] == '\0')      /* 没在 s2 里找到，保留 */
            s1[k++] = s1[i];
    }
    s1[k] = '\0';
}

int main() {
    char s1[] = "hello world";
    char s2[] = "lo";
    
    printf("原始: %s\n", s1);
    squeeze(s1, s2);
    printf("结果: %s\n", s1);
    return 0;
}