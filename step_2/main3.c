//うるう年判定プログラム。

#include <stdio.h>

int main(void) {
    int year,result;

    while (1) {
        printf("Please enter a number: ");
        result = scanf("%d",&year);

        //入力が数字じゃなかった場合
        if (result != 1) {
            printf("Invalid input. Please enter a number.\n");
            // バッファに残ったゴミを捨てる
            while (getchar() != '\n');
            continue;
        }

        break;
    }

    if (year % 400 == 0) {
        printf("%dはうるう年です。",year);
    } else if (year % 100 == 0) {
        printf("%dはうるう年ではありません。",year);
    } else if (year % 4 == 0) {
        printf("%dはうるう年です。",year);
    } else {
        printf("%dはうるう年ではありません。",year);
    }

    return 0;
}