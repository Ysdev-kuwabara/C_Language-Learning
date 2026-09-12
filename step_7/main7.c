// リンクリストにノードを追加する（簡単な操作）

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main(void) {
    //空のリストから始める
    Node *head = NULL;

    //ノードを先頭に追加する処理
    int values[] = {10, 20, 30};
    for (int i = 0; i < 3; i++) {
        Node *new_node = (Node *)malloc(sizeof(Node));
        if (new_node == NULL) {
            printf("メモリ確保失敗\n");
            return 1;
        }

        new_node->data = values[i];

        //新しいノードのnextに現在のheadを指せる
        new_node->next = head;
        //headを新しいノードに更新（先頭が変わる）
        head = new_node;
    }

    //リストの内容を先頭から表示
    Node *p = head;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }

    //解放用のループを使ってすべてのノードを free
    p = head;
    while (p != NULL) {
        Node *next_node = p->next; // free する前に次のノードのアドレスを退避
        free(p);
        p = next_node; // 退避しておいたアドレスへ進む
    }
    head = NULL; // 安全のため head を NULL に戻す

    return 0;
}