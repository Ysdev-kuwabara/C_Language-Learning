//整数2つを入力して四則演算の結果を表示する
#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d",&num1);
    scanf("%d",&num2);

    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    printf("%d / %d = %d\n",num1,num2,num1/num2);
    return 0;
}