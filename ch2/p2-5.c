#include <stdio.h>

int any(char s1[], char s2[]) {
    int i, j;
    
    for (i = 0; s1[i] != '\0'; i++)
        for (j = 0; s2[j] != '\0'; j++)
            if (s1[i] == s2[j])
                return i;   /* 找到了，返回位置 */
    return -1;
}

int main() {
    char s1[] = "hello world";
    char s2[] = "aeiou";
    
    int pos = any(s1, s2);
    if (pos >= 0)
        printf("s2 中的字符第一次出现在 s1[%d] = '%c'\n", pos, s1[pos]);
    else
        printf("未找到\n");
    return 0;
}