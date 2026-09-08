//入力した点数で評価（A〜F）を返すプログラム。
#include <stdio.h>

int main(void) {
    int score; //Test Score

    printf("Please enter your score in math test\n");
    if (scanf("%d",&score) <= 0 || score > 100) {
        printf("Please enter correct score\n");
        return 1;
    }


    if (score >= 90) {
        printf("Your Assesment is A\n");
    } else if (score >= 80) {
        printf("Your Assesment is B\n");
    } else if (score >= 70) {
        printf("Your Assesment is C\n");
    } else if (score >= 60) {
        printf("Your Assesment is D\n");
    } else if (score >= 50) {
        printf("Your Assesment is E\n");
    } else {
        printf("Your Assesment is F\n");
    }
    return 0;
}