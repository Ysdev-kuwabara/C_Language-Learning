#include <stdio.h>
#include <stdlib.h>

#define AMOUNT 5

typedef struct {
    int id;
    char name[32];
    double score;
} Student;

void print_student(Student *p) {
    printf("ID: %d, Name: %s, Score: %.1lf\n",p->id,p->name,p->score);
}

int main(void) {
    Student *p = (Student*)malloc(sizeof(Student) * AMOUNT);
    if (p == NULL) {
        printf("メモリ確保失敗\n");
        return 1;
    }

    p[0] = (Student){1001, "Taro", 78.0};
    p[1] = (Student){1002, "Hanako", 95.5};
    p[2] = (Student){1003, "Jiro", 82.0};
    p[3] = (Student){1004, "Saburo", 88.5};
    p[4] = (Student){1005, "Shiro", 91.0};

    double max = 0.0;
    max = p->score;

    for (int i = 0; i < AMOUNT; i++) {
        print_student((p+i));
        if ((p+i)->score > max) {
            max = (p+i)->score;
        }
    }

    printf("最高点の学生:\n");
    for (int i = 0; i < AMOUNT; i++) {
        if (max == (p+i)->score) {
            print_student((p+i));
        }
    }

    free(p);
    p = NULL;
}

//