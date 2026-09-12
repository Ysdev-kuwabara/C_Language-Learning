/*
確認しました。**動作としては正しく動きます。**

良い点：
- 動的確保・初期化・表示ができている
- 最高点を正しく見つけられている
- 最高点の学生を表示できている

改善できる点（次回から意識すると良い）：

今のコードは「最高点の値」だけを覚えて、あとでもう一度ループして探しています。  
人数が少ないうちは問題ありませんが、より良い書き方は **「最高点の学生を指すポインタ」を持っておく** ことです。

```c
Student *best = p;   // 最初は先頭を仮の最高にする

for (int i = 1; i < AMOUNT; i++) {
    if ((p + i)->score > best->score) {
        best = p + i;
    }
}

printf("最高点の学生:\n");
print_student(best);
```

こうするとループが1回で済み、複数人同じ点数の場合も「最初に見つかった人」を簡単に扱えます。

今のコードでも仕様は満たしているので、先に進んで大丈夫です。


*/

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
    Student *best = p; //最初は先頭を仮の最高にする

    for (int i = 0; i < AMOUNT; i++) {
        print_student((p+i));
        if ((p+i)->score > best->score) {
            best = p + i;
        }
    }

    printf("最高点の学生:\n");
    print_student(best);

    free(p);
    p = NULL;
}

//