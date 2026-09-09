#include <stdio.h>

int main(void) {
    int array[] = {5, 2, 9, 1, 7, 3};
    int n = 6;

    printf("ソート前の配列: ");
    for (int i=0;i < 6; i++) {
        printf("%d ",array[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j + 1] = temp;
            }
        }
    }

    printf("\nソート後の配列: ");
    for (int i=0;i < 6; i++) {
        printf("%d ",array[i]);
    }

    return 0;
}