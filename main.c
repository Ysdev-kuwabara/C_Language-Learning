#include <stdio.h>

int main() {
    int x = 10;
    if (x > 5) {
        goto skip;
    }

    printf("この行は実行されない");

    skip:
        printf("ここから展開：x = %d\n",x);
        
    return 0;
}