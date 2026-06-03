/*
 * java_to_c.c
 * 给已经会 Java 的人：快速过一遍 C 的基础语法
 * 能看懂、能编译通过，就可以跳过 K&R 第 2-4 章
 */

#include <stdio.h>

/* ── 1. 函数声明（Java 不需要，C 需要） ── */
int  add(int a, int b);
void print_array(int arr[], int len);
int  max(int a, int b);

int main() {

    /* ── 2. 基本类型（和 Java 基本一样，扫一眼） ── */
    int    i = 42;
    char   c = 'A';
    float  f = 3.14f;
    double d = 3.14159;
    
    /* C 没有 boolean，用 int 代替：0 是 false，非 0 是 true */
    int flag = 1;   /* true */
    if (flag)
        printf("1. 基本类型: i=%d c=%c f=%.2f d=%.5f\n", i, c, f, d);


    /* ── 3. 运算符（和 Java 完全一样，跳过） ── */
    printf("2. 运算符: %d %d %d\n", add(3, 5), 10 % 3, 1 << 2);


    /* ── 4. 控制流（和 Java 完全一样，跳过） ── */
    /* for */
    int sum = 0;
    for (int j = 1; j <= 10; j++)
        sum += j;
    printf("3. for 循环 1+...+10 = %d\n", sum);

    /* while */
    int n = 10;
    while (n > 0)
        n -= 3;
    printf("4. while 结束后 n = %d\n", n);

    /* switch（和 Java 一样，记得 break） */
    int day = 3;
    switch (day) {
        case 1: printf("5. switch: Monday\n"); break;
        case 3: printf("5. switch: Wednesday\n"); break;
        default: printf("5. switch: other\n");
    }


    /* ── 5. 数组（和 Java 类似，但没有越界检查！） ── */
    int arr[] = {5, 3, 8, 1, 9, 2};
    int len = 6;
    printf("6. 数组: ");
    print_array(arr, len);


    /* ── 6. 函数（和 Java 类似，跳过） ── */
    printf("7. 函数: max(3,7) = %d\n", max(3, 7));


    /* ── 7. 以下是 C 独有的，需要认真学的部分 ── */
    printf("\n=== 下面是 Java 没有的，需要认真学 ===\n");
    printf("- 指针          (第 5 章)\n");
    printf("- 手动内存管理  (malloc/free)\n");
    printf("- 字符串是 char[] + \\0\n");
    printf("- 结构体 struct (第 6 章)\n");
    printf("- 头文件和多文件编译\n");

    return 0;
}

int add(int a, int b) { return a + b; }

void print_array(int arr[], int len) {
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int max(int a, int b) { return a > b ? a : b; }