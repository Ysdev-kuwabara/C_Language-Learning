//構造体を関数に渡す

#include <stdio.h>

//構造体が関数より最初
struct Student {
    int id;
    char name[32];
    double score;
};

void print_student(struct Student *p) {
    printf("ID: %d, Name: %s, Score: %.1lf\n",p->id,p->name,p->score);
}

void update_score(struct Student *p,double point) {
    p->score = point;
}

int main(void) {
    struct Student st = {1006, "Kawaguchi", 85.5};

    printf("変更前: ");
    print_student(&st);

    update_score(&st, 90.0);
    printf("変更後: ");
    print_student(&st);

    return 0;
}