//BMI計算プログラム（身長・体重を入力 -> BMIを表示）
#include <stdio.h>

double bmi(double weight, double height) {
    return weight/height/height;
}

int main(void) {
    double height, weight;

    printf("身長を入力してください（m）\n");
    scanf("%lf",&height);
    printf("体重を入力してください（kg）\n");
    scanf("%lf",&weight);

    printf("Your BMI is %lf\n",bmi(weight,height));
    return 0;
}