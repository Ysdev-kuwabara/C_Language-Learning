// 構造体を動的に確保する（mallocとの組み合わせ）
#include <stdio.h>
#include <stdlib.h>

#define AMOUNT 3

typedef struct {
    int ID;
    char name[32];
    double score;
} Student;

void print_student (Student *p) {
    printf("ID: %d, Name: %s, Score: %.1lf\n",p->ID,p->name,p->score);
}

int main(void) {
    Student *p = (Student*)malloc(sizeof(Student) * AMOUNT);
    if (p == NULL) {
        printf("メモリ確保失敗\n");
        return 1;
    }

    p[0] = (Student){1006, "Kawaguchi", 85.5};
    p[1] = (Student){1007, "Seno", 82.6};
    p[2] = (Student){1008, "Koshio", 92.3};

    double sum = 0.0,avg;

    for (int i = 0; i < AMOUNT; i++) {
        print_student((p+i));
        sum += (p+i)->score;
    }

    avg = sum / AMOUNT;
    printf("平均点: %.1lf\n",avg);

    free(p);
    p = NULL;

    return 0;
}