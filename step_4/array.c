#include <stdio.h>

int main(void) {
    int c[] = {5, 4, 3, 2, 1};
    int total=0;

    for (int i=0;i<5;i++) {
        int num = c[i];
        printf("%d ",num);
        total += num;
    }


    printf("\n配列全体のサイズ: %zu\n",sizeof c);

    for (int i=0;i<5;i++) {
        int num = c[i];
        printf("1要素のサイズ: %zu\n",sizeof num);
    }
    return 0;
}