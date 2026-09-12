// 自己参照構造体（リンクリストの入り口）

#include <stdio.h>
#include <stdlib.h>

#define AMOUNT 3

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main(void) {
    //各ノードを個別にmallocで確保
    Node *node1 = (Node *)malloc(sizeof(Node));
    Node *node2 = (Node *)malloc(sizeof(Node));
    Node *node3 = (Node *)malloc(sizeof(Node));

    if (node1 == NULL || node2 == NULL || node3 == NULL) {
        printf("メモリ確保失敗\n");
        return 1;
    }

    // データのセット
    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    // 3. ノードの接続 (node1 -> node2 -> node3 -> NULL)
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // 4. 先頭から順番にデータを表示 (while ループ)
    Node *p = node1; //辿るためのポインタ変数
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }

    free(node1);
    free(node2);
    free(node3);

    return 0;
}

