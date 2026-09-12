//構造体の配列とポインタ

#include <stdio.h>

#define AMOUNT 3

struct Student {
    int id;
    char name[32];
    double score;
};

int main(void) {
    struct Student students[AMOUNT] = {
        {1006, "Kawaguchi", 85.5},
        {1007, "Seno", 82.6},
        {1008, "Koshio", 92.3},
    };
    
    struct Student *p = students;


    for (int i=0; i < AMOUNT; i++) {
        printf("ID: %d, Name: %s, Score: %.1lf\n",(p+i)->id,(p+i)->name,(p+i)->score);
    }

    return 0;
}

