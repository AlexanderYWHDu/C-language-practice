#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    /* argv 演示 */
    printf("参数个数: %d\n", argc);
    for (int i = 0; i < argc; i++)
        printf("argv[%d] = %s\n", i, argv[i]);

    /* malloc 演示 */
    int n = 5;
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("内存申请失败\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
        arr[i] = i * 10;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    arr = NULL;

    return 0;
}