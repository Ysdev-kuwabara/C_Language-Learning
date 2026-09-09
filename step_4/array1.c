#include <stdio.h>

int main(void) {
    int array[] = {3, 8, 1, 9, 4, 2};
    int max=0,min=100;

    printf("元の配列: ");
    for (int i=0;i<6;i++) {
        int num = array[i];

        printf("%d ",array[i]);

        if (max < num) {
            max = num;
        } else if (min > num) {
            min = num;
        }
    }
    printf("\n最大値: %d\n",max);
    printf("最小値: %d\n",min);

    int temp = array[0];
    array[0] = array[5];
    array[5] = temp;

    printf("入れ替え後: ");
    for (int i=0;i<6;i++) {
        int num = array[i];

        printf("%d ",array[i]);
    }
}