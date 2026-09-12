//typedef で型に別名を付ける
#include <stdio.h>

#define AMOUNT 3

typedef struct {
    int id;
    char name[32];
    double score;
} Student;

void print_student(Student *pointer, int i) {
    printf("ID: %d, Name: %s, Score: %.1lf\n",(pointer+i)->id,(pointer+i)->name,(pointer+i)->score);
}
/*
AI_review
void print_student(Student *p) {
    printf("ID: %d, Name: %s, Score: %.1lf\n", p->id, p->name, p->score);
}

// 呼び出し
print_student(p + i);   // または print_student(&st[i]);
*/

int main(void) {
    Student st[AMOUNT] = {
        {1006, "Kawaguchi", 85.5},
        {1007, "Seno", 82.6},
        {1008, "Koshio", 92.3}
    };
    double total_score = 0.0,avg;

    Student *p = st; //これは構造体のポインタを宣言し、代入したのか？
    /*
    質問への回答
    はい、その理解で正しいです。
    Student *p = st;
    これは次の2つを同時にやっています：

    Student 型へのポインタ変数 p を宣言する
    配列 st の先頭アドレスを p に代入する

    st は配列名なので「先頭要素のアドレス」を表します。

    つまり p は st[0] を指すポインタになります。
    */

    for (int i = 0; i < AMOUNT; i++) {
        print_student(p,i);
        total_score += (p+i)->score;
    }

    avg = total_score / AMOUNT;
    printf("平均点: %.1lf\n",avg);

    return 0;
}