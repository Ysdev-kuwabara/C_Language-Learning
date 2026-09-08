//入力した点数で評価（A〜F）を返すプログラム。
#include <stdio.h>

int main(void) {
    int score;
    int result;

    printf("Please enter your score in math test (0-100):\n");

    while (1) {
        result = scanf("%d", &score);

        if (result != 1) {
            // 数字以外が入力された場合
            printf("Please enter a valid number.\n");
            // バッファに残ったゴミを捨てる
            while (getchar() != '\n');
            continue;
        }

        if (score < 0 || score > 100) {
            printf("Please enter a score between 0 and 100.\n");
            continue;
        }

        // ここに来たら正しい入力
        break;
    }

    if (score >= 90) {
        printf("Your Assessment is A\n");
    } else if (score >= 80) {
        printf("Your Assessment is B\n");
    } else if (score >= 70) {
        printf("Your Assessment is C\n");
    } else if (score >= 60) {
        printf("Your Assessment is D\n");
    } else if (score >= 50) {
        printf("Your Assessment is E\n");
    } else {
        printf("Your Assessment is F\n");
    }

    return 0;
}