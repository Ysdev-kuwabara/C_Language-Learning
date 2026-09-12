// 構造体の基本

#include <stdio.h>

struct Student {
    int id;
    char name[32];
    double score;
};

int main(void) {
    // 宣言
    struct Student s1 = {1006, "Kawaguchi", 85};

    printf("ID: %d\n",s1.id);
    printf("Name: %s\n",s1.name);
    printf("Score: %lf\n",s1.score);
    return 0;
}