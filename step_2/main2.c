//簡単なメニュー選択プログラム（1〜3を選ばせる）
#include <stdio.h>

int main(void) {
    int menu_num,choice;

    while (1) {
        printf("Please enter a number between 1 and 3.\n");
        choice = scanf("%d",&menu_num);

        if (choice > 3 || choice < 1) {
            printf("Please enter a number between 1 and 3.\n");
            continue;
        }

        break;
    }

    switch (choice) {
        case 1:
            printf("Your choice is 1\n");
            break;
        case 2:
            printf("Your choice is 2\n");
            break;

        case 3:
            printf("Your choice is 3\n");
            break;

        default:
            printf("Your choice is not adopted\n");
            break;
    }
    return 0;
}