#include <stdio.h>

void print(int *arr, int len) {
    for (int *p = arr; p < arr + len; p++)
        printf("%d ", *p);
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    
    printf("下标访问: %d\n", arr[2]);
    printf("指针访问: %d\n", *(arr + 2));
    
    print(arr, 5);
    return 0;
}